# Inserta en Orden

Escribe una función con la cabecera

    /**
     * @brief Inserta un valor en una lista ordenada.
     *
     * @param l Lista de enteros ordenada ascendentemente.
     * @param x Valor a insertar.
     * @pre l está ordenada ascendentemente.
     * @post l contiene x y sigue ordenada ascendentemente.
     */
    void inserta_per_ordre(list<int>& l, int x);

que reciba una lista de enteros ordenada ascendentemente y un entero
`x`, e inserte `x` en la posición correcta de manera que la lista siga
ordenada.

Por ejemplo, si la lista contiene `1 3 5 7 9` y `x = 4`, la lista
resultante debe ser `1 3 4 5 7 9`. Si `x` es menor o igual que todos los
elementos, se inserta al principio; si es mayor que todos, se inserta al
final.

## Entrada

La entrada consiste en una línea con los enteros de la lista ordenada
(separados por espacios, puede estar vacía) y una segunda línea con el
entero a insertar.

## Salida

La salida es una línea con los elementos de la lista resultante,
separados por espacios.

## Observación

En los ficheros públicos (icono del gatito) encontrarás: `main.cc` (el
programa principal, con la entrada/salida hecha), `inserta.cc` (donde
debes implementar la función) y un `Makefile`.

Debes implementar `inserta_per_ordre` en el fichero `inserta.cc` y
enviar **únicamente** ese fichero.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:47:10.616Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
