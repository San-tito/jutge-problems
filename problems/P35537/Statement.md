# Increasing numbers

In this exercise, we say that a natural number is increasing if every
digit is less than or equal to the digit which is on its right (if any).

Write a recursive function that tells if a natural number \@n@ is
increasing or not.

## Interface

+-------:+:-------------------------------------------+
| C++    | ``` c++                                    |
|        | bool is_increasing(int n);                 |
|        | ```                                        |
+--------+--------------------------------------------+
| C      | ``` c                                      |
|        | int is_increasing(int n);                  |
|        | ```                                        |
+--------+--------------------------------------------+
| Java   | ``` java                                   |
|        | public static boolean isIncreasing(int n); |
|        | ```                                        |
+--------+--------------------------------------------+
| Python | ``` python                                 |
|        | is_increasing(n)  # returns bool           |
|        | ```                                        |
+--------+--------------------------------------------+
|        | ``` python                                 |
|        | is_increasing(n: int) -> bool              |
|        | ```                                        |
+--------+--------------------------------------------+

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

