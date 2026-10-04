# Up and down

Assume a two-dimensional world. A fly is initially at position $(0, 0)$,
and it will make $n$ unitary movements to the right, never going
underground. At each step, it will either stay at the same height, go up
one unit, or go down one unit. Generate all possible paths of the fly.

For instance, this is a possible path for $n = 11$:

:::: center
::: pspicture
(11,2)

(0,0)(11,0) (0,0)

(0,0)(1,1) (1,1)(2,2) (2,2)(3,1) (3,1)(4,2) (4,2)(5,1) (5,1)(6,1)
(6,1)(7,0) (7,0)(8,0) (8,0)(9,1) (9,1)(10,2) (10,2)(11,1)
:::
::::

To encode paths, use '`u`' for going up, '`d`' for going down, and '`h`'
for moving horizontally. The previous path is encoded "`uududhdhuud`".

## Input

Input consists of an $n$ between 1 and 11.

## Output

Print all possible paths in alphabetical order.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T21:49:20.782Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
