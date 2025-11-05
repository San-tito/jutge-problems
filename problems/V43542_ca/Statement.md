***Jutge.org***\
The Virtual Learning Environment for Computer Programming

------------------------------------------------------------------------

 \
**Mà de Poker**

------------------------------------------------------------------------

Escriu una **funció** que donades 3 cartes de Pòquer retorni una
descripció (un `string`) de la mà que representen. La descripció ha de
ser una de les quatre possibilitats següents: \"Trio d'Asos!\",
\"Trio\", \"Parella\", o \"Totes les cartes diferents\".

Les cartes són un dels 13 caràcters següents: `A`, `2`, `3`, \..., `9`,
`0`, `J`, `Q`, `K`. Hi has dos caràcters que val la pena explicar: la
carta `A` és l'as i representa l'1, tal com en les baralles normals, i
el dígit `0` representa el 10, per simplificar la lectura.

La capçalera de la funció és, exactament:

    /**
    * @pre c1, c2, c3 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
    * @post Retorna "Trio d'Asos!", "Trio", "Parella", o 
    *       "Totes les cartes diferents" segons c1, c2 i c3.
    */
    string poker_hand(char c1, char c2, char c3);

## Observació

Només cal enviar la funció demanada; el programa principal serà ignorat.

## Autor

PRO1

© Jutge.org, 2006--2025.

