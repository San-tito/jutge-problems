# Implementar mètode de la classe Stack per a intercanviar els dos elements del top

Implementeu un nou mètode de la classe Stack per a intercanviar els dos
elements que es troben al cim.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` la part:

    // Pre: El paràmetre implícit és una pila amb com a mínim dos elements.
    // Post: Els dos valors del cim de la pila s'han intercanviat.
    // Descomenteu les següents dues linies i implementeu la funció:
    // void swap2Topmost() {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

Preferiblement, haurieu d'aconseguir implementar el `swap2Topmost` a
base d'intercanviar punters. De fet, un `swap` dels valors del cim, o
una implementació a base d'usar `push` i `pop` us permetrà passar els
jocs de proves públics (i així obtenir una part de la nota), però no els
privats.

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
    swap2Topmost

Se suposa que la seqüència d'entrada serà correcta (sense pop ni top
sobre pila buida, ni swap2Topmost sobre pila amb menys de dos elements).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `top`, s'escriurà el top actual de la pila. El
programa que us oferim ja fa això. Només cal que implementeu el mètode
abans esmentat.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 6 punts.

- solució ràpida: 10 punts.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:56:22.881Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
