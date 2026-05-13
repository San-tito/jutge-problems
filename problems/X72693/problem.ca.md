# Mètode de Stack per a esborrar el segon element des del top

Implementeu un nou mètode de la classe Stack que esborri el segon
element des del top. En el cas especial en que hi hagi només un element,
llavors eliminarà aquest element. En el cas especial en que no hi hagi
cap element, llavors no farà res.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` la part:

    // Pre:
    // Post: Elimina l'element de la pila implícita que es troba en segona posició des del top.
    //       Si la pila té només un element, llavors elimina aquest element.
    //       Si la pila no té cap element, llavors no canvia res.
    // Descomenteu les següents dues linies i implementeu el mètode:
    // void pop2() {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

Preferiblement, haurieu d'aconseguir implementar `pop2` a base de
treballar amb els punters de l'objecte. De fet, una implementació a base
d'usar `push` i `pop` us permetrà passar els jocs de proves públics (i
així obtenir una part de la nota), però no els privats. Recordeu que és
important alliberar la memòria que ja no s'utilitzarà més.

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
    pop2

Se suposa que la seqüència d'entrada serà correcta (sense `pop` ni `top`
sobre pila buida). Si que hi pot haver `pop2` sobre pila buida, cas en
el qual la instrucció no té cap efecte.

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `top`, s'escriurà el top actual de la pila. Per a
cada instrucció `size`, s'escriurà el nombre actual d'elements de la
pila. El programa que us oferim ja fa això. Només cal que implementeu el
mètode abans esmentat.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 6 punts.

- solució ràpida: 10 punts.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:55:18.518Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
