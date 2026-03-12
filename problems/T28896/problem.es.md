# Secuencia tejado

Una \"secuencia tejado\" es una secuencia de enteros sin centinela que
tiene las siguientes propiedades:

- El primer y último elemento son iguales.

- Tiene dos partes de la misma longitud: una subsecuencia creciente
  hasta el punto medio que da lugar a una subsecuencia decreciente hasta
  el final (las dos partes del tejado).

![image](teulada.png){width="15cm"}

**NOTA: Abrid el PDF para ver la imagen, en la web no aparece.**

Para ser totalmente precisos, consideramos que los elementos de la
secuencia tejado son $x_i$, con $1 \leq i \leq N$ y $N$ impar. Sea $k$
la posición central de la secuencia (es decir, $N = 2k - 1$). La subida
inicial incluye los elementos $x_1, x_2, \ldots, x_{k-1}, x_k$ y se
cumple que $x_{i-1} \leq x_{i}$ para $2 \leq i \leq k$. La bajada
incluye $x_k$ y tiene los elementos
$x_k, x_{k+1}, \ldots, x_{N-1}, x_N$, y se cumplen dos condiciones: por
una parte, $x_k > x_{k+1}$ *estrictamente* (el principio de la bajada);
por otra, que $x_{i-1} \geq x_i$, para el resto de elementos,
$k+2 \leq i \leq N$. Además se cumple que $x_1 = x_N$.

Haz un **programa** que determina si la secuencia de entrada es una
\"secuencia tejado\".

## Observación

Este problema tiene como centros de interés la **corrección**, la
**eficiencia** y la **legibilidad**.

Los diferentes juegos de prueba de este problema otorgan una puntuación
parcial, y la nota del problema es la suma de todos. Los juegos de
prueba están separados en corrección y eficiencia, y los de eficiencia
usan entradas de longitudes muy grandes y es necesario que el programa
haga el mínimo número de operaciones posible para llegar al resultado.

## Entrada

Una secuencia de enteros sin centinela.

## Salida

La palabra \"`si`\" si la secuencia de entrada es una \"secuencia
tejado\" y \"`no`\" en caso contrario.

## Información del problema

Autoría: Pau Fernández

Generación: 2026-01-25T12:51:30.245Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
