# Two coins of each kind (1)

Given a natural number $x$ and $n$ different coin values $c_1 \ldots
c_n$, compute in how many ways it is possible to achieve change $x$ by
using each value at most twice. Here, two coins with the same value are
considered different.

For example, if $x = 4$ and the available values are $1$ and $2$, then
there are three ways to achieve it: $1 + 1' + 2$, $1 + 1' + 2'$, and
also $2 + 2'$.

## Input

Input consists of several cases. Every case begins with $x$ and $n$,
followed by $c_1 \ldots c_n$. Assume $1 \le n \le 20$,
$1 \le c_i \le x \le 1000$, and that all $c_i$ are different.

## Output

For every case print, in lexicographic order, all possible ways to
exactly achieve change $x$ by using each value at most twice. Print
every solution with its values sorted from small to big. In doing that,
assume $1 < 1' < 2 < 2' < \ldots$. Use "`1p`" to print $1'$, etcetera.
Print a line with 10 dashes at the end of every case.

## Hint

A simply pruned backtracking should be enough.

## Problem information

Author: Unknown\
Translator: Albert Atserias

Generation: 2026-01-25T11:11:57.145Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
