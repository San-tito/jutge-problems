# Sudoku

Sudoku is a phenomenon all over the world. This addictive logic game,
originated in the U.K. and popularized in Japan, has spread across the
globe. The puzzles are now syndicated daily in newspapers in Australia,
Germany, Scandinavia, ... even Mireia is addicted to it!

The rules are easy: You are given a $9\times 9$ grid with some numbers
in it, and you should fill in the grid so that every row, every column
and every $3\times3$ box contains the numbers from 1 to 9. For instance,
the puzzle on the left has as unique solution the grid on the right:

::::: center
::: pspicture
(9,9) (0,0)(0,9) (1,0)(1,9) (2,0)(2,9) (3,0)(3,9) (4,0)(4,9) (5,0)(5,9)
(6,0)(6,9) (7,0)(7,9) (8,0)(8,9) (9,0)(9,9)

(0,0)(9,0) (0,1)(9,1) (0,2)(9,2) (0,3)(9,3) (0,4)(9,4) (0,5)(9,5)
(0,6)(9,6) (0,7)(9,7) (0,8)(9,8) (0,9)(9,9)

(0.5,0.5)4 (2.5,0.5)5 (3.5,0.5)6

(1.5,1.5)2 (2.5,1.5)9 (3.5,1.5)1

(4.5,2.5)7 (5.5,2.5)5 (8.5,2.5)8

(2.5,3.5)6 (3.5,3.5)4 (4.5,3.5)2

(1.5,4.5)4 (2.5,4.5)8 (6.5,4.5)5 (7.5,4.5)6

(4.5,5.5)6 (5.5,5.5)1 (6.5,5.5)8

(0.5,6.5)1 (3.5,6.5)9 (4.5,6.5)3

(5.5,7.5)6 (6.5,7.5)4 (7.5,7.5)5

(5.5,8.5)2 (6.5,8.5)3 (8.5,8.5)7
:::

::: pspicture
(9,9) (0,0)(0,9) (1,0)(1,9) (2,0)(2,9) (3,0)(3,9) (4,0)(4,9) (5,0)(5,9)
(6,0)(6,9) (7,0)(7,9) (8,0)(8,9) (9,0)(9,9)

(0,0)(9,0) (0,1)(9,1) (0,2)(9,2) (0,3)(9,3) (0,4)(9,4) (0,5)(9,5)
(0,6)(9,6) (0,7)(9,7) (0,8)(9,8) (0,9)(9,9)

(0.5,0.5)4 (1.5,0.5)7 (2.5,0.5)5 (3.5,0.5)6 (4.5,0.5)8 (5.5,0.5)9
(6.5,0.5)1 (7.5,0.5)3 (8.5,0.5)2

(0,1) (0.5,0.5)8 (1.5,0.5)2 (2.5,0.5)9 (3.5,0.5)1 (4.5,0.5)4 (5.5,0.5)3
(6.5,0.5)6 (7.5,0.5)7 (8.5,0.5)5

(0,2) (0.5,0.5)6 (1.5,0.5)3 (2.5,0.5)1 (3.5,0.5)2 (4.5,0.5)7 (5.5,0.5)5
(6.5,0.5)9 (7.5,0.5)4 (8.5,0.5)8

(0,3) (0.5,0.5)5 (1.5,0.5)1 (2.5,0.5)6 (3.5,0.5)4 (4.5,0.5)2 (5.5,0.5)8
(6.5,0.5)7 (7.5,0.5)9 (8.5,0.5)3

(0,4) (0.5,0.5)2 (1.5,0.5)4 (2.5,0.5)8 (3.5,0.5)3 (4.5,0.5)9 (5.5,0.5)7
(6.5,0.5)5 (7.5,0.5)6 (8.5,0.5)1

(0,5) (0.5,0.5)7 (1.5,0.5)9 (2.5,0.5)3 (3.5,0.5)5 (4.5,0.5)6 (5.5,0.5)1
(6.5,0.5)8 (7.5,0.5)2 (8.5,0.5)4

(0,6) (0.5,0.5)1 (1.5,0.5)5 (2.5,0.5)7 (3.5,0.5)9 (4.5,0.5)3 (5.5,0.5)4
(6.5,0.5)2 (7.5,0.5)8 (8.5,0.5)6

(0,7) (0.5,0.5)3 (1.5,0.5)8 (2.5,0.5)2 (3.5,0.5)7 (4.5,0.5)1 (5.5,0.5)6
(6.5,0.5)4 (7.5,0.5)5 (8.5,0.5)9

(0,8) (0.5,0.5)9 (1.5,0.5)6 (2.5,0.5)4 (3.5,0.5)8 (4.5,0.5)5 (5.5,0.5)2
(6.5,0.5)3 (7.5,0.5)1 (8.5,0.5)7
:::
:::::

Write a program to solve Sudoku puzzles. Your program will be tested
against Sudokus that have appeared in some newspapers. These are
guaranteed to have a unique solution.

## Input

Input begins with a line with a number $n \ge 1$. Follow $n$ Sudokus,
each one consisting of nine lines, each one with nine space-separated
characters, which are digits from 1 to 9 and dots. The latter indicate
cells that are still empty. There is a blank line before every puzzle.

## Output

Print the solutions using the same format as in the input: First, print
$n$ on a line. For each puzzle, print nine lines, each with nine digits
separated by spaces. Print a blank line before every solution.

## Problem information

Author: Jordi Petit

Generation: 2026-01-25T11:54:59.676Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
