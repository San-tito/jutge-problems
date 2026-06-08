# Cerca d'un valor en un arbre general

Afegiu una operació pública a la classe genèrica *ArbreGen* vista a
teoria que donat un valor indiqui si aquest es troba o no a l'arbre. Feu
servir la següent especificació:

    bool buscar(const T& x) const
    /* Pre: cert */
    /* Post: el resultat indica si x es troba al p.i. o no */

No utilitzeu cap de les operacions primitives dels arbres generals,
accediu directament als atributs de la classe *ArbreGen*.

## Entrada

L'entrada és un arbre general, que serà llegit en preordre, en el
paràmetre implícit i el valor a buscar en l'arbre.

## Sortida

La sortida és *cert*, si s'ha trobat el valor en l'arbre d'entrada, o
*fals* en cas contrari.

## Observació

Només s'ha d'enviar un fitxer anomenat *program.hh*, que no ha de fer
cap *cout*, que contingui la funció amb la capçalera de l'enunciat i
qualsevol altra funció auxiliar que cregueu convenient, sense la funció
*main* i sense posar-hi cap *include*. A l'apartat *Public files*
trobareu els fitxers que us calen per construir la vostra solució.

## Informació del problema

Autoria: María Teresa Abad (adaptadora)

Generació: 2026-01-27T18:53:37.824Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
