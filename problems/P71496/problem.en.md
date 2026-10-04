# Cuts

The government of a distant country is cutting as much as possible. Now
they have noticed that, often, there is more than one path that goes
from one town to another town (either a direct road, or a sequence of
roads passing through other intermediate towns). Since every road has
some maintenance cost, the government has decided to eliminate several
roads to save as much as possible, but keeping the road system
connected. Can you calculate the maximum savings?

## Input

Input consists of several cases. Every case begins with the number of
towns (vertices) $n$ and the number of roads (edges) $m$. Follow $m$
triples $x$ $y$ $c$, indicating that the maintenance cost of the road
between $x$ and $y$ is $c$. Towns are numbered from 0 to $n - 1$. Assume
$1 \le n \le 10^4$, $n - 1 \le m \le 10 n$, and $1 \le c \le 10^4$.
There may be more than one road between two towns, and even roads with
$x = y$. Every given graph is connected.

## Output

For every case, print the maximum savings achiving that there is exactly
one path between every pair of towns.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:39:05.064Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
