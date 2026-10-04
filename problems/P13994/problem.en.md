# Weighted shortest path (2)

Write a program that, given a directed graph with positive costs at the
arcs, and two vertices $x$ and $y$, prints the path of minimum cost that
goes from $x$ to $y$.

## Input

Input consists of several cases. Every case begins with the number of
vertices $n$ and the number of arcs $m$. Follow $m$ triples $u, v, c$,
indicating that there is an arc $u \to v$ of cost $c$, where $u \ne v$
and $1 \le c \le 10^4$. Finally, we have $x$ and $y$. Assume
$1 \le n \le 10^4$, $0 \le m \le 5n$, and that for every pair of
vertices $u$ and $v$ there is at most one arc of the kind $u \to v$. All
numbers are integers. Vertices are numbered from 0 to $n-1$. If $y$ is
reachable from $x$, you have the guarantee that there is a unique path.

**The condition for $c$ was previously $c \le 1000$. It was updated to
create new test cases.**

## Output

For every case, print the path of minimum cost that goes from $x$ to
$y$. If there is no path from $x$ to $y$, state so.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T10:08:16.197Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
