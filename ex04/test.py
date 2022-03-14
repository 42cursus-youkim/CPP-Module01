#!/bin/env python3

from pathlib import Path
from subprocess import run

from hypothesis import example, given
from hypothesis import strategies as st
from termcolor import cprint


@given(st.text(), st.text())
@example("para", "PARA")
def test_replace_works(word: str, to: str):
    cprint(f"case: {word} {to}", "yellow")
    run(["./replace", "test.txt", word, to])

    text = Path("test.replace").read_text()
    answer = Path("test.txt").read_text().replace(word, to)
    assert text == answer


if __name__ == "__main__":
    test_replace_works()
