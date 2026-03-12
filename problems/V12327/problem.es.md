# Muestra los valores de un BST en orden

Dado un árbol binario de búsqueda (BST) de enteros, implementa una
función que muestre todos sus valores por la salida estándar de menor a
mayor, separados por espacios y con un salto de línea al final.

    /**
     * @brief Muestra los valores de un BST ordenados de menor a mayor.
     *
     * @param t Un árbol binario de búsqueda.
     * @post Se han escrito los valores de `t` por la salida estándar,
     *       de menor a mayor, separados por espacios y con un salto de
     *       línea al final.
     */
    void mostra_bst(BinTree<int> t);

## Entrada

La entrada consiste en una secuencia de árboles binarios de búsqueda de
enteros, en formato visual.

## Salida

Para cada árbol, una línea con los valores ordenados de menor a mayor,
separados por espacios.

## Observación

Los ficheros públicos (icono del gatito) son: la clase `BinTree`
(fichero `bintree.hh`), la entrada/salida de `BinTree` (`bintree-io.hh`)
y el programa principal. También hay un `Makefile` y el directorio
`.vscode` con la configuración para compilar y depurar con VSCode.

Debes implementar `mostra_bst` en un **fichero `.cc` nuevo**, compilar
(está preparado para poder compilar y depurar con VSCode), y finalmente
**enviar solo el fichero con la función**.

En este problema, la eficiencia es importante.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-03-12T15:24:09.570Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
