# Mètode de la classe llista per a moure el segon element al final

Implementeu un nou mètode de la classe List que tregui l'element situat
en segona posició, i el posi al final de la llista. En altres paraules,
si el contingut de la llista és $[a_1,a_2,a_3,\ldots,a_n]$, a on els
elements es presenten des del principi de la llista fins al final,
llavors recol.locar el segon element de la llista al final d'aquesta la
deixa així: $[a_1,a_3,\ldots,a_n,a_2]$. El els casos especials en que la
llista té $0$ o $1$ o $2$ elements, el mètode no fa res.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`list.hh`, a on hi ha una implementació de la classe genèrica `List`.
Haureu de buscar dins `list.hh` la part:

    // Pre: 
    // Post: El segon element de la llista s'ha mogut a l'última posició.
    //       Si hi havia menys de tres elements a la llista, llavors res ha canviat.
    //       No s'ha creat ni eliminat memòria.
    // Descomenteu les següents dues linies i implementeu la funció:
    // void moveSecondToLast() {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`list.hh`. Només cal que pugeu `list.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una llista que se suposa inicialment
buida i un iterador que se suposa situat inicialment al principi (i
final) d'aquesta llista:

    push_front s (s és un string)
    push_back s (s és un string)
    pop_front 
    pop_back
    it++
    it--
    *it
    print
    moveSecondToLast

Se suposa que la seqüència d'entrada serà correcta (sense `pop_front` ni
`pop_back` sobre llista buida, ni `it` tenint `it` situat al `end` de la
llista). Tampoc hi haurà `pop_front` just quan l'iterador estigui
apuntant al primer element de la llista, ni hi haurà `pop_back` just
quan l'iterador estigui apuntant a l'últim element de la llista (tingueu
en compte que l'últim element de la llista no és el `end` de la llista).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe list.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `it`, s'escriurà el contingut apuntat per
l'iterador. Per a cada instrucció `print` s'escriurà el contingut de
tota la llista. El programa que us oferim ja fa això. Només cal que
implementeu el mètode abans esmentat.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 6 punts.

- solució ràpida: 10 punts.

Entenem com a solució lenta una que és correcta i capaç de superar els
jocs de proves públics. Entenem com a solució ràpida una que és correcta
i capaç de superar els jocs de proves públics i privats.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:52:02.775Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
