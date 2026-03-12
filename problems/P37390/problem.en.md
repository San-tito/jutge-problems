# Product of square matrices

Write a function that, given two square matrices \@a@ and \@b@, computes
their product.

## Interface

+-----:+:------------------------------------------------------+
| C++  | ``` c++                                               |
|      | typedef vector< vector<int> > Matrix;                 |
|      |     Matrix product(const Matrix& a, const Matrix& b); |
|      | ```                                                   |
+------+-------------------------------------------------------+
| MyPy | ``` python                                            |
|      | Matrix: TypeAlias = list[list[int]]                   |
|      |     def product(a: Matrix, b: Matrix) -> Matrix       |
|      | ```                                                   |
+------+-------------------------------------------------------+

## Precondition

\@a@ and \@b@ are square matrices $n\times n$ with $n \ge 0$.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T10:33:35.189Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
