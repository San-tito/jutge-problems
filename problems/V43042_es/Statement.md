# N-Poker consecutivo

Tenemos una secuencia de cartas de Póker, y queremos saber si en algún
punto de la secuencia hay $N$ cartas consecutivas iguales (un \"N-Poker
consecutivo\"). Haz un programa que lea una secuencia de cartas, y
determine si la secuencia tiene o no $N$ cartas consecutivas iguales.

## Entrada

La entrada comienza con un número natural $N$, con $N > 0$. Después
viene una secuencia de caracteres que representan las cartas de la
secuencia. Tal como en el problema \"Mano de Póker\", los caracteres
para las cartas son `A` para el 1, `2`, `3`, `4`, `5`, `6`, `7`, `8`,
`9`, `0` para el 10, `J`, `Q` y `K`. Se garantiza que la secuencia de
cartas tiene al menos una carta.

## Salida

Escribe \"$N$-Poker de $x$!\" si la secuencia tiene $N$ cartas de valor
$x$ iguales. En caso contrario, escribe \"No hay N-Poker\". Por ejemplo,
si $N$ es 7, y encontramos 7 repeticiones de la carta K, la salida será
\"7-Poker de K!\", pero si no hay ninguna carta repetida 7 veces, la
salida será \"No hay 7-Poker\". La salida solo muestra el primer
$N$-Poker consecutivo encontrado, con la $x$ correspondiente, aunque en
la secuencia podría haber más $N$-Pókers consecutivos.

## Observación

En este problema es necesario tratar la entrada carácter a carácter, si
utilizas `string`s o algún método para almacenar los datos el problema
será considerado inválido. Además, ten en cuenta que la secuencia
proviene de una fuente ilimitada de cartas, por lo que no se puede
suponer ninguna longitud máxima.

Observa también que aunque la palabra \"Póker\" va con acento, en la
salida del programa éste no debe incluirse.

## Autor

PRO1

© Jutge.org, 2006--2025.

