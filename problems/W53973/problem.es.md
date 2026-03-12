# Codificar en Base64 (2)

*(Este problema utiliza la función `base64\_to\_char` del problema
\"Codificar en Base64 (1)\".)*

Se trata de hacer un programa que, dada una secuencia de bytes en la
entrada (naturales entre 0 y 255), la **codifique en base 64**. La
codificación funciona de la siguiente manera, y trabaja con tripletas de
3 bytes:

1.  Primero, cada 3 bytes de entrada $B_1$, $B_2$ y $B_3$, construimos
    un entero $x$ en base 256 de la siguiente manera:

    $$x = (B_1 \cdot 256 + B_2) \cdot 256  + B_3$$

2.  Después, reinterpretamos $x$ en base 64 y extraemos las cifras, que
    ahora son 4: $d_1$, $d_2$, $d_3$, y $d_4$. El proceso es totalmente
    análogo a extraer las cifras de un número en base 10, pero en
    base 64. Lo que estamos haciendo es calcular los dígitos $d_i$ de la
    fórmula siguiente:

    $$x = ((d_1 \cdot 64 + d_2) \cdot 64 + d_3) \cdot 64 + d_4$$

    *(Cabe recordar que el proceso de extracción de cifras trabajado en
    PRO1 produce las cifras al **revés**, es decir, comenzando por
    $d_4$.)*

3.  Por último, usando la función `base64_to_char` convertimos $d_1$,
    $d_2$, $d_3$ y $d_4$ en caracteres y los mostramos en la salida en
    este orden.

Si la secuencia de entrada no tiene una longitud múltiple de 3, justo al
final, tendremos un grupo de solo 1 o 2 bytes:

- Si tenemos un grupo de 2 bytes: asignamos $B_3 = 0$, y seguimos
  igualmente los pasos de la codificación. Una vez con las cifras $d_i$,
  cambiamos $d_4$ por el carácter '`=`'.

- Si tenemos un grupo de 1 byte: asignamos $B_2 = 0$ y $B_3 = 0$, y
  seguimos igualmente los pasos de la codificación. Una vez con las
  cifras $d_i$, cambiamos tanto $d_3$ como $d_4$ por el carácter '`=`'.

## Entrada

La entrada consiste en varias secuencias de bytes. Cada una comienza con
un entero $n$ que indica el número de bytes que siguen y después hay $n$
bytes, donde cada uno es solo un número natural entre 0 y 255 (ambos
incluidos).

## Salida

La salida debe ser una línea para cada caso con la codificación en base
64 de la secuencia de bytes de la entrada, sin espacios entre los
caracteres.

## Observaciones

- Este problema tiene como centro de interés la **corrección** y la
  **legibilidad**. Sobre la legibilidad, se valorará que el programa
  utilice funciones para evitar repetición y separar las diversas
  tareas.

- Si tenéis la función `base64_to_char` y el Juez os la ha aceptado,
  usadla directamente. Si no, copiad la siguiente definición:

      char base64_to_char(int d) {
          static char _syms[65] =
              "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
              "abcdefghijklmnopqrstuvwxyz"
              "0123456789+/";
          return _syms[d];
      }

## Información del problema

Autoría: Pau Fernández

Generación: 2026-01-25T13:18:57.597Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
