# Cliques

Given an undirected graph with $n$ vertices and $m$ edges, tell whether
every connected component is a clique, that is, if all the vertices of
the component are directly connected to each other.

## Input

Input consists of several cases. Each case begins with $n$ and $m$,
followed by $m$ pairs $x$ $y$, with $x \ne y$, indicating an edge
between $x$ and $y$. Suppose $1 \le n \le 10^5$, $0 \le m \le 5n$, that
the vertices are numbered between 0 and $n-1$, and that there are no
repeated edges.

## Output

For each given graph, print "`SI`" if every connected component is a
clique, and "`NO`" otherwise.

## Observation

Even if a green light is obtained, only solutions that perform a single
graph traversal will receive the maximum score.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T23:06:42.008Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
