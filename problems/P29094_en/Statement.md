# Position of the maximum

Write a function that returns the position of the maximum element of
\@v\[0..m\]@. If there is a tie, the smaller position must be returned.

## Precondition

$0 \le$ \@m@ $<$ size of v.

## Interface

+-------:+:------------------------------------------------------+
| C++    | ``` c++                                               |
|        | int position_maximum(const vector<double>& v, int m); |
|        | ```                                                   |
+--------+-------------------------------------------------------+
| C      | ``` c                                                 |
|        | int position_maximum(double* v, int m);               |
|        | ```                                                   |
+--------+-------------------------------------------------------+
| Java   | ``` java                                              |
|        | public static int positionMaximum(double[] v, int m); |
|        | ```                                                   |
+--------+-------------------------------------------------------+
| Python | ``` python                                            |
|        | position_maximum(v, m)  # returns int                 |
|        | ```                                                   |
+--------+-------------------------------------------------------+
| MyPy   | ``` python                                            |
|        | position_maximum(v: list[float], m: int) -> int       |
|        | ```                                                   |
+--------+-------------------------------------------------------+

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

