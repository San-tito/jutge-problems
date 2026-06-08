# Modificar operadors ++ i -- dels iteradors de la classe List per a que siguin circulars

Modifiqueu la classe List per a fer que els iteradors es comportin de
manera circular, és a dir, que si un iterador `it` està situat al `end`
de la llista i fem `++it` o `it++`, llavors es posicionarà al `begin` de
la llista, i si un iterador `it` és al `begin` de la llista i fem `–it`
o `it–`, llavors es posicionarà al `end` de la llista.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`list.hh`, a on hi ha una implementació de la classe genèrica `List`.
Haureu de buscar dins `list.hh` els mètodes d'increment i decrement
d'iteradors i modificar-los convenientment. No toqueu la resta de la
implementació de la classe, excepte si, per algun motiu, considereu que
necessiteu afegir algun mètode auxiliar a la part privada. Només cal que
modifiqueu els iteradors mutables; els iteradors constants no es
consideren en aquest exercici.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`list.hh`. Només cal que pugeu `list.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una llista que se suposa inicialment
buida i un iterador que se suposa situat inicialment al principi (i
final) d'aquesta llista:

    push_front x (x és un string)
    push_back x (x és un string)
    pop_front 
    pop_back
    it++
    ++it
    it--
    --it
    *it

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
l'iterador. El programa que us oferim ja fa això. Només cal que
implementeu el mètode abans esmentat.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:52:34.956Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
