# Bi-increasing vector

In this problem, we say that a vector with $n$ integer numbers
$v[0..n-1]$ is *bi-increasing* if $n \ge 2$, $v[0] > v[n-1]$, and there
exists an index $j$ between $0$ and $n-2$ such that:

- $v[0] \le \ldots \le v[j-1] \le v[j]$,

- $v[j+1] \le v[j+2] \le \ldots \le v[n-1]$.

For instance, the vector $[12, 12, 15, 20, 1, 3, 3, 5, 9]$ is
bi-increasing (with $j = 3$).

Implement an *efficient* function

        bool search(int x, const vector<int>& v);

such that, given an integer number $x$ and a bi-increasing vector $v$,
returns if $x$ is in $v$ or not. You can use and implement auxiliary
functions if you need them.

## Precondition

The vector $v$ is bi-increasing.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-03-10T18:53:34.260Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
