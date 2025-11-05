# Dichotomic search

Write an efficient recursive function that returns the position of \@x@
in the subvector \@v@\[@left@..@right@\]. The function must return $-1$
if \@x@ does not belong to \@v@\[@left@..@right@\] or if \@left@ $>$
\@right@.

## Precondition

The vector \@v@ is sorted in strictly increasing order. Moreover, we
have $0 \le$ \@left@ $\le$ size of v and $-1 \le$ \@right@ $<$ size of
v.

## Interface

+-------:+:-----------------------------------------------------------------------+
| C++    | ``` c++                                                                |
|        | int position(double x, const vector<double>& v, int left, int right);  |
|        | ```                                                                    |
+--------+------------------------------------------------------------------------+
| C      | ``` c                                                                  |
|        | int position(double x, double v[], int left, int right);               |
|        | ```                                                                    |
+--------+------------------------------------------------------------------------+
| Java   | ``` java                                                               |
|        | public static int position(double x, double[] v, int left, int right); |
|        | ```                                                                    |
+--------+------------------------------------------------------------------------+
| Python | ``` python                                                             |
|        | position(x, v, left, right)  # returns int                             |
|        | ```                                                                    |
+--------+------------------------------------------------------------------------+
| MyPy   | ``` python                                                             |
|        | position(x: float, v: list[float], left: int, right: int) -> int       |
|        | ```                                                                    |
+--------+------------------------------------------------------------------------+

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

