#!/bin/env python3

from pathlib import Path
from subprocess import run

from hypothesis import example, given
from hypothesis import strategies as st
from termcolor import cprint


@given(st.text(), st.text())
@example("para", "PARA")
def test_replace_works(word: str, to: str):
    cprint(f"case: {word=} {to=}", "yellow")
    if to == r"\x00":
        return
    param = ["./replace", "test.txt", word, to]
    result = run(param)
    if len(word) == 0 or len(param) != 4:
        assert result.returncode == 1

    else:
        text = Path("test.replace").read_text()
        answer = Path("test.txt").read_text().replace(word, to)
        assert text == answer


if __name__ == "__main__":
    test_replace_works()
