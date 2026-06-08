# Mètode de Queue per a multiplicar els elements de la cua per un paràmetre

Implementeu un nou mètode de la classe Queue que rebi un element com a
paràmetre i modifiqui tots els elements de la cua a base de
multiplicar-los per aquest paràmetre. Òbviament, aquest mètode només
serà útil quan instanciem la classe Queue amb un tipus per al qual
estigui definida la operació producte.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`queue.hh`, a on hi ha una implementació de la classe genèrica `Queue`.
Haureu de buscar dins `queue.hh` la part:

    // Pre:
    // Post: Tots els elements de la cua implícita han estat multiplicats per 'value'.
    // Descomenteu les següents dues linies i implementeu la funció:
    // void operator*=(T value) {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`queue.hh`. Només cal que pugeu `queue.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una cua de doubles que se suposa
inicialment buida:

    push x (x és un double)
    pop
    front
    size
    *= x (x és un double)

Se suposa que la seqüència d'entrada serà correcta (sense pop ni front
sobre cua buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe cua.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `front`, s'escriurà el front actual de la cua. Per
a cada instrucció `size`, s'escriurà la mida de la cua. El programa que
us oferim ja fa això. Només cal que implementeu el mètode abans
esmentat.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:56:40.951Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
