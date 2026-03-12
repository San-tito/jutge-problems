# Products of any matrices

Write a function that, given two matrices \@a@ and \@b@, computes their
product.

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

\@a@ is a matrix $p\times q$ and \@b@ is a matrix $q\times r$, with
$p,q,r\ge1$.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T12:17:20.988Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
