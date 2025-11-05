# Buscar distancia d en un vector con distancias consecutivas estrictamente crecientes

Implementad una función que recibe un natural $d$ y un vector $v$ con
dos o más elementos y que cumple la siguiente condición: la sucesión de
distancias entre cada dos elementos consecutivos de $v$ es estrictamente
creciente, es decir $|v[0]-v[1]| < |v[1]-v[2]| < |v[2]-v[3]| < \cdots$.
Por ejemplo, la siguiente secuencia cumple esta condición:

    3 2 4 8 0 -10 -22 -8 7

Fijaos en que la distancia entre el primer y segundo elemento es 1, la
distancia entre el segundo y tercero es 2, enter el tercero y cuarto es
4, entre el cuarto y quinto es 8, entre el quinto y sexto es 10, entre
el sexto y el séptimo es 12, entre el séptimo y el octavo es 14, y entre
el octavo y el noveno es 15. Queda claro, entonces, que la secuencia de
distancias consecutivas es creciente.

En caso de que haya una pareja de elementos consecutivos a distancia
$d$, la función tiene que devolver la posición (indexando desde 0) del
primer elemento de esta pareja. En caso contrario, la función debe
devolver -1. En el ejemplo anterior, con $d=12$ la función tiene que
devolver $5$, y con $d=6$ la función tiene que devolver $-1$. Esta es la
cabecera:

    // Pre: Let n be v.size(). n>=2 and d>=0 and |v[0]-v[1]| < |v[1]-v[2]| < ... < |v[n-2]-v[n-1]|
    // Post: If there exists i in {0..n-2} holding |v[i]-v[i+1]| = d, then the function returns this i.
    //       Otherwise, it returns -1.
    int findDistance(int d, const vector<int> &v);

Los juegos de prueba privados tratan de compruebar que vuestra solución
es de coste logarítmico.

## Observación

Sólo tenéis que enviar el procedimiento requerido; el programa principal
será ignorado.

## Observación

Se puede utilizar la función `abs` de `cmath`. Evaluación sobre 10
puntos:

- Solución lenta: 5 puntos.

- Solución rápida: 10 puntos.

Entendemos como solución rápida una que es correcta, de coste
logarítmico y capaz de superar los juegos de prueba públicos y privados.
Entendemos como solución lenta una que no es rápida, pero es correcta y
capaz de superar los juegos de pruebas públicos.

## Autor

PRO1

© Jutge.org, 2006--2025.

