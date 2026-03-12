# Decodificar Base64 (2)

*(Este problema utiliza la función `char\_to\_base64` del problema
\"Decodificar Base64 (1)\".)*

Se trata de hacer un programa que, dada una secuencia de caracteres en
la entrada (uno de los 64 que representan los dígitos de base 64), la
**decodifique en sus bytes**. La decodificación funciona de la siguiente
manera:

1.  Primero, para cada grupo de 4 caracteres (o cuarteto) de la entrada
    $c_1$, $c_2$, $c_3$ y $c_4$, los transformamos en sus dígitos
    correspondientes $d_1$, $d_2$, $d_3$, $d_4$, usando la función
    `char_to_base64`.

2.  Después, con los 4 dígitos $d_i$ reconstruimos el natural $x$
    aplicando la fórmula:

    $$x = ((d_1 \cdot 64 + d_2) \cdot 64 + d_3) \cdot 64 + d_4$$

3.  A continuación, reinterpretamos $x$ en base 256, y extraemos las
    cifras, que ahora son 3: $B_1$, $B_2$, y $B_3$. El proceso es
    totalmente análogo a extraer las cifras de un número en base 10,
    pero en base 256. Lo que habremos hecho es calcular los dígitos
    $B_i$ de la fórmula siguiente:

    $$x = (B_1 \cdot 256 + B_2) \cdot 256  + B_3$$

    *(Hay que recordar que el proceso de extracción de las cifras
    trabajado en PRO1 produce las cifras al **revés**, comenzando por
    $B_3$)*

4.  Finalmente, mostramos $B_1$, $B_2$ y $B_3$ como números naturales
    por pantalla, en este orden.

La codificación en base 64 siempre tiene un número de caracteres
múltiplo de 4, pero justo al final de la secuencia puede haber '`=`' o
'`==`', que nos dice que el número de bytes del último cuarteto son 2 o
1, y no 3:

Si el último cuarteto tiene algún '`=`' al final:

- Si tiene '`==`': el número de bytes será 1; asignamos $d_3 = 0$ y
  $d_4 = 0$, decodificamos según los pasos anteriores, pero solo
  mostramos $B_1$ por pantalla.

- Si tiene '`=`': el número de bytes es 2; asignamos $d_4 = 0$,
  decodificamos según los pasos anteriores, pero solo mostramos $B_1$ y
  $B_2$ por pantalla.

## Entrada

La entrada consiste en varios casos, donde cada caso es una secuencia de
caracteres base 64 en la misma línea y con un punto al final.

## Salida

La salida debe ser una línea para cada caso con los bytes como números
naturales. Antes de cada byte, incluido el primero, debe haber un
espacio.

## Observación

- Este problema tiene como centros de interés la **corrección** y la
  **legibilidad**. En particular, se valorará que el programa utilice
  funciones para evitar repetición y separar las diversas tareas.

- Si tenéis la función `char_to_base64` y el Juez os la ha aceptado,
  usadla directamente. Si no, copiad la siguiente definición, (y añadid
  `#include <algorithm>`):

      int char_to_base64(char c) {
          static char _syms[65] =
              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
              "abcdefghijklmnopqrstuvwxyz"
              "0123456789+/";
          return std::find(_syms, _syms + 64, c) - _syms;
      }

## Información del problema

Autoría: Pau Fernández

Generación: 2026-01-25T12:55:38.631Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
