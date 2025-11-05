# Perfect numbers

Write a function that tells if a natural \@n@ is perfect.

A natural number is called *perfect* if it is equal to the sum of all
its divisors except itself. For instance, 28 is perfect, because
$28=1+2+4+7+14$.

## Interface

+-------:+:----------------------------------------+
| C++    | ``` c++                                 |
|        | bool is_perfect(int n);                 |
|        | ```                                     |
+--------+-----------------------------------------+
| C      | ``` c                                   |
|        | int is_perfect(int n);                  |
|        | ```                                     |
+--------+-----------------------------------------+
| Java   | ``` java                                |
|        | public static boolean isPerfect(int n); |
|        | ```                                     |
+--------+-----------------------------------------+
| Python | ``` python                              |
|        | is_perfect(n)  # returns bool           |
|        | ```                                     |
+--------+-----------------------------------------+
|        | ``` python                              |
|        | is_perfect(n: int) -> bool              |
|        | ```                                     |
+--------+-----------------------------------------+

## Precondition

\@n@ is a natural number.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

