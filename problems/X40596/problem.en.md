# Balanced sequences

A sequence of numbers is *$d$-balanced* if the absolute value of the
difference between any two consecutive numbers is at most $d$. Formally
$(x_1, x_2, \ldots , x_n)$ is $d$-balanced if for all $1 \leq i < n$ it
holds that $\lvert x_i - x_{i+1} \rvert \leq d$.

Write a program that, given an integer $n\geq 1$ and an integer
$d \geq 0$, writes all $d$-balanced sequences that can be obtained by
reordering the sequence $(1, 2, \ldots , n)$.

## Input

The input consists of an integer $n \geq 1$ followed by another integer
$d \geq 0$.

## Output

Write all $d$-balanced sequences that can be obtained by reordering the
sequence $(1, 2, \ldots , n)$. You can write the sequences in any order.

## Problem information

Author: Albert Oliveras

Generation: 2026-01-25T15:56:08.268Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
