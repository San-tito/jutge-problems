# Just Dijkstra

Write a program to compute the minimum cost to go from one vertex to
each of the vertices of a given directed graph with positive costs at
the arcs.

## Input

Input consists of several cases. Every case begins with the number of
vertices $n$ and the number of arcs $m$, followed by $m$ triples $x$ $y$
$c$, to indicate an arc from $x$ to $y$ with cost $c$. Assume
$2 \le n \le 10^4$, $0 \le m \le 5n$, that vertices are numbered from 0
to $n - 1$, $x \ne y$, that for every pair $x$ $y$ there is at most one
arc in each direction, and that all costs $c$ are natural numbers
between 1 and $10^4$.

## Output

For every case, print the minimum cost to go from vertex 0 to the rest
of vertices, in order from 1 to $n - 1$. If there is no path to some
vertex, print "`no`". Print a line with 10 dashes at the end of every
case.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T10:08:30.895Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
