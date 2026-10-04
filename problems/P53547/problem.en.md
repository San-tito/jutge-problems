# Tiny bishops

Consider an $n \times m$ chess board, where some cells are legal and
some are prohibited. You have many small bishops, so tiny that an
unbounded number of them fit in every cell. As expected, bishops can
only move diagonally. For every given board description, tell if there
is a way to (repeatedly) move as many bishops as needed, never passing a
prohibited cell, so that eventually all the legal cells have the same
number of bishops.

## Input

Input begins with a number $t \ge 0$, followed by $t$ cases. Every case
begins with the number of rows $n$ and the number of columns $m$. Follow
$n$ lines, each with $m$ items separated with spaces. Prohibited cells
are marked with an '`X`'. For legal cells, its initial number of bishops
is given. No cell has more than 1000 bishops. Assume
$1 \le n, m \le 100$.

## Output

For every case, print its number followed by "`yes`" or "`no`",
depending on whether it is possible to move the bishops so that
eventually all the legal cells have the same number.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T11:15:01.540Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
