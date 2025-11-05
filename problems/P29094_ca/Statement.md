# Posició del màxim

Feu una funció que retorni la posició de l'element màxim de
\@v\[0..m\]@. En cas d'empat, cal retornar la posició més petita.

## Precondició

$0 \le$ \@m@ $<$ mida de v.

## Interfície

+-------:+:---------------------------------------------------+
| C++    | ``` c++                                            |
|        | int posicio_maxim(const vector<double>& v, int m); |
|        | ```                                                |
+--------+----------------------------------------------------+
| C      | ``` c                                              |
|        | int posicio_maxim(double v[], int m);              |
|        | ```                                                |
+--------+----------------------------------------------------+
| Java   | ``` java                                           |
|        | public static int posicioMaxim(double[] v, int m); |
|        | ```                                                |
+--------+----------------------------------------------------+
| Python | ``` python                                         |
|        | posicio_maxim(v, m)  # returns int                 |
|        | ```                                                |
+--------+----------------------------------------------------+
| MyPy   | ``` python                                         |
|        | posicio_maxim(v: list[float], m: int) -> int       |
|        | ```                                                |
+--------+----------------------------------------------------+

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Autor

Salvador Roura

© Jutge.org, 2006--2025.

