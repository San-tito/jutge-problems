# Números bicolor

Definimos como número *bicolor* un natural $n$ con solo dos dígitos
diferentes que están repetidos en dos bloques (o \"colores\"). Más
formalmente, la secuencia de dígitos de $n$ es
$d_1d_2\ldots d_ke_1e_2\ldots e_l$, donde $d$ y $e$ son los dos dígitos
y, $d\neq e$, $k > 0$ y $l > 0$.

Por ejemplo, son números bicolor: 7722, 44111, 666699, 277 y 45.\
Y los siguiente **no** son bicolor: 121, 113311, 7878, 1234, 7, 55,
99910.

Implementa una **función** `is_bicolor` que recibe un natural y
determina si es bicolor. La función recibe un número $n > 0$ y devuelve
`true` si es bicolor y `false` en caso contrario.

La cabecera de la función debe ser, exactamente:

    /**
    * @pre n >= 0
    * @post retorna cierto si n es bicolor, falso en caso contrario
    */
    bool is_bicolor(int n);

## Observación

Solo hay que enviar la función solicitada; el programa principal será
ignorado.

## Autor

PRO1

© Jutge.org, 2006--2025.

