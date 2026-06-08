# Rotación en una cola

Disponemos de una clase `Queue` (fichero `queue.hh`) que implementa una
cola de valores de tipo `T`. Se trata de añadir un método **`rotate`** a
la clase `Queue`, que recibe un valor $v$, y tiene el siguiente
comportamiento.

- Si $v$ no se encuentra en la cola, ésta no cambia.

- Si $v$ aparece en la cola, el elemento de valor $v$ pasa a ser el
  primero de la cola, poniendo todos los anteriores a éste al final de
  la cola, en el mismo orden en que estaban. (Si la cola contiene varios
  elementos de valor $v$, se coge el primero.)

Por ejemplo, si la cola es `x y z a b c d`, y $v$ es `a`, entonces la
cola se convierte en `a b c d x y z`. La cabecera del método a
implementar es:

    /**
     * @pre:  Cierto.
     *
     * @post: Si la cola (p. i.) no contiene el valor value, ésta no cambia. 
     *        Si la cola lo contiene, se tomará como referencia la primera 
     *        aparición, y se moverán todos los elementos anteriores a ésta al
     *        final de la cola, en el mismo orden en que estaban.
     */
    void rotate(T value);

(El método `rotate` se encuentra al final del fichero `queue.hh`.)

Los ficheros públicos (icono del gatito) incluyen un `.tar` con
`main.cc`, `queue.hh` y un `Makefile`. También se incluye una copia de
los juegos de prueba públicos por comodidad. En la carpeta donde se
descompriman se puede: compilar con \"`make`\"; y testear con
\"`make test`\".

El `main.cc` ya se encarga de leer la entrada, procesar los comandos y
producir la salida. Para entregar, solo es necesario subir al Jutge
vuestro archivo `queue.hh` modificado.

## Entrada

La entrada del programa es una secuencia de comandos como los siguientes
que se irán aplicando sobre una cola de `string`s que está inicialmente
vacía:

    push x     // lee un string y lo pone en la cola
    pop
    front
    size
    rotate     // lee un string y rota la cola
    print      // muestra la cola a la salida

Se puede suponer que la secuencia de entrada será correcta (p.e., sin
comandos `pop` ni `front` cuando la cola está vacía).

## Salida

La salida es el resultado de los comandos `size`, `front` o `print`.
Consultad los juegos de prueba, ya que son auto-explicativos.

## Observación

La **eficiencia** del algoritmo es importante.

## Información del problema

Autoría: PRO2

Generación: 2026-01-27T18:48:16.747Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
