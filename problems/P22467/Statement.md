# Perfect primes

Given a natural number $n$, let $s(n)$ be the sum of the digits of $n$.
In this exercise, we say that $n$ is a perfect prime if the infinite
sequence $n$, $s(n)$, $s(s(n))$, ... only contains prime numbers. For
instance, 977 is a perfect prime, because 977, $9 + 7 + 7 = 23$,
$2 + 3 = 5$, 5, ..., are all prime numbers.

Write a recursive function that tells if a natural number \@n@ is a
perfect prime or not.

## Interface

+-------:+:---------------------------------------------+
| C++    | ``` c++                                      |
|        | bool is_perfect_prime(int n);                |
|        | ```                                          |
+--------+----------------------------------------------+
| C      | ``` c                                        |
|        | int is_perfect_prime(int n);                 |
|        | ```                                          |
+--------+----------------------------------------------+
| Java   | ``` java                                     |
|        | public static boolean isPerfectPrime(int n); |
|        | ```                                          |
+--------+----------------------------------------------+
| Python | ``` python                                   |
|        | is_perfect_prime(n)  # returns bool          |
|        | ```                                          |
+--------+----------------------------------------------+
|        | ``` python                                   |
|        | is_perfect_prime(n: int) -> bool             |
|        | ```                                          |
+--------+----------------------------------------------+

## Precondition

We have \@n@ $\ge 0$.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

