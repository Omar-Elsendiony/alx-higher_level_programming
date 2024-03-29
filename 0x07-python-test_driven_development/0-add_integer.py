#!/usr/bin/python3
"""
This module contains add_integer function that adds two
integers/floats after casting them to integers, otherwise, raises an error.
"""


def add_integer(a, b=98):
    """Return the integer addition of a and b.
    Float arguments are typecasted to ints before addition is performed.
    Raises: TypeError: If either of a or b or both is a
    non-integer and non-float."""

    if (not isinstance(a, int) and not isinstance(a, float)):
        raise TypeError("a must be an integer")
    if (not isinstance(b, int) and not isinstance(b, float)):
        raise TypeError("b must be an integer")
    return int(a) + int(b)
