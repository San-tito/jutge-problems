# Fold Matrix

Let $M$ be a square matrix $2N \times 2N$. The **folding** of a matrix
consists of folding the matrix of integers first along the horizontal
line that divides the matrix, and then along the vertical line.

For example, let the following matrix have four quadrants $A,B,C,D$, the
folding causes the top part ($A,B$) to overlap the bottom part ($C,D$),
and the second folding causes the right part ($B,D$) to overlap the left
part (A,C).

::: center
               =============        =============      ===========
               |     |     |        |     |     |      |         |                
               |  A  |  B  |   ==>  | A,C | B,D |  ==> | A,B,C,D |
               |     |     |        |     |     |      |         |        
    plego -->  -------------        -------------      -----------     
               |     |     |              ^
               |  C  |  D  |              |
               |     |     |              |
               =============            plego
:::

Notice that in this case, the matrix goes from being $2N \times 2N$ to a
matrix $N \times N$ in which each position has 4 numbers from the
original matrix **overlapped**.

The following example shows which positions overlap with others
according to the number. This means that all four positions that have
the number $1$ overlap, those that have the number $2$ also, etc.

                              <---- 2N ------>
                              ################  ^
                              # 1  2  | 2  1 #  |
                              # 3  4  | 4  3 #  |
                              #--------------#  2N
                              # 3  4  | 4  3 #  |
                              # 1  2  | 2  1 #  |
                              ################  v

You have to implement the action
`void plegaMatriu(const Matriu& m, Matriu& r)` with the following
specification:

`PRE: ` $m$ a matrix $2N \times 2N$ of integers.

`POST:` $r$ is a matrix $N \times N$ in which in each position it has
the **sum** of the elements of $m$ superimposed by the **fold** of $m$.

## Observation

**IMPORTANT:** You only need to submit the requested function, and
possibly other necessary actions and functions. However, you must keep
the type definitions and `#include`s.

## Input

A matrix $2N \times 2N$.

## Output

A $N \times N$ matrix where at each position it has the **sum** of the
elements of $m$ superimposed by the **fold** of $m$.

## Author

PRO1

© Jutge.org, 2006--2025.

