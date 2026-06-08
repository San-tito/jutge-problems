# Mètode de llistes per a moure l'element apuntat per un iterador una posició cap al final

Implementeu un nou mètode de la classe List per a moure el contingut
apuntat per un iterador una posició cap al final. En cas que l'iterador
ja apunti a l'últim element de la llista, llavors el mètode no farà res.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`list.hh`, a on hi ha una implementació de la classe genèrica `List`.
Haureu de buscar dins `list.hh` les següents línies:

    // Pre:  it apunta a algun element de la llista implícita.
    // Post: it continua apuntant al mateix element, el qual ha estat mogut una posició
    //       cap al final. No s'ha creat ni eliminat memòria.
    //       En el cas en que l'element apuntat per it ja era l'últim, res ha canviat.
    // Descomenteu les següents dues linies i implementeu el mètode:
    // void moveTowardsEnd(iterator &it) {
    // }

Descomenteu les dues linies que s'indiquen i implementeu el mètode. No
toqueu la resta de la implementació de la classe, excepte si, per algun
motiu, considereu que necessiteu afegir algun mètode auxiliar a la part
privada.

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
    moveTowardsEnd

Se suposa que la seqüència d'entrada serà correcta (sense `pop_front` ni
`pop_back` sobre llista buida, ni `it` ni `moveTowardsEnd` tenint `it`
situat al `end` de la llista). Tampoc hi haurà `pop_front` just quan
l'iterador estigui apuntant al primer element de la llista, ni hi haurà
`pop_back` just quan l'iterador estigui apuntant a l'últim element de la
llista (tingueu en compte que l'últim element de la llista no és el
`end` de la llista).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe list.
Només cal que implementeu els mètodes abans esmentats.

## Sortida

Per a cada instrucció `it`, s'escriurà el contingut apuntat per
l'iterador. El programa que us oferim ja fa això. Només cal que
implementeu el mètode abans esmentat.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:55:30.300Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
