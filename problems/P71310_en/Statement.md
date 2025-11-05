# Scalar product

The scalar product of two vectors $u=(u_0,\dots,u_{n-1})$ and
$v=(v_0,\dots,v_{n-1})$ is $\sum_{i=0}^{n-1} u_i v_i$.

Write a function that returns the scalar product of \@u@ and \@v@.

## Interface

+-------:+:-------------------------------------------------------------------------+
| C++    | ``` c++                                                                  |
|        | double scalar_product(const vector<double>& u, const vector<double>& v); |
|        | ```                                                                      |
+--------+--------------------------------------------------------------------------+
| C      | ``` c                                                                    |
|        | double scalar_product(int n, double u[n], double v[n]);                  |
|        | ```                                                                      |
+--------+--------------------------------------------------------------------------+
| Java   | ``` java                                                                 |
|        | public static double scalarProduct(double[] u, double[] v);              |
|        | ```                                                                      |
+--------+--------------------------------------------------------------------------+
| Python | ``` python                                                               |
|        | scalar_product(u, v)  # returns float                                    |
|        | ```                                                                      |
+--------+--------------------------------------------------------------------------+
| MyPy   | ``` python                                                               |
|        | scalar_product(u: list[float], v: list[float]) -> float                  |
|        | ```                                                                      |
+--------+--------------------------------------------------------------------------+

## Precondition

The vectors \@u@ and \@v@ have the same size.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

