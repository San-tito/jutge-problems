# Repeticiones de Cartas

Escribe un **programa** que reporte las *repeticiones consecutivas* en
una secuencia de cartas de Póker. Se trata de detectar subsecuencias
consecutivas de cartas iguales, de una longitud $k \geq 2$, y escribir a
la salida una frase describiendo cada subsecuencia usando los nombres
típicos del Póker. Consideraremos 4 casos: \"Pareja\" ($k = 2$),
\"Trío\" ($k = 3$), \"Póker\" ($k = 4$) y repeticiones más largas
($k > 4$). Si una carta no se repite en la secuencia no es necesario
escribir nada. Tampoco hay que considerar solapamientos, solo hay que
informar de las subsecuencias con repeticiones más largas.

## Entrada

La entrada consiste en una secuencia de caracteres que representan las
cartas. Tal como en el problema \"Mejor Carta\", los caracteres para las
cartas son `A`, `2`, `3`, \..., `9`, `0`, `J`, `Q` y `K`. La secuencia
de cartas termina con un punto, es decir, el carácter `'.'`, y puede
estar vacía.

## Salida

Hay que detectar las repeticiones consecutivas de cartas y escribir en
la salida la descripción que corresponda al número de veces $k$ que la
carta $C$ se haya repetido: \"Pareja de $C$s\", \"Trío de $C$s\",
\"Poker de $C$s\" o \"$k$ $C$s!\". Cada descripción debe ir en una línea
diferente y en el orden en que aparecen en la secuencia de entrada.
Consulta las salidas de los juegos de prueba públicos para ver ejemplos
concretos.

## Observación

En este problema es necesario tratar la entrada carácter a carácter; si
usas `string`s o algún método para almacenar las cartas el problema será
considerado **inválido**. Además, ten en cuenta que la secuencia se
asume que proviene de una fuente ilimitada de cartas, por lo que no se
puede suponer ninguna longitud máxima.

Observa también que aunque la palabra \"Póker\" se escribe con acento,
en la salida éste no debe incluirse.

## Autor

PRO1

© Jutge.org, 2006--2025.

