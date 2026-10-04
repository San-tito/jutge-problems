# Digits in optimal order

Given two natural numbers $m$ and $n$, you must construct a number $x$
using the digits $\{1, \dots, n\}$ (exactly one of each) such that no
(non-empty) prefix of $x$ is a multiple of $m$. For example, with $m=3$
and $n=4$, $x=2314$ is not a valid order, because $231$ is a multiple of
$3$. In contrast, $x=4312$ is a valid order, because neither $4$, nor
$43$, nor $431$, nor $4312$ are multiples of $3$.

Moreover, you have a matrix $M[1..n][1..n]$ such that $M[i][j]$ contains
the prize that is obtained if digit $j$ is placed immediately to the
right of digit $i$. Maximize the total sum of the prizes.

## Input

The input consists of several cases. Each case starts with $m$ and $n$,
followed by $M$: $n$ rows, each with $n$ natural numbers between 1 and
$10^6$, except for the diagonal, that is filled with zeros. You can
assume that $3 \le m \le 1000$ and $2 \le n \le 9$.

## Output

For each case, print the maximum possible prize. If no $x$ can be
constructed, print 0.

## Problem information

Author: Unknown\
Translator: Albert Oliveras

Generation: 2026-01-25T11:22:09.366Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
