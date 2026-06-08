# Subárbol menor de Productos

En este ejercicio tendréis que resolver un algoritmo de la práctica,
pero en vez de usar la clase `BinTree` programaréis el algoritmo en la
clase `Arbre`. No se puede llamar a las operaciones de `Arbre`, sino que
tenéis que programarlo usando punteros.

El algoritmo crea, a partir de un árbol de salas y un conjunto de
productos que se encuentran en el árbol, el **subárbol menor** de éste
que incluya la raíz, y todos los productos del conjunto.

La cabecera y especificación son las siguientes:

    /**
    * @pre:  El árbol (p.i.) está vacío. Los productos del set están todos
    *        en el árbol 'a'.
    *
    * @post: El árbol (p.i.) contiene el subárbol menor de 'a' que incluye todos
    *        los 'productos', incluyendo la raíz.
    */
    void crear_subarbol(const Arbre& a, set<string>& productos);

(La declaración de `crear_subarbol` se encuentra al final del fichero
`Arbre.hh`.)

Los ficheros públicos (icono del gatito) incluyen un `.tar` con
`main.cc`, `Arbre.hh`, `Arbre-io.hh`, y un `Makefile`. También se
incluye una copia de los juegos de prueba públicos. En la carpeta donde
se descompriman se puede: compilar con \"`make`\"; y testear con
\"`make test`\".

El `main.cc` ya se encarga de leer la entrada, crear el subárbol y
producir la salida. Para entregar, solo es necesario subir al Jutge
vuestro archivo `Arbre.hh` modificado.

## Observaciones

Con el fin de programar la operación anterior, podríais necesitar alguna
operación privada y posiblemente `static`.

## Entrada

La entrada es una representación textual del árbol de salas de la
tienda, y una secuencia con el conjunto de productos que ha seleccionado
el usuario, tal como en la práctica. (Esto está ya implementado en
`main.cc`).

## Salida

La salida es la representación textual del subárbol mínimo encontrado.
(Esto también está implementado en `main.cc`.)

## Información del problema

Autoría: PRO2

Generación: 2026-01-27T18:50:04.754Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
