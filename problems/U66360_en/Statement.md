# Alien Threats

Scientists have discovered **spatial zones** (represented by
two-dimensional arrays) where aliens have been detected. The cells of
each array contain an integer value indicating the density of aliens at
that specific location. Scientists need to identify certain hotspots, or
\"critical zones\" that might indicate an increased threat to humans.

## Input

A sequence of **spatial zones**, terminated by a zero. Each zone is
indicated by:

- An integer n representing the number of rows in the matrix
  ($1 \leq n \leq 100$).

- An integer m representing the number of columns in the matrix
  ($1 \leq m \leq 100$).

- A matrix of size $n \times m$ containing non-negative integers
  representing the density of aliens in each cell of the matrix.

- An integer k representing the size of the \"analysis square\"
  ($1 \leq k \leq min(n, m)$). This square is a submatrix of size
  $k \times k$ that will be used to analyze hotspots.

## Output

There are 3 pieces of information to be displayed:

- For each spatial zone in the sequence, the position (row and column
  index) of the top left vertex of the $k \times k$ subsquare that
  contains the highest total alien density. If there is a tie between
  multiple subsquares, write the position of the subsquare with the
  lowest row position.

- The total sum of alien densities within that subsquare.

- The maximum density value within that subsquare.

## Observation

It is mandatory to write at least one subroutine that reads an entire
**spatial zone**. The subroutine receives a matrix by reference and
fills it with values read from the input. However, it is probably
convenient to create more subroutines for this problem.

## Author

Unknown

© Jutge.org, 2006--2025.

