# Números Doblados

Se trata de calcular el valor de "`doblar`" un número. Doblar un número
es la operación que se muestra en la figura siguiente (abrid el PDF si
no podéis ver la figura en la página web del Jutge).

::: center
![image](folded_number.png){width="15cm"}
:::

En particular, cualquier número $n$ se puede considerar una secuencia de
dígitos i dividirlo en dos subsecuencias consecutivas de dígitos $a$ i
$b$, ya sean de la misma longitud, o bien con longitudes de difieren
solamente en una unidad (incluyendo el caso de que $a$ o $b$ estén
vacías). Concatenando estas dos mitades $a$ y $b$ de nuevo se obtendría
el número $n$ original.

Entonces, para realizar la operación de \"doblado\", se trata de
invertir el orden de la subsecuencia $a$, que daría lugar a $a_{inv}$,
y, interpretando $a_{inv}$ y $b$ nuevamente como enteros, sumarlos para
obtener un resultado entero.

Por ejemplo, si tenemos que $n$ es 1234, la subsecuencia $a$ seria 12 y
la subsecuencia $b$ seria 34. Al invertir $a$ obtendríamos 21 y el
resultado sería $21 + 34 = 55$.

En el caso de un número de longitud impar, la partición en dos
secuencias tiene dos posibilidades. Por ejemplo, si tenemos que $n$ es
12345, podemos operar de las dos maneras siguientes:

- Dividir $n$ en $a = 123$ y $b = 45$ e invertir $a$, obteniendo
  $321 + 45 = 366$.

- Dividr $n$ en $a = 12$ y $b = 345$ e intertiv $a$, obteniendo
  $21 + 345 = 366$.

La cifra de enmedio, entonces, acaba contribuyendo a la suma final de la
misma manera en ambos casos.

## Entrada

La entrada consiste en una secuencia de números enteros estrictamente
positivos.

## Salida

La salida consiste en el resultado de \"doblar\" cada número de la
entrada, tal como se ha explicado, y en líneas separadas.

## Autor

PRO1

© Jutge.org, 2006--2025.

