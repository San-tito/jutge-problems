# Mejor Carta

Escribe una **función** que dadas dos cartas de Póker devuelva `true` si
el valor de la primera carta es mayor que el valor de la segunda carta.
Las cartas son las de la baraja de Póker habitual, representadas con uno
de los 13 caracteres siguientes: `A`, `2`, `3`, \..., `9`, `0`, `J`,
`Q`, `K`. Hay dos caracteres especiales: la carta `A` es el As y
equivale al 1, tal como en las barajas normales, y el dígito `0`
representa el 10, para simplificar la lectura. Fíjate que las cartas
identificadas con una letra siempre son mayúsculas.

Los valores de las cartas son los siguientes: las cartas numéricas
tienen el valor que indica su número. La carta `0` tendrá el valor 10,
por el hecho de que representa la carta 10. A continuación, la `J` vale
11, la `Q` vale 12 y la `K` vale 13. La `A` valdría 1, pero en este
problema consideraremos que tiene el valor más alto (como se hace a
menudo), y será 14.

La cabecera de la función es, exactamente:

    /**
     * @pre c1, c2 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
     * @post Retorna cierto si c1 tiene un valor más alto que c2
     */
    bool better_card(char c1, char c2);

## Observación

Solo es necesario enviar la función solicitada; el programa principal
será ignorado.

## Autor

PRO1

© Jutge.org, 2006--2025.

