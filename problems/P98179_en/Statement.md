# Insertion into a sorted table

Write a procedure that, supposing that all the positions of \@v@, except
maybe the last one, are in non-decreasing order, leaves \@v@ totally in
non-decreasing order.

For instance, if \@v@ is $\langle 2, 4, 7, 7, 8, 9, 5\rangle$, it must
become $\langle 2, 4, 5, 7, 7, 8, 9\rangle$.

## Interface

+-------:+:---------------------------------------+
| C++    | ``` c++                                |
|        | void insert(vector<double>& v);        |
|        | ```                                    |
+--------+----------------------------------------+
| C      | ``` c                                  |
|        | void insert(int n, double v[n]);       |
|        | ```                                    |
+--------+----------------------------------------+
| Java   | ``` java                               |
|        | public static void insert(double[] v); |
|        | ```                                    |
+--------+----------------------------------------+
| Python | ``` python                             |
|        | insert(v)  # returns None              |
|        | ```                                    |
+--------+----------------------------------------+
| MyPy   | ``` python                             |
|        | insert(v: list[float]) -> None         |
|        | ```                                    |
+--------+----------------------------------------+

## Precondition

We have $|v| \ge 1$. Moreover, the positions 0 to $|v| - 2$ of \@v@ are
in non-decreasing order.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

