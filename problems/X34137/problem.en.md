# Intermediate vertices

Given a directed graph and two different vertices $u$ and $v$, compute
how many vertices $x$ different from $u$ and $v$ there are such that
there exists some path from $u$ to $v$ passing through $x$.

## Input

The input consists in several cases. Each case begins with $n$, $u$, $v$
and $m$, followed by $m$ different pairs $x$ $y$, with $x \neq y$, which
indicate an arc that goes from $x$ to $y$. Assume $2 \leq n \leq 10^4$,
$0 \leq m \leq 10n$, and that the vertices are numbered between $0$ and
$n - 1$.

## Output

For each case, write the number of vertices that can be visited when
going from $u$ to $v$ following some path.

## Hint

For each case, essentially the expected solution only makes two
traversals, each on the right graph.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T22:47:27.299Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
