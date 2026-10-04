# Interpersonal dislikes

Given $n$ people and the grade of dislike between them, choose how to
make them sit at a long table, in such a way that the sum of the
interpersonal dislikes of the neighbor persons is minimum, with one
restriction: the leftmost person must be the first person given.

## Input

Input consists of several cases, each with $n$, followed by $n$
different names, followed by an $n \times n$ matrix of natural numbers
between 0 and $10^6$, where the position $(i, j)$ has the dislike
between people $i$ and $j$. The matrix is symmetric, with zeroes at the
diagonal. You can assume $1 \le n \le 12$.

## Output

For every case, print the minimum sum of dislikes, followed by the
optimum placement of people at the table. The test cases are such that
there is always a unique solution.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T12:16:13.113Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
