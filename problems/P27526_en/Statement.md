# Control C401C

Your task is to write a program that starts reading and printing a
matrix of integers $n \times m$. Afterwards, for each pair of natural
numbers $j$ and $k$ given, print the previous matrix with the columns
$j$ and $k$ swapped. The columns are counted from 0 to $m - 1$.

Using the definition

        typedef vector<vector<int> > Matrix;

your program must implement and use the function

        void swap(Matrix& mat, int j, int k);

that, given a matrix \|mat\| and the natural numbers $j$ and $k$, swaps
the columns $j$ and $k$ of \|mat\|. The indices $j$ and $k$ will always
be between 0 and the number of columns of \|mat\| minus one.

## Input

The input starts with the size $n > 0$ and $m > 0$ of the matrix,
followed by $n$ lines with $m$ elements each one, followed by a sequence
of pairs $j$, $k$. Each $j$ and each $k$ is between 0 and $m - 1$.

## Output

Your program must print the sequence of matrices composed of the read
matrix, followed by the resulted matrix of each swap. Notice that print
lines with five dashes to separate the matrices, at the beginning and in
the end.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

