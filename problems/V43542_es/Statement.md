***Jutge.org***\
The Virtual Learning Environment for Computer Programming

------------------------------------------------------------------------

 \
**Mano de Póker**

------------------------------------------------------------------------

Escribe una **función** que dadas 3 cartas de Póker devuelva una
descripción (un `string`) de la mano que representan. La descripción
debe ser una de las cuatro posibilidades siguientes: \"Trio de Ases!\",
\"Trio\", \"Pareja\", o \"Todas las cartas diferentes\".

Las cartas son uno de los 13 caracteres siguientes: `A`, `2`, `3`, \...,
`9`, `0`, `J`, `Q`, `K`. Hay dos caracteres que vale la pena explicar:
la carta `A` es el as y representa el 1, tal como en las barajas
normales, y el dígito `0` representa el 10, para simplificar la lectura.

La cabecera de la función es, exactamente:

    /**
    * @pre c1, c2, c3 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
    * @post Devuelve "Trio de Ases!", "Trio", "Pareja", or 
    *       "Todas las cartas diferentes" según c1, c2 y c3.
    */
    string poker_hand(char c1, char c2, char c3);

## Observación

Solo hay que enviar la función solicitada; el programa principal será
ignorado.

## Autor

PRO1

© Jutge.org, 2006--2025.

