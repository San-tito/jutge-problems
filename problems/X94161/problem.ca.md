# Mètode de Stack per a accedir al segon element des del top

Implementeu un nou mètode de la classe Stack que retorni el segon
element des del top. En el cas especial en que hi hagi només un element,
llavors retornarà aquest element. S'assumeix que no tindrà lloc el cas
especial en que no hi hagi cap element.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` la part:

    // Pre:  La pila implícita té un element o més.
    // Post: Retorna l'element de la pila implícita que es troba en segona posició des del top.
    //       Si la pila té només un element, llavors retorna aquest element.
    // Descomenteu les següents dues linies i implementeu el mètode:
    // T top2() {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

Preferiblement, haurieu d'aconseguir implementar `top2` a base de
treballar amb els punters de l'objecte. De fet, una implementació a base
d'usar `push` i `pop` i `top` us permetrà passar els jocs de proves
públics, però no els privats. Recordeu que és important alliberar la
memòria que ja no s'utilitzarà més.

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
    top2

Se suposa que la seqüència d'entrada serà correcta (sense `pop` ni `top`
ni `top2` sobre pila buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `top`, s'escriurà el top actual de la pila. Per a
cada instrucció `top2`, s'escriurà el segon element des del top de la
pila, o el del top de la pila si la pila només té un element. El
programa que us oferim ja fa això. Només cal que implementeu el mètode
abans esmentat.

## Informació del problema

Autoria: PRO1

Generació: 2026-01-27T18:57:18.495Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
