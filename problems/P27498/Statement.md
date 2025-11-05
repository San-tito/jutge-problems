# Transposed matrix

Write a procedure that transposes a square matrix \@m@.

## Interface

+-------:+:-----------------------------------------+
| C++    | ``` c++                                  |
|        | typedef vector< vector<int> > Matrix;    |
|        | ```                                      |
+--------+------------------------------------------+
|        | ``` c++                                  |
|        | void transpose(Matrix& m);               |
|        | ```                                      |
+--------+------------------------------------------+
| Java   | ``` java                                 |
|        | public static void transpose(int[][] m); |
|        | ```                                      |
+--------+------------------------------------------+
| Python | ``` python                               |
|        | transpose(m)  # returns None             |
|        | ```                                      |
+--------+------------------------------------------+
| MyPy   | ``` python                               |
|        | transpose(m: list[list[int]]) -> None    |
|        | ```                                      |
+--------+------------------------------------------+

## Precondition

\@m@ is a square matrix $n\times n$ with $n\ge0$.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

