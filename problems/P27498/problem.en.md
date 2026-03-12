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

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T10:32:33.489Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
