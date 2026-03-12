# Fusión de K Listas Ordenadas

Dadas $K$ listas de enteros, cada una ordenada en orden descendente, hay
que fusionarlas todas en una sola lista, también en orden descendente.

La estrategia consiste en usar un *max-heap* que almacena pares (valor,
índice de lista). Inicialmente, se inserta el primer elemento de cada
lista en el *heap* junto con el índice de la lista de la que proviene.
En cada paso, se extrae el máximo del *heap*, se añade al resultado, y
se inserta el siguiente elemento de la misma lista (si lo hay). De esta
manera, el *heap* siempre contiene como máximo $K$ elementos y el
proceso es eficiente.

Haz una función con la cabecera

    /**
     * @brief Fusiona K listas ordenadas descendentemente en una sola
     * lista ordenada descendentemente.
     *
     * @param llistes Vector de K listas, cada una ordenada
     * descendentemente.
     * @pre Cada lista de `llistes` está ordenada en orden descendente.
     * @post Retorna una lista con todos los elementos de todas las
     * listas, ordenada descendentemente.
     */
    list<int> fusiona_llistes(
        const vector<list<int>>& llistes
    );

## Entrada

La primera línea contiene un entero $K$ (el número de listas). A
continuación hay $K$ líneas, cada una con una lista no vacía de enteros
en orden descendente, separados por espacios.

## Salida

Una sola línea con todos los enteros fusionados en orden descendente,
separados por espacios.

## Observación

En los ficheros públicos (icono del gatito) encontrarás: `main.cc` (el
programa principal, con la entrada/salida hecha), `fusio.cc` (donde hay
que implementar la función), `heap.hh`, `assert.hh` y un `Makefile`.

Hay que implementar `fusiona_llistes` en el fichero `fusio.cc` y enviar
**solo** ese fichero.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-03-05T11:19:05.057Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
