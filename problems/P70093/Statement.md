# Array merge

Write a function that merges the sorted vectors \@v1@ and \@v2@ and
returns the result, repeated elements included. For instance, the result
of merging a vector with 2, 3 and 5 with a vector with 3, 5, 5 and 7 is
a vector with 2, 3, 3, 5, 5, 5 and 7.

## Interface

+-------:+:--------------------------------------------------------------------------+
| C++    | ``` c++                                                                   |
|        | vector<double> merge(const vector<double>& v1, const vector<double>& v2); |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+
| Java   | ``` java                                                                  |
|        | public static double[] merge(double[] v1, double[] v2);                   |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+
| Python | ``` python                                                                |
|        | merge(v1, v2)  # returns list                                             |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+
| MyPy   | ``` python                                                                |
|        | merge(v1: list[float], v2: list[float]) -> list[float]:                   |
|        | ```                                                                       |
+--------+---------------------------------------------------------------------------+

## Precondition

\@v1@ and \@v2@ are sorted in nondecreasig order.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

