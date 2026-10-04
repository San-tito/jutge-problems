# Jumps in pairs

Given an undirected graph and two vertices $s$ and $t$, compute the
minimum number of jumps needed to go from $s$ to $t$. Here, we say that
a jump between two vertices $x$ and $z$ is possible if there is a vertex
$y$ adjacent to both $x$ and $z$.

## Input

Input consists of several graphs. Every case begins with $n$, $m$, $s$
and $t$, followed by $m$ pairs $x$ $y$, with $x \ne y$, indicating an
edge between $x$ and $y$. Suppose $2 \le n \le 10^5$, $0 \le m \le 5n$,
$s \ne t$, that the vertices are numbered between 0 and $n - 1$, and
that there are no repeated edges.

## Output

For each graph, print the minimum number of jumps to go from $s$ to $t$.
If it is impossible, print "`NO`".

## Observation

Even if a green light is obtained, only $\Theta(n+m)$ solutions will
receive the maximum score.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T12:49:45.211Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
