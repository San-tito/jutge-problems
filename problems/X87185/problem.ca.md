# Mètode de Stack per a esborrar el primer element igual al paràmetre

Implementeu un nou mètode de la classe Stack que rebi un element com a
paràmetre i esborri la primera ocurrència (primera des del cim) d'aquest
element, si existeix.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` la part:

    // Pre:
    // Post: La primera ocurrència de 'value' en la pila implícita ha estat esborrada.
    //       Si no hi havia cap ocurrència de 'value', llavors no ha canviat res.
    // Descomenteu les següents dues linies i implementeu la funció:
    // void removeFirstOccurrence(T value) {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

Preferiblement, haurieu d'aconseguir implementar `removeFirstOccurrence`
a base d'avançar pels punters de l'objecte. De fet, una implementació a
base d'usar `push` i `pop` us permetrà passar els jocs de proves públics
(i així obtenir una part de la nota), però no els privats. Recordeu que
és important alliberar la memòria que ja no s'utilitzarà més.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`stack.hh`. Només cal que pugeu `stack.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una pila que se suposa inicialment
buida:

    push x (x és un string)
    pop
    top
    size
    removeFirstOccurrence x (x és un string)

Se suposa que la seqüència d'entrada serà correcta (sense pop ni top
sobre pila buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `top`, s'escriurà el top actual de la pila. Per a
cada instrucció `size`, s'escriurà la mida de la pila. El programa que
us oferim ja fa això. Només cal que implementeu el mètode abans
esmentat.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:56:47.542Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
