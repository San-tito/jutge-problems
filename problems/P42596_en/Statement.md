# Control C401B

Your task is to write a program that reads a sequence of matrices of
integers, and prints which of them has the maximum difference between
its greatest element and the smallest element. In case of a tie, you
must choose the matrix that appeared before in the sequence.

Using the definition

        typedef vector<vector<int> > Matrix;

your program must implement and use the procedure

        void min_max(const Matrix& mat, int& minimum, int& maximum);

that, given the non empty matrix \@mat@, leaves at \@minimum@ and at
\@maximum@ the elements minimum and maximum of \@mat@, respectively.

## Input

The input is a non empty sequence of non empty matrices of integers.
Each matrix is described with its size $n > 0$ and $m > 0$, followed by
its $n \times m$ elements.

## Output

The output is two lines indicating which is the maximum difference
between the maximum element and minimum element of each matrix, and
which is the first matrix with this difference.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

