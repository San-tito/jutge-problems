# Reduction of digits

Write a function that, given a natural number \@x@, returns the
reduction of its digits.

## Interface

+-------:+:--------------------------------------------+
| C++    | ``` c++                                     |
|        | int reduction_of_digits(int x);             |
|        | ```                                         |
+--------+---------------------------------------------+
| C      | ``` c                                       |
|        | int reduction_of_digits(int x);             |
|        | ```                                         |
+--------+---------------------------------------------+
| Java   | ``` java                                    |
|        | public static int reductionOfDigits(int x); |
|        | ```                                         |
+--------+---------------------------------------------+
| Python | ``` python                                  |
|        | reduction_of_digits(x)  # returns int       |
|        | ```                                         |
+--------+---------------------------------------------+
|        | ``` python                                  |
|        | reduction_of_digits(x: int) -> int          |
|        | ```                                         |
+--------+---------------------------------------------+

In this exercise, we say that reducing the digits of a number means
computing the sum of its digits. If the sum has just one digit, this is
already the result. Otherwise, we apply the same process again to the
sum, until we get a single digit.

Solve this problem using a recursive function to return the sum of the
digits of a natural number \@x@.

## Interface

+-------:+:--------------------------------------+
| C++    | ``` c++                               |
|        | int sum_of_digits(int x);             |
|        | ```                                   |
+--------+---------------------------------------+
| C      | ``` c                                 |
|        | int sum_of_digits(int x);             |
|        | ```                                   |
+--------+---------------------------------------+
| Java   | ``` java                              |
|        | public static int sumOfDigits(int x); |
|        | ```                                   |
+--------+---------------------------------------+
| Python | ``` python                            |
|        | sum_of_digits(x)  # returns int       |
|        | ```                                   |
+--------+---------------------------------------+
|        | ``` python                            |
|        | sum_of_digits(x: int) -> int          |
|        | ```                                   |
+--------+---------------------------------------+

## Precondition

\@x@ is a natural number.

## Observation

Although there is a mathematic trick to solve this problem faster than
by adding up its digits, do not use it here.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

