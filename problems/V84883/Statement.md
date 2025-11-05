# Vector R

A **vector R** is a vector that is composed of two parts:

$$v = x_1 ~ x_2 ~ x_3 ~ x_4 \dots x_n ~ y_1 ~ y_2~ y_3 \dots y_m$$

such that the part $x_1 \dots x_n$ and the part $y_1 \dots y_m$ are
ordered strictly in increasing order but $y_m < x_1$. We also have that
$n,m > 0$. That is, neither part is empty.

We need to implement the **function**
`int vectorR(const vector<int>& v)` with the following specification:

`PRE:` $v$ is a vector R and $\mid \! v \! \mid \geq 3$.

`POST:` The position of $y_1$ in $v$.

## Observation

You only need to send the function we ask for and the actions and
functions that you define yourself. The rest will be ignored.

## Input

An undetermined number of vectors R with the following format: an
integer indicating their size, and then the vector R. Every vector R has
a size greater than or equal to 3.

## Output

The position within the vector where $y_1$ is.

## Author

PRO1

© Jutge.org, 2006--2025.

