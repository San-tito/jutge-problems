# Farmers and knight

Given an $n \times m$ board that contains farmers, a knight and some
obstacles, you have to find a shortest path form the knight to any
farmer. Asume that farmers do not move, and that the knight can move to
any of its eight adjacent cells which do not have an obstacle.

## Input

Input consists of several cases, each starting with $n$ and $m$,
followed by $n$ rows, each which $m$ characters. A '`K`' represents a
knight, an '`F`' is a farmer, an '`X`' is an obstacle, and a '`.`' is an
empty cell. You can assume $3 \le n \le 1000$, $3 \le m \le 1000$, that
the board has exactly one knight and at least one farmer, and that the
first row, the last row, the first column, and the last column only have
obstacles.

## Output

For each board, print the minimum number of cells to go from the knight
to any farmer, followed by the coordinates (numbered from 0) of the
path. If there is more than one solution, print any of them. If there is
no solution, print 0. Please have a look at the format.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T11:21:24.344Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
