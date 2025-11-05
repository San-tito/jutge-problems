# Number of peaks in input numbers

Given a natural number `n`, a peak in `n` are three consecutive digits
of the representation in base 10 of `n` such that the one in the middle
is strictly greater than the other two surrounding it.

Write a program that reads input numbers and counts how many peaks there
are in each of them.

For example, with input `192056423` it must print `2`.

## Input

The input has an arbitrary number of cases. Each case has a positive
natural number in one line.

## Output

For each case, there is one line with the corresponding number of peaks.

## Observation

It is not allowed to use any massive storage data structure, not even
`string`. Please solve this exercise by just using type `int` and
manipulating integers with the basic operators (`+,-,*,/,%`).

Assessment over 10 points:

- Slow solution: 5 points.

- Fast solution: 10 points.

We understand as fast solution one being correct, with linear cost and
able to overcome both the public and private tests. We understand as
slow solution one not being fast, but correct and able to overcome the
public tests.

## Author

PRO1

© Jutge.org, 2006--2025.

