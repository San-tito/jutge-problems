# Fixed points

Let $S = x_1, \dots, x_n$ be a sequence of integer numbers such that
$x_1 < \dots < x_n$. For every integer number $a$ and every index
$1 \le i \le n$, define $f_a(i) = x_i + a$. Write a program that, given
$S$ and $a$, tells whether there is some $i$ such that $f_a(i) = i$.

## Input

Input consists of several cases. Every case begins with $n$, followed by
$S$, followed by a number $m$, followed by $m$ different integer numbers
$a_1, \dots, a_m$. Assume $1 \le n \le 10^6$.

## Output

For every case, print its number starting at 1. Afterwards, for every
$a_j$ print the position of its fixed point. If no fixed point exists,
state so. If there is more than one fixed point, print the smallest one.
Print a blank line after the output for every case.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T10:22:29.729Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
