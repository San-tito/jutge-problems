# És un palíndrom?

Feu una funció que indiqui si \@s@ és un palíndrom o no. Recordeu que
una paraula és un palíndrom si es llegeix igual d'esquerra a dreta que
de dreta a esquerra. En aquest exercici, \@s@ pot ser bastant llarg; per
aquest motiu es passa per refèrencia.

Per poder comprovar l'eficiència de la vostra solució comparant-la amb
de la del Jutge, comenceu a comprovar \@s@ pels extrems.

## Interfície

+-------:+:---------------------------------------------+
| C++    | ``` c++                                      |
|        | bool es_palindrom(const string& s);          |
|        | ```                                          |
+--------+----------------------------------------------+
| C      | ``` c                                        |
|        | int es_palindrom(const char s[], int ssize); |
|        | ```                                          |
+--------+----------------------------------------------+
| Java   | ``` java                                     |
|        | public static boolean esPalindrom(String s); |
|        | ```                                          |
+--------+----------------------------------------------+
| Python | ``` python                                   |
|        | es_palindrom(s)  # returns bool              |
|        | ```                                          |
+--------+----------------------------------------------+
|        | ``` python                                   |
|        | es_palindrom(s: str) -> bool                 |
|        | ```                                          |
+--------+----------------------------------------------+

## Observació

Només cal enviar el procediment demanat; el programa principal serà
ignorat.

## Autor

Salvador Roura

© Jutge.org, 2006--2025.

