# Búsqueda en un BST

Dado un árbol binario de búsqueda (BST) de enteros, implementa una
función que busque si un valor se encuentra en el árbol.

    /**
     * @brief Busca un valor en un árbol binario de búsqueda.
     *
     * @param t Un árbol binario de búsqueda.
     * @param x Valor a buscar.
     * @returns `true` si `x` se encuentra en el árbol `t`,
     *          `false` en caso contrario.
     */
    bool bst_cerca(BinTree<int> t, int x);

## Entrada

La entrada consiste en una secuencia de árboles binarios de búsqueda de
enteros, en formato visual, cada uno seguido de una secuencia de enteros
a buscar.

## Salida

Para cada árbol, y para cada valor a buscar, una línea con el valor y
`true` o `false` según si el valor se encuentra en el árbol o no.

## Observación

Los ficheros públicos (icono del gatito) son: la clase `BinTree`
(fichero `bintree.hh`), la entrada/salida de `BinTree` (`bintree-io.hh`)
y el programa principal. También hay un `Makefile` y el directorio
`.vscode` con la configuración para compilar y depurar con VSCode.

Debes implementar `bst_cerca` en un **fichero `.cc` nuevo**, compilar
(está preparado para poder compilar y depurar con VSCode), y finalmente
**enviar solo el fichero con la función**.

En este problema, la eficiencia es importante.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-03-12T16:10:03.504Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
