# Pairs of a sequence (1)

Write a program that reads sequences of natural numbers, and for each
one tells if it has two elements such that their sum is a prime number.

## Input

Input consists of several sequences, each one in a line. Each sequence
consists of a natural number $n$, followed by $n$ natural numbers
$x_1, \dots, x_n$.

## Output

For each input sequence, print "`yes`" or "`no`" depending on if it is
possible to find two elements $x_i$ and $x_j$ (with $i \neq j$) such
that $x_i + x_j$ is a prime number.

## Observation

Using arrays, it is possible to precompute which numbers are prime and
which are not up to a certain maximum. In this exercice it is not
possible because we do not know any maximum, and it is not necessary for
efficiency reasons because all the numbers are small enough.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

