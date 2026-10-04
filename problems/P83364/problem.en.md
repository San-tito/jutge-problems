# Numbers with no forbidden prefixes

Write a backtracking program to print all the $n$-digit numbers such
that none of its prefixes (the whole number included) is a multiple of
any of $m$ given forbidden divisors $d_1, \dots, d_m$.

For instance, if $n = 3$, $m = 6$ and the forbidden divisors are 2, 3,
5, 7, 11 and 19, then 137 is allowed, because none of its three prefixes
1, 13 and 137 is a multiple of any $d_i$. By contrast, 433 is not
allowed, because some of its three prefixes 4, 43 and 433 is multiple os
some $d_i$ (4 is multiple of 2).

## Input

Input consists of several cases. Each case begins with $n$ and $m$,
followed by $m$ different integer numbers between 2 and 1000. You can
assume $1 \le n \le 9$ and $1 \le m \le 15$.

## Output

For every case, print all the numbers with exactly $n$ digits and no
forbidden prefixes, one per line and in increasing order. Print a line
with 10 dashes at the end of each case.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:59:38.372Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
