# Forest

A forest is a graph without cycles, and each of its connected components
is a tree. Given an undirected graph, is it a forest? In case it is, how
many trees does it have?

## Input

Input consists of several graphs. Every graph starts with its number of
vertices $n$ and its number of edges $m$, followed by $m$ pairs $x$ $y$
indicating an edge between vertices $x$ and $y$. Assume
$1 \le n \le 10^4$, $0 \le m < n$, that vertices are numbered from $0$
to $n-1$, and that there are neither repeated edges nor edges of the
type $x$ $x$.

## Output

For every graph, if it is a forest print the number of trees it has.
Otherwise, print "`no`".

## Problem information

Author: Unknown\
Translator: Albert Atserias

Generation: 2026-01-25T15:59:58.687Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
