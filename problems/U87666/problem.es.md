# Secuencia escalera

Un \"escalón\" es una subsecuencia de $w$ enteros del mismo valor $h$.
El valor repetido $h$ de un escalón se llama la \"altura\", y el número
de elementos $w$ es la \"anchura\". Por ejemplo, las subsecuencias
siguientes son \"escalones\": \"`1`\" ($h = 1$, $w = 1$), \"`5 5 5`\"
($h = 5$, $w = 3$), y \"`-1 -1 -1 -1`\" ($h = -1$, $w = 4$).

Una \"secuencia escalera\" es una secuencia no vacía de enteros sin
centinela, con las siguientes propiedades:

- Está formada por un mínimo de 2 \"escalones\", según la definición
  anterior.

- Todos los \"escalones\" de la escalera tienen la misma anchura $w$.

- En toda la escalera, la diferencia $D = h - h_{prev}$ entre la altura
  de un escalón y la altura del anterior es *constante* (es decir, los
  escalones están distribuidos uniformemente en altura).

![image](escala.png){width="15cm"}

**NOTA: Abrid el PDF para ver la imagen, en la web no aparece.**

Ejemplos de secuencias escalera:

  ------------------- -----------------------------------
  `1 1 2 2 3 3`       3 escalones, $w = 2$, y $D = 1$.
  `10 6 2 -2`         4 escalones, $w = 1$, y $D = -4$.
  `0 0 0 0 3 3 3 3`   2 escalones, $w = 4$, y $D = 3$.
  ------------------- -----------------------------------

Haz un **programa** que determina si la secuencia de entrada es una
\"secuencia escalera\".

## Observación

Este problema tiene como centros de interés la **corrección**, la
**eficiencia** y la **legibilidad**.

Los diferentes juegos de prueba de este problema otorgan una
**puntuación parcial**, y la nota del problema es la suma de todas. Los
juegos de prueba están separados en corrección y eficiencia, y los de
eficiencia usan entradas de longitudes muy grandes y es necesario que el
programa haga el mínimo número de operaciones posible para llegar al
resultado.

## Entrada

Una secuencia no vacía de enteros sin centinela.

## Salida

La palabra \"`si`\" si la secuencia de entrada es una \"secuencia
escalera\" y \"`no`\" en caso contrario.

## Información del problema

Autoría: Pau Fernández

Generación: 2026-01-25T13:03:58.669Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
