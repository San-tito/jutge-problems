# Short roads

Consider the map of a country, with $n$ cities (numbered between $0$ and
$n-1$) and $m$ unidirectional roads that connect them. Each road has a
certain length. We want to go from city $0$ to city $1$. As we travel
with people prone to get carsick, and we do not want to stop halfway to
stretch our legs, we want to follow the route such that the longest road
we take is as short as possible. That is, if the route uses $k$ roads,
with lengths $\ell_1$, $\cdots$, $\ell_k$, and
$\ell = \max(\ell_1, \cdots, \ell_k)$, we want $\ell$ to be as small as
possible.

## Input

The input consists in several cases. Each case begins with $n$ and $m$,
followed by $m$ triplets $x$ $y$ $\ell$, with $x \neq y$, indicating a
road that goes from $x$ to $y$ of length $\ell$. Assume
$2 \leq n \leq 10^4$, $1 \leq m \leq 10n$, that there is at most one
road from $x$ to $y$ in this order, that the lengths are between 1 and
$10^5$, and that there is always a route between 0 and 1.

## Output

For each case, write the maximum length of the roads of the best
possible route.

The second line of the example of output corresponds to the route
$0 \to 4 \to 2 \to 1$, which has a road (the $0 \to 4$) of maximum
length 80.

## Hint

Consider a variant of Dijkstra's algorithm.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T22:48:18.591Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
