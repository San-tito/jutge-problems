# Arbre de sumes d'un arbre n-ari

Afegiu una operació pública a la classe genèrica *ArbreNari* vista a
teoria que calculi *l'arbre suma* de l'arbre d'entrada. Feu servir la
següent especificació:

    void arbsuma(ArbreNari& asum) const
    /* Pre: cert */
    /* Post: asum és un arbre amb la mateixa estructura que el p.i.
             i cada node és la suma del node corresponent al p.i
             i tots els seus descendents al p.i. */

Un exemple per un arbre 3-ari

        a =       5           arbre de sumes d'a =       31
                / | \                                  /  |  \
              7   1   3                              10   1   15
            /  \      | \                           /   \     | \ 
           2    1     8  4                         2     1    8  4

No utilitzeu cap de les operacions primitives dels arbres n-aris,
accediu directament als atributs de la classe *ArbreNari*.

## Entrada

L'entrada és un arbre n-ari, que serà llegit en preordre, en el
paràmetre implícit.

## Sortida

La sortida és l'arbre suma de l'arbre d'entrada.

## Observació

Només s'ha d'enviar un fitxer anomenat *program.hh*, que no ha de fer
cap *cout*, que contingui la funció amb la capçalera de l'enunciat i
qualsevol altra funció auxiliar que cregueu convenient, sense la funció
*main* i sense posar-hi cap *include*. A l'apartat *Public files*
trobareu els fitxers que us calen per construir la vostra solució.

## Informació del problema

Autoria: María Teresa Abad (adaptadora)

Generació: 2026-01-27T18:51:27.128Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
