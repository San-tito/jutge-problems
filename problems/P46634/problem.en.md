# Maximum cost of a path (1)

Given a directed and complete graph with $n$ vertices, and an initial
vertex $x$, compute the maximum cost of all the paths without repeated
vertices that begin at $x$. The given graph is represented by an
$n \times n$ matrix $M$, where for every pair $(i, j)$ with $i \ne j$,
$m_{ij}$ is the (perhaps negative) cost of the arc from $i$ to $j$.

For instance, the maximum cost of the first test is 80, corresponding to
the path $1 \to 0 \to 3$, with cost $-10 + 90 = 80$.

## Input

Input consists of the number of vertices $n$, followed by the matrix $M$
($n$ lines, each one with $n$ integer numbers), followed by the initial
vertex $x$. Vertices are numbered from 0 to $n-1$. You can assume
$1 \le n \le 11$, $0 \le x < n$, that the diagonal has only zeros, and
that the rest of numbers are between $-10^6$ and $10^6$.

## Output

Print the maximum cost of all the paths without repeated vertices that
begin at $x$.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:22:32.339Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
