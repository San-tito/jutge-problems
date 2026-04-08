# Llistes iguals circularment

Donades dues llistes d'enters, volem saber si una és igual circularment
a l'altra. És a dir, si es pot obtenir una llista a partir de l'altra
rotant els seus elements.

Per exemple: $l_1 = [1, 2, 3]$ és igual circularment a
$l_2 = [3, 1, 2]$, perquè en posar el 3 de $l_2$ al final, obtenim
$l_1$. Un altre exemple: $[2, 7, 1, 0]$ no és igual a $[0, 1, 7, 2]$. Un
cas especial és que considerarem que dues llistes buides són iguals
circularment.

L'exercici és implementar la funció següent:

    /**
     * @pre  cert
     * @post es retorna cert si l1 i l2 són iguals circularment, 
     *       fals en cas contrari.
     */
    bool circularly_equal(const list<int>& l1, const list<int>& l2)

Només cal enviar aquesta funció.

## Observació

Envieu un fitxer només amb la funció, si envieu amb el `main` dóna CE.

## Informació del problema

Autoria: PRO2

Generació: 2026-03-25T11:54:15.006Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
