# Posiciones de un máximo en dos secuencias

Dadas dos secuencias $s_1$ y $s_2$ de naturales acabadas las dos en $0$,
se pide un programa que calcule el máximo $m$ de los elementos de $s_1$
y que indique la posición de su última aparición dentro de $s_1$ y la de
su primera aparición dentro de $s_2$.

En vuestro programa tenéis que implementar y utilizar el procedimento
siguiente:

> **void** infoSecuencia(**int**& *max*, **int**& *lpos*);

que lee una secuencia acabada en 0 y calcula los parámetros *max* y
*lpos*. Al finalizar la ejecución del procedimento, el parámetro *max*
tendrá el valor más grande que aparece en la secuencia y el parámetro
*lpos* tiene que indicar la última posición donde aparece el valor
máximo.

## Entrada

La entrada consiste en dos secuencias $s_1$ y $s_2$ de naturales
estrictament positivos, ambas acabadas en $0$. La secuencia $s_1$ no es
vacı́a (es decir, tiene como mínimo un elemento diferente de la marca de
final), pero la secuencia $s_2$ puede serlo.

## Salida

La salida está formada per tres informaciones: El elemento máximo de
$s_1$, $m$, la posición de la última aparición de $m$ dentro de $s_1$, y
la posición de la primera aparición de $m$ dentro de $s_2$. Si $m$ no
aparece en $s_2$, o bien $s_2$ es vacı́a (y, por tanto, $m$ tampoco
aparece), se ha de indicar convenientemente.

 \
Seguid el formato especificado en los ejemplos.

 \

## Autor

Maria J. Serna i Maria J. Blesa (es: Maria J. Blesa)

© Jutge.org, 2006--2025.

