# Toboganes

Un *tobogán* es una secuencia de enteros de almenos tres elementos tal
que la diferencia $d$ entre cada dos elementos consecutivos es la misma
y es diferente de 0. La *pendiente* del tobogan es $d$, y la *longitud*
del tobogan es el número de elementos de éste. Los toboganes son
*ascendientes* cuando $d > 0$ y son *descendientes* cuando $d < 0$.

Por ejemplo, las siguientes secuencias son todas toboganes:

- 1 2 3, de pendiente 1 y longitud 3;

- 5 10 15 20, de pendiente 5 y longitud 4;

- -11 -22 -33 -44 -55, de pendiente -11 y longitud 5.

El objetivo del ejercicio es, dada una secuencia de enteros de entrada,
encontrar la subsecuencia consecutiva más larga que es un tobogán
ascendiente, y la subsecuencia consecutiva más larga que es un tobogán
descendiente. Si hubiera más de un tobogán ascendiente com la misma
longitud máxima, se debe reportar el primero de ellos, y lo mismo hay
que hacer con los togobanes descendientes. Además, nos interesa saber en
qué posición (qué elemento de la secuencia entera de la entrada)
comienza el tobogán, contando que la posición del primer elemento es 1.

## Entrada

Una secuencia de enteros sin centinela. Se garantiza que la secuencia
tiene almenos dos elementos.

## Salida

La salida debe contener una línea para cada tipo de tobogán (ascendiente
y descendiente). Si no se han encontrado toboganes de cualquiera de los
dos tipos, no hay que escribir la línea correspondiente. La línea
contiene un caracter (\"`/`\" para ascendientes y \"`\`\" para
descendientes), un espacio, y luego 3 números separados por \"`:`\": la
posición de inicial del tobogán más grande, la pendiente, y la longitud.

## Autor

PRO1

© Jutge.org, 2006--2025.

