# F009A. Traversing matrices

You have an integer matrix. Given a sequence of positions (row, column)
of the matrix, which form a trajectory where all the movements are
horizontal or vertical. Your task is to write a program that calculates
the sum of the values of the visited positions.

Using the definition

        typedef vector<vector<int> > Matrix;

your program must include and use the function

        int sum_line(const Matrix& mat, int of, int oc, int df, int dc);

that returns the sum of all the elements of the matrix line \|mat\| that
starts at the position (\|of\|, \|oc\|) and finishes at the position
(\|df\|, \|dc\|) (first position not included, last position included).
Assume that the given positions are inside the matrix, that (\|of\|,
\|oc\|) $\neq$ (\|df\|, \|dc\|), and either \|of\| $=$ \|df\| or \|oc\|
$=$ \|dc\|.

## Input

The input consists of the number of rows $n$ and the number of columns
$m$, followed by $n$ lines, each one with $m$ integers of one row. Then,
there is a non empty sequence of positions (row, column) which form a
trajectory. All the rows are between 0 and $n – 1$. All the columns are
between 0 and $m – 1$. Two consecutive positions never are equal.

## Output

Your program must print the total sum of the values of the path
positions, counting each number as many times as you pass over. Follow
the format of the instance.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

