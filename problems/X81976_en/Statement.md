# Count occurrences of each digit in its row and column

Given a matrix $u$ of digits, we have to produce a new matrix $v$ of
digits with the same dimensions, where the digit in each position is
calculated in the following way.

Let $i,j$ be a position in $u$, and let $d$ be the digit in $u[i][j]$.
Then, $v[i][j]$ is the number of occurrences of $d$ in $u$ within row
$i$, plus the number of occurrences of $d$ in $u$ within column $j$, and
all of it modulus $10$ so that the result is again a digit.

Note that the occurrence of $d$ at position $i,j$ will be counted twice,
one for row $i$ and another for column $j$.

For instance, consider this matrix $u$:

    0044
    5233
    2221
    1150

Then, the resulting matrix $v$ is:

    3333
    2333
    4542
    3322

For instance, $u[1][1] = 2$. At row $1$ we have only one $2$. And at
column $1$ we have two $2$. Therefore $v[1][1] = (1+2)\%10 = 3$.

## Input

The input has several cases. Each case starts with two positive natural
numbers, $n, m$, in one line. After that comes a matrix of $n\times{}m$
digits ($n$ lines with $m$ digits each), followed by an empty line.

## Output

For each case, the program has to write $n$ lines with $m$ digits each,
which is the resulting matrix, followed by an empty line.

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

