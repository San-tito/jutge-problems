***Jutge.org***\
The Virtual Learning Environment for Computer Programming

------------------------------------------------------------------------

 \
**Range (Recursivo)**

------------------------------------------------------------------------

Debes hacer una función **recursiva** tal que, dados dos enteros `start`
y `end`, imprima por pantalla todos los números enteros desde `end`
hasta `start` (ambos incluidos), de mayor a menor, separados por un solo
espacio. Toda la salida de la función debe estar en una sola línea (sin
espacios antes del primer número ni después del último).

Esta es la declaración de la función:

    /**
     * @brief Imprime por pantalla todos los enteros desde end hasta 
     *        start (ambos incluidos), de mayor a menor, separados 
     *        por un solo espacio.
     *
     * @pre start > 0, end > 0, start <= end. 
     */
    void range(int start, int end);

## Observación

El icono de nombre \".CPP\" contiene el programa principal para hacer
pruebas.

Solo debes enviar un archivo que contenga la función requerida, con los
`include` necesarios y las funciones auxiliares que hayas declarado (si
las hay), y **nada más**.

Solo aceptaremos una solución recursiva. Una solución no recursiva
anulará el ejercicio entero. Si es necesario, podéis usar funciones
*auxiliares* no recursivas, pero el grueso del cálculo debe estar en la
función recursiva.

## Entrada

Varios casos de prueba. Cada caso de prueba contiene dos enteros `start`
y `end`, con `start > 0`, `end > 0` y `start <= end`.

## Salida

Para cada caso de prueba, una línea con todos los enteros desde `end`
hasta `start` (ambos incluidos), de mayor a menor, separados por un solo
espacio.

## Autor

Pau Fernández

© Jutge.org, 2006--2026.

