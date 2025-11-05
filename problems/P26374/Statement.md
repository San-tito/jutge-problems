# Sum of square matrices

Write a function that, given two square matrices \@a@ and \@b@, computes
their sum.

## Interface

+-------:+:---------------------------------------------------------------+
| C++    | ``` c++                                                        |
|        | typedef vector< vector<int> > Matrix;                          |
|        | ```                                                            |
+--------+----------------------------------------------------------------+
|        | ``` c++                                                        |
|        | Matrix sum(const Matrix& a, const Matrix& b);                  |
|        | ```                                                            |
+--------+----------------------------------------------------------------+
| Java   | ``` java                                                       |
|        | public static int[][] sum(int[][] a, int[][] b);               |
|        | ```                                                            |
+--------+----------------------------------------------------------------+
| Python | ``` python                                                     |
|        | sum(a, b)  # returns list                                      |
|        | ```                                                            |
+--------+----------------------------------------------------------------+
|        | ``` python                                                     |
|        | sum(a: list[list[int]], b: list[list[int]]) -> list[list[int]] |
|        | ```                                                            |
+--------+----------------------------------------------------------------+

## Precondition

\@a@ and \@b@ are square matrices $n\times n$ with $n \ge 0$.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

