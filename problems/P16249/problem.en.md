# Task ordering

There are $n$ tasks to be done, but some tasks must be done before
others. Given the names of the tasks and the direct dependencies among
them, print the lexicographically smallest ordering of the tasks.

## Input

Input consists of several cases. Each case begins with $n$, followed by
$n$ names of tasks. Follow the number of direct dependencies $m$,
followed by $m$ pairs of names $x$ $y$, to indicate that $x$ must be
done before $y$. Assume $1 \le n \le 10^4$, $0 \le m \le 10n$, that the
names are made up of between one and six lowercase letters, that no name
is a prefix of another name (in particular, this excludes equal names),
that there are no repeated dependencies, and that there are no
dependencies of the kind $x$ $x$.

## Output

For every case, print the alphabetically smaller string that can be
produced by concatening a valid ordering of the tasks. If there is no
valid ordering, tell so.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T10:14:38.018Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
