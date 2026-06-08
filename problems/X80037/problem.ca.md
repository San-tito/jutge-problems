# Mètode per a sumar el contingut que ve d'una altra pila

Implementeu un nou mètode de la classe Stack que rebi una altra pila del
mateix tipus com a paràmetre i modifiqui tots els elements de la pila
implícita a base de sumar els elements corresponents de l'altra pila.
Òbviament, aquest mètode només serà útil quan instanciem la classe Stack
amb un tipus per al qual estigui definida la operació suma.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` la part:

    // Pre:
    // Post: A l'element del top de la pila implícita se li ha sumat
    //       l'element del top de s,
    //       al segon element des del top de la pila implícita se li ha sumat
    //       el segon element des del top de s, i així successivament.
    //       Si la pila implícita era més llarga que s,
    //       llavors aquells elements extres no han canviat.
    //       Si s era més llarga que la pila implícita, llavors aquells elements
    //       extres de s han estat ignorats.
    // Descomenteu les següents dues linies i implementeu la funció:
    // void operator+=(const Stack<T> &s) {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`stack.hh`. Només cal que pugeu `stack.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus. En totes elles, 'id' i 'id2' són strings que identifiquen piles
sobre les quals s'apliquen el mètodes. S'assumeix que totes les piles
usades estaran buides inicialment:

    id.push x (x és un enter)
    id.pop
    << id
    id += id2

Se suposa que la seqüència d'entrada serà correcta (sense pop sobre pila
buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció $<<$` id`, s'escriurà el contingut actual de la
pila identificada per `id`. El programa que us oferim ja fa això. Només
cal que implementeu el mètode abans esmentat.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-27T18:55:54.476Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
