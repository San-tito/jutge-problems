# Number of constant square submatrices

Each case of the input in this exercise is a matrix of 0s and 1s. The
program has to compute the total number of non-empty submatrices that
are square and constant (same number of rows and columns and the same
symbol). For instance, consider this as the input matrix:

    00001
    00011
    00011
    01111

It has 1 constant submatrix of size $3\times{}3$ (with 0s), 6 constant
submatrices $2\times{}2$ (4 of them with 0s, and 2 of them with 1s), and
20 constant submatrices $1\times{}1$. Therefore, in this case the output
would be $27$.

## Input

The input has several cases. Each case starts with a line with two
positive naturals $n$ and $m$. After that come $n$ lines with $m$
characters, either $0$ or $1$, which describe a matrix of size
$n\times{}m$, followed by an empty line.

## Output

For each case, the program must write the total number of non-empty
square submatrices in one line.

## Observation

Evaluation out of 10 points:

- Slow solution: 5 points.

- Fast solution: 10 points.

A fast solution is one which is correct, of linear cost and passing the
test cases, both public and private. A slow solution is one which is not
fast, but it is correct and passes the public test cases.

## Author

PRO1

© Jutge.org, 2006--2025.

