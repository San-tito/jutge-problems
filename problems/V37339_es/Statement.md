# Números bocadillo

Definimos como número *bocadillo* un natural $n$ con solo dos dígitos
$d$ y $e$ diferentes, que forman una secuencia $de_1e_2\cdots e_kd$. Es
decir, el dígito $d$ es el primer y el último dígito de $n$ (el pan), y
el dígito $e$ está repetido $k \geq 1$ veces entre los dos dígitos $d$
(el embutido o relleno). Por ejemplo, 121 es un número bocadillo con
$d = 1, e = 2, k = 1$, y 4004 es un número bocadillo con
$d = 4, e = 0, k = 2$.

Más ejemplos de números bocadillo: 7227, 41114, 966669, 10001 y 535.\
Ejemplos de números que **no** son bocadillo: 9, 12, 113311, 7878, 1234,
9991, 1000.

Implementa una **función** `is_sandwich` que recibe un número natural y
retorna `true` si es un número bocadillo y `false` en caso contrario.

La cabecera de la función debe ser:

    /**
     * @pre  n >= 0
     * @post retorna cierto si n es un número bocadillo, falso en caso contrario
     */
    bool is_sandwich(int n);

## Observación

Solo se debe enviar la función solicitada; el programa principal será
ignorado.

## Autor

PRO1

© Jutge.org, 2006--2025.

