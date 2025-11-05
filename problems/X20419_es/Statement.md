# Longitud media y letra más frecuente

Dada una secuencia de palabras, queremos saber:

1.  Cuál es la longitud media $L$ de sus palabras.

2.  Para cada palabra con longitud igual o superior a $L$, cuál es la
    letra más frecuente y, en caso de empate, la más pequeña en orden
    lexicográfico.

Para resolver la segunda pregunta, vuestro programa debe implementar la
función

> **char** *letra_mas_frecuente*(**const string**& s);

que devuelve la letra minúscula que aparece más veces en $s$ (la menor
en orden lexicográfico, en caso de empate).

## Entrada

La entrada está formada por un número natural $n > 0$ seguido de $n$
palabras no vacías. Cada palabra está formada solo por letras
minúsculas.

## Salida

Escribid la longitud media de las palabras de la entrada usando una
precisión de dos decimales. Escribid también, para cada palabra con
longitud igual o superior a la longitud media, la letra minúscula que
más aparece (la menor en orden lexicográfico, en caso de empate). Seguid
el formato descrito en los ejemplos.

## Observación

Recordad que, para fijar una precisión de $d$ decimales en el canal de
salida, hay que utilizar las siguientes instrucciones

> cout.setf(ios::fixed);
>
> cout.precision(*d*);

Si lo consideráis útil, podéis definir y usar la constante
*LONG_ALFABETO*,

> **const int** *LONG_ALFABETO* = 'z' - 'a' + 1;

 \

## Autor

Maria J. Blesa i Maria J. Serna (es: Maria J. Serna)

© Jutge.org, 2006--2025.

