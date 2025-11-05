# Game of life (1)

The English mathematician John Conway invented in 1970 the following
game: Imagine a matrix with $n$ rows and $m$ columns. We consider
neighbor positions to a given position the (at most, eight) adjacent
positions, either horizontally, vertically or diagonally. Every moment,
each position is either empty or it contains a bacterium. The rules are:

- An empty position at time $t$ will contain a bacterium at time $t + 1$
  if and only if at time $t$ it had exactly three neighbor bacteria.

- An occupied position at time $t$ will contain a bacterium at time
  $t + 1$ if and only if at time $t$ it had two or three neighbor
  bacteria.

Write a program that, for every given matrix, prints it at the next
moment of time.

## Input

Input consists of several cases. Every case begins with $n$ and $m$
(both strictly positive), followed by $n$ lines, each one with $m$
characters: '`B`' if the position has a bacterium, and '`.`' if the
position is empty. A special case with $n = m = 0$ marks the end of the
input.

## Output

For each case, print the matrix corresponding to the next moment of time
using the same format of the input (do not print $n$ and $m$). Separate
matrices with an empty line.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

