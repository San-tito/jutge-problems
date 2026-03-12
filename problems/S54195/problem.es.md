# Ordenación por Selección con Iteradores

El algoritmo de **ordenación por selección** consiste en, de forma
iterativa, encontrar el elemento mínimo de la parte no ordenada y
colocarlo al principio de esa parte. Concretamente:

1.  Se busca el elemento mínimo del rango `[begin, end)` y se
    intercambia con el elemento apuntado por `begin`.

2.  Seguidamente, se busca el mínimo del rango que va desde el siguiente
    a `begin` hasta `end`, y se intercambia con el segundo elemento.

3.  Se repite hasta que queda un solo elemento por procesar.

Escribe una función con la cabecera

    /**
     * @brief Ordena un rango de una lista usando selección.
     *
     * @param begin Iterador al principio del rango.
     * @param end Iterador al final del rango (no incluido).
     * @pre begin y end delimitan un rango válido de una lista.
     * @post El rango [begin, end) queda ordenado ascendentemente.
     */
    void ordenacio_seleccio(list<int>::iterator begin,
                            list<int>::iterator end);

que ordene el rango `[begin, end)` de una lista de enteros usando el
algoritmo de ordenación por selección.

Por ejemplo, si la lista contiene `5 3 1 4 2`, después de llamar a la
función la lista debe contener `1 2 3 4 5`.

## Entrada

La entrada consiste en una secuencia de enteros separados por espacios,
que se lee hasta el final de la entrada.

## Salida

La salida es una línea con los elementos de la lista ordenada
ascendentemente, separados por espacios.

## Observación

En los ficheros públicos (icono del gatito) encontrarás: `main.cc` (el
programa principal, con la entrada/salida hecha), `ordenacio.cc` (donde
debes implementar la función) y un `Makefile`.

Debes implementar `ordenacio_seleccio` en el fichero `ordenacio.cc` y
enviar **únicamente** ese fichero.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:47:18.017Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
