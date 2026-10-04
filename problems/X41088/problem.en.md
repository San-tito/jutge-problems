# Sequences with no wells

A sequence of numbers *has a well* if it contains three consecutive
numbers such that that the endpoints add up more than twice the one in
the middle.

Formally, $(x_1, x_2 , \ldots , x_n)$ has a well if it exists at least
an $i$ with $1 \leq i < n - 1$ such that
$x_i + x_{i+2} > 2\cdot x_{i+1}$.

Write a program that, given an integer $n \geq 1$, writes all sequences
with no well that can be obtained by reordering the sequence
$(1, 2, \ldots , n)$.

## Input

The input consists of an integer $n \geq 1$.

## Output

Write all sequences with no well that can be obtained by reordering the
sequence $(1, 2, \ldots, n)$. You can write the sequences in any order.

## Problem information

Author: Albert Oliveras

Generation: 2026-01-25T15:58:06.529Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
