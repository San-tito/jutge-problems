# Mètode per a moure el primer element d'una cua cap a la última posició

Implementeu un nou mètode de la classe Queue que mogui el seu element
del front cap a la última posició. En cas que la cua no tingui cap
element, la funció no farà res.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`queue.hh`, a on hi ha una implementació de la classe genèrica `Queue`.
Haureu de buscar dins `queue.hh` la part:

    // Pre:
    // Post: L'element que estava en primera posició de la cua implícita
    //       ha estat mogut cap a la última posició.
    //       En el cas en que la cua no tingués cap element, res ha canviat.
    // Descomenteu les següents dues linies i implementeu la funció:
    // void moveFrontToLast() {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

La idea és que la vostra implementació treballi amb punters. De fet,
molt possiblement, una implementació basada en usar `front`, `pop` i
`push` serà massa lenta i no superarà els jocs de proves privats.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`queue.hh`. Només cal que pugeu `queue.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una cua d'strings que se suposa
inicialment buida:

    push x (x és string)
    pop
    front
    size
    moveToLast

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

Generació: 2026-01-27T18:51:14.269Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
