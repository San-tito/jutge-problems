# Treasures in a map (4)

Write a program that, given a map with treasures and obstacles, computes
the distance from a given initial position to the furthest accessible
treasure. The allowed movements are horizontal or vertical, but not
diagonal. If needed, passing over the treasures is allowed.

## Input

Input begins with the number of rows $n > 0$ and the number of columns
$m > 0$ of the map. Follow $n$ rows with $m$ characters each. A dot
indicates an empty position, an '`X`' indicates an obstacle, and a '`t`'
indicates a treasure. Finally, two numbers $r$ and $c$ indicate the
initial row and column (both of them starting at 1) where we must start
looking for treasures. You can assume that $r$ is between 1 and $n$,
that $c$ is between 1 and $m$, and that the initial position is always
empty.

## Output

Print the minimum number of steps to reach the furthest treasure from
the initial position. If no treasure is accessible, tell so.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T10:41:39.060Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
