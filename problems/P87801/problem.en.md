# Word search puzzle

Consider an $r \times c$ board where each cell has a letter and a number
that indicates the value of that cell. Given several words $w$, compute
the maximum number of points achievable by placing $w$ horizontally (to
the right) or vertically (down), so that all the letters match those of
the board.

## Input

Input consists of several cases, each with the dimensions $r$ and $c$,
followed by $r$ rows with $c$ lowercase letters each, followed by $r$
rows with $c$ natural numbers each. Then comes a number $t$ followed by
$t$ nonempty words made up of lowercase letters. You can assume that $r$
and $c$ are between 1 and 100, that the value of each cell is between 0
and $10^6$, and that the given words do not have more than 100 letters.

## Output

For each word of each case, print the maximum possible score placing the
word horizontally or vertically. If the word cannot be found, print
"`no`".

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T12:13:16.900Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
