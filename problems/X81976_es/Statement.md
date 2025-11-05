# Contar ocurrencias de cada dígito en su fila y columna

Dada una matriz de dígitos $u$, debemos crear una nueva matriz de
dígitos $v$ con las mismas dimensiones, y donde el dígito de cada
posición se calcula de la siguiente manera.

Sea $i, j$ una posición de $u$, y sea $d$ el dígito $u[i][j]$. Entonces
$v[i][j]$ es el número de ocurrencias de $d$ en $u$ en la fila $i$, más
el número de ocurrencias de $d$ en $u$ en la columna $j$, todo sumado
módulo $10$ para que nos vuelva a quedar un dígito.

Es importante tener en cuenta que la ocurrencia de $d$ en la posición
$i,j$ se contará dos veces, una para la fila $i$ y otra para la columna
$j$.

Por ejemplo, considerad esta matriz $u$:

    0044
    5233
    2221
    1150

Entonces, la matriz $v$ resultante será:

    3333
    2333
    4542
    3322

Por ejemplo, $u[1][1] = 2$. En la fila $1$ hay un solo $2$. Y en la
columna $1$ tenemos dos $2$. Por este motivo $v[1][1] = (1+2)\%10 = 3$.

## Entrada

La entrada tiene varios casos. Cada caso empieza con dos naturales
positivos $n,m$ en una primera línea. Después viene una matriz de
$n\times{}m$ dígitos ($n$ líneas com $m$ dígitos cada una). Finalmente
viene una línea en blanco.

## Salida

Para cada caso, el programa debe escribir $n$ líneas con $m$ dígitos
cada una, que es la matriz resultante, seguida por una línea en blanco.

## Observación

Evaluación sobre 10 puntos:

- Solución lenta: 5 puntos.

- Solución rápida: 10 puntos.

Entendemos por solución rápida una que es correcta, de coste lineal y
capaz de superar los juegos de pruebas públicos y privados. Entendemos
una solución lenta una que no es rápida, pero es correcta y capaz de
superar los juegos de pruebas públicos.

## Autor

PRO1

© Jutge.org, 2006--2025.

