# Matriu transposta

Feu un procediment que transposi una matriu quadrada \@m@.

## Interfície

+-------:+:-----------------------------------------+
| C++    | ``` c++                                  |
|        | typedef vector< vector<int> > Matriu;    |
|        | ```                                      |
+--------+------------------------------------------+
|        | ``` c++                                  |
|        | void transposa(Matriu& m);               |
|        | ```                                      |
+--------+------------------------------------------+
| Java   | ``` java                                 |
|        | public static void transposa(int[][] m); |
|        | ```                                      |
+--------+------------------------------------------+
| Python | ``` python                               |
|        | transposa(m)  # returns None             |
|        | ```                                      |
+--------+------------------------------------------+
| MyPy   | ``` python                               |
|        | transposa(m: list[list[int]]) -> None    |
|        | ```                                      |
+--------+------------------------------------------+

## Precondició

\@m@ és una matriu quadrada $n\times n$ amb $n\ge0$.

## Autor

Jordi Petit

© Jutge.org, 2006--2025.

