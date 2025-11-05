# Recursive greatest common divisor

Write a recursive function that computes the greatest common divisor of
two natural numbers \@a@ and \@b@ using the *fast* version of the
Euclidean algorithm.

## Interface

+-------:+:-------------------------------------+
| C++    | ``` c++                              |
|        | int gcd(int a, int b);               |
|        | ```                                  |
+--------+--------------------------------------+
| C      | ``` c                                |
|        | int gcd(int a, int b);               |
|        | ```                                  |
+--------+--------------------------------------+
| Java   | ``` java                             |
|        | public static int gcd(int a, int b); |
|        | ```                                  |
+--------+--------------------------------------+
| Python | ``` python                           |
|        | gcd(a, b)  # returns int             |
|        | ```                                  |
+--------+--------------------------------------+
|        | ``` python                           |
|        | gcd(a: int, b: int) -> int           |
|        | ```                                  |
+--------+--------------------------------------+

## Precondition

Neither \@a@ nor \@b@ are negative, and at least one of them is strictly
greater than zero.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

