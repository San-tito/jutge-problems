# Sum Frame of a Matrix

Let $M$ be a square matrix $N \times N$. This matrix has different
**frames**. Frame $0$ is formed by rows $0$ and $N-1$ and columns $0$
and $N-1$. Frame $1$ is formed by rows $1$ and $N-2$ and columns $1$ and
$N-2$, excluding the parts that are part of frame $0$, etc.

In the following example, you have that the frame $0$ is formed by all
the positions where there is a $0$, the frame $1$ the positions where
there is a $1$, and the frame $2$ the positions where there is a $2$:

                              0  0  0  0  0
                              0  1  1  1  0
                              0  1  2  1  0
                              0  1  1  1  0
                              0  0  0  0  0

You must implement the function `int sumaMarc(const Matriu& m, int x);`
with the following specification:

`PRE: ` $m$ a matrix $N \times N$ and $0 \leq x < N/2 + (N~mod~2)$.

`POST:` Returns the **sum** of the elements of the **frame** $x$ of $M$.

## Observation

You only need to send the function we ask for and the functions you
define. The rest will be ignored.

## Input

A matrix $N \times N$ and $0 \leq x < N/2 + (N~mod~2)$.

## Output

The **sum** of the elements of the **frame** $x$ of $M$.

## Author

PRO1

© Jutge.org, 2006--2025.

