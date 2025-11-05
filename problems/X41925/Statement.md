# Repetitions, conflicts and coincidences in a list of people

Given a list of people described by an identifier and a name, you must
count three things:

- Repetitions: number of pairs of persons with the same identifier and
  the same name.

- Conflicts: number of pairs of persons with the same identifier and
  different name.

- Coincidences: number of pairs of persons with a different identifier
  but the same name.

## Input

The input consists of several cases. Each case starts with a positive
natural $n$ in a separate line, which is the number of people. After
that come $n$ lines, each one with a natural number and a string, which
are the identifier and name of a person. At the end there is a blank
line.

## Output

For each case, the output has three natural numbers in one line, the
number of repetitions, conflicts and coincidences in the list of people
at the input.

## Observation

Evaluation over 10 points:

- Slow solution: 5 points.

- Fast solution: 10 points.

It is understood that a fast solution is correct, with $n\log(n)$ cost
and passes all test cases, both public and private. A slow solution is
defined as one that is not fast, but it is correct and passes the public
test cases.

## Author

PRO1

© Jutge.org, 2006--2025.

