# The problem of "the Game"

Here, you will have to solve a problem which is useful for many "Games"
of the Algorithms course (and also the EDA course): Given an
$n \times m$ board with treasures and obstacles, we need to calculate
the distance from each position on the board to the nearest treasure.
Assume that the allowed movements are only horizontal and vertical, and
that we cannot pass through any obstacle or leave the board.

## Input

Input consists of several cases, each one with the sizes $n$ and $m$,
followed by $n$ lines with $m$ characters each: dots indicate free
positions, '`T`' treasures, and '`X`' obstacles. Assume
$1 \le n \cdot m \le 10^6$.

## Output

For each case, and for each position, if it contains an obstacle, mark
it with a -2. Otherwise, print the minimum distance to a treasure, or a
-1 if none can be reached. Print a line with 10 dashes at the end of
each case.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:24:14.418Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
