# Repeticiones, conflictos y coincidencias en una lista de personas

Dada una lista de personas descritas por un identificador i un nombre,
hay que calcular tres cosas:

- Repeticiones: número de parejas de personas con el mismo identificador
  y el mismo nombre.

- Conflictos: número de parejas de personas con el mismo identificador y
  diferente nombre.

- Coincidencias: número de parejas de personas con diferente
  identificador y el mismo nombre.

## Entrada

La entrada consiste en varios casos. Cada caso empieza con un natural
positivo $n$ en una línea, que es el número de personas. Después vienen
$n$ líneas, cada una con un natural y un string, que son el
identificador y el nombre de una persona. Después va una línea en
blanco.

## Salida

Para cada caso, la salida tiene tres naturales en una línea, el número
de repeticiones, conflictos y coincidencias de la lista de personas de
entrada.

## Observación

Evaluación sobre 10 puntos:

- Solución lenta: 5 puntos.

- Solución rápida: 10 puntos.

Entendemos por solución rápida una que es correcta, de coste $n\log(n)$
y que supera los juegos de prueba públicos y privados. Entendemos como
solución lenta una que no es rápida, pero es correcta y supera los
juegos de prueba públicos.

## Autor

PRO1

© Jutge.org, 2006--2025.

