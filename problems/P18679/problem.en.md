# Balance beam (1)

A gymnast is at the midpoint of a balance beam of length $m$. The
gymnast must jump $n$ times forward or backward, never leaving the bar.
The $i$-th jump has length $\ell_i$. Write a program to compute all the
positions where the gymnast can finish her exercise. The gymnast cannot
skip any jump, nor change the order of the jumps.

## Input

Input consist of the length $m$, the number $n$, and the lengths
$\ell_1, \dots, \ell_n$. Assume $2 \le m \le 10^9$, that $m$ is even,
$0 \le n \le 18$, and $1 \le \ell_i \le 10^8$.

## Output

Assuming that the initial position is 0 (hence, the valid positions
belong to $[-m/2, m/2]$), print all the positions where the gymnast can
finish. Every position must occur as many times as combinations of jumps
make it possible.

## Information about the checker

You can print the solutions to this exercise in any order.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T10:21:32.899Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
