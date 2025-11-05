# Vector V

A **vector V** is a vector that is composed of two parts:

$$v = x_1 ~ x_2 ~ x_3 ~ x_4 \dots x_n ~ y_1 ~ y_2~ y_3 \dots y_m$$

such that $x_1 \dots x_n$ is ordered in a strictly **decreasing** manner
and $y_1 \dots y_m$ is ordered in a strictly **increasing** manner.
Furthermore, $x_n > y_1$. Finally, we have that $n,m > 0$. That is,
neither part is empty.

We need to implement the **function** `int picV(const vector<int>& v)`
with the following specification:

`PRE:` $v$ is a vector V and $\mid \! v \! \mid \geq 3$.

`POST:` The position of $y_1$ in $v$.

## Observation

**IMPORTANT:** You only need to submit the requested function, and
possibly other necessary actions and functions. However, you must keep
the type definitions and `#include`s.

## Input

An undetermined number of vectors V with the following format: an
integer indicating their size, and then the vector V. Every vector V has
a size greater than or equal to 3.

## Output

The position within the vector where $y_1$ is.

## Author

PRO1

© Jutge.org, 2006--2025.

