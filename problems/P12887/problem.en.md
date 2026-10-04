# Minimum spanning trees

Given a connected, undirected graph, a spanning tree of that graph is a
subgraph which is a tree and connects all the vertices together. On a
weighted graph, the weight of a spanning tree is the sum of the weights
of its edges. A minimum spanning tree is a spanning tree with weight
less than or equal to the weight of every other spanning tree.

## Input

Input consists of different weighted, connected, undirected graphs. For
each graph, the following integers are given: First, $n \ge 1$
represents the number of vertices on the graph. Then, $m$ represents the
number of edges on the graph. Finally, a set of $m$ weighted edges
$u,v,w$ is given by specifying its two end points $u$ and $v$ and its
weight $w \ge 1$. Vertices are numbered starting from 1. There are no
edges connecting a vertex to itself, but there may be more than two
edges connecting the same pair of vertices. Every given graph is
connected. All weights are strictly positive integers.

## Output

For every graph in the input, write the weight of its minimum spanning
tree.

## Problem information

Author: Jordi Petit

Generation: 2026-01-25T10:05:58.373Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
