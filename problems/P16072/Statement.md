# Array intersection

Write a function that returns a sorted vector with the intersection of
the sorted vectors \@v1@ and \@v2@. The result must have the common
elements in \@v1@ and \@v2@, without repetitions. For instance, the
result of the intersection of a vector with 1, 2, 2, 5, 5 and 7 and a
vector with 2, 3, 3 and 7 is a vector with 2 and 7.

## Interface

+-------:+:---------------------------------------------------------------------------------+
| C++    | ``` c++                                                                          |
|        | vector<double> intersection(const vector<double>& v1, const vector<double>& v2); |
|        | ```                                                                              |
+--------+----------------------------------------------------------------------------------+
| Java   | ``` java                                                                         |
|        | public static double[] intersection(double[] v1, double[] v2);                   |
|        | ```                                                                              |
+--------+----------------------------------------------------------------------------------+
| Python | ``` python                                                                       |
|        | intersection(v1, v2)  # returns list                                             |
|        | ```                                                                              |
+--------+----------------------------------------------------------------------------------+
| MyPy   | ``` python                                                                       |
|        | intersection(v1: list[float], v2: list[float]) -> list[float]                    |
|        | ```                                                                              |
+--------+----------------------------------------------------------------------------------+

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

