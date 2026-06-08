# Inserción ordenada en pila

Disponemos de una clase `Stack` con elementos de tipo `T` (fichero
`stack.hh`). Implementad un método de esta clase que inserte un nuevo
elemento con cierto valor (parámetro explícito) en la pila (parámetro
implícito). La pila está ordenada, y el elemento que se introduce
*mantiene la pila ordenada*.

    /**
     * @pre:  La pila (parámetro implícito) está ordenada
     *        de menor (bottom) a mayor (top).
     *
     * @post: Se ha introducido en la pila p.i. de forma ordenada
     *        un nodo con contenido 'value'.
     */
    void push_sort(T value);

(La declaración del método `push_sort` está al final del fichero
`stack.hh`.)

Los ficheros públicos (icono del gatito) incluyen un `.tar` con
`main.cc`, `stack.hh` y un `Makefile`. También se incluye una copia de
los juegos de prueba públicos por comodidad. En la carpeta donde se
descompriman se puede: compilar con \"`make`\"; y testear con
\"`make test`\".

El `main.cc` ya se encarga de leer la entrada, procesar los comandos y
producir la salida. Para entregar, solo es necesario subir al Jutge
vuestro archivo `stack.hh` modificado.

## Observación

Al implementar `push_sort` no se pueden llamar otras operaciones de la
clase, y todo se debe implementar con punteros.

## Entrada

El programa principal tiene un bucle donde se van leyendo comandos, uno
por línea, y para cada una se realiza una operación de la pila. El
nombre de los comandos se corresponde con el de los métodos de la pila.
Consultad los juegos de prueba, ya que son auto-explicativos.

## Salida

La salida es el estado de la pila cada vez que la entrada contiene un
comando `size` o `print`. Consultad los juegos de prueba, ya que son
auto-explicativos.

## Información del problema

Autoría: PRO2

Generación: 2026-01-27T18:49:05.915Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
