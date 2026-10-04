# Select from two sorted arrays

Write an efficient function

## Interface

+-------:+:-----------------------------------------------------------------+
| C++    | ``` c++                                                          |
|        | int select(int k, const vector<int>& v1, const vector<int>& v2); |
|        | ```                                                              |
+--------+------------------------------------------------------------------+
| Python | ``` python                                                       |
|        | def select(k: int, v1: list[int], v2: list[int]) -> int:         |
|        | ```                                                              |
+--------+------------------------------------------------------------------+

that returns the $k$-th largest of all the elements contained in $v1$
and $v2$, taking into account repeated elements. For instance, if $v1$
contains a 5 and a 7, and $v2$ only contains a 5, then a call to
$select(1, v1, v2)$ should return 5, a call to $select(2, v1, v2)$
should also return 5, and a call to $select(3, v1, v2)$ should return 7.

## Precondition

The vectors $v1$ and $v2$ are sorted in nondecreasing order. The index
$k$ is correct, that is, it is between 1 and $v1.size()$ $+$
$v2.size()$. Therefore, at least one of the vectors is not empty.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Problem information

Author: Salvador Roura

Generation: 2026-03-10T20:11:03.374Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
