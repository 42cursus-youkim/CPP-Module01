#!/usr/bin/env python3

from pathlib import Path
from subprocess import run

from hypothesis import example, given
from hypothesis import strategies as st
from termcolor import cprint

EXIT_FAILURE = 1


@given(st.text(min_size=1), st.text(min_size=1))
@example("para", "PARA")
@example("para", "")
@example(" ", "!!!!")
def test_replace_works(word: str, to: str):
    cprint(f"case: <{word}> => <{to=}>", "yellow")
    param = ["./prog.out", "test.txt", word, to]
    try:
        result = run(param)
    except ValueError:
        cprint(f"skipping due to {word} or {to} a NULL byte", "magenta")
        return

    if len(param) != 4:
        assert result.returncode == EXIT_FAILURE

    else:
        text = Path("test.replace").read_text()
        answer = Path("test.txt").read_text().replace(word, to)
        assert text == answer


def test_invalid_file():
    param = ["./prog.out", "DOES.NOT.EXIST", "para", "PARA"]
    assert run(param).returncode == EXIT_FAILURE


def test_invalid_arg():
    param = ["./prog.out"]
    for _ in range(6):
        assert run(param).returncode == EXIT_FAILURE
        param.append("a")


if __name__ == "__main__":
    test_replace_works()
    test_invalid_file()
    test_invalid_arg()
