# Arbre de sumes d'un arbre donat

Considerem la representació habitual amb nodes de la classe *Arbre* per
manegar arbres binaris genèrics d'elements de tipus **T** que podeu
trobar als fitxers públics. El nodes contenen la **info** i dos
apuntadors **segE** i **segD** als fills esquerra i dret. Un arbre només
té un atribut: un punter al **primer node**.

Definim l'arbre suma d'un arbre donat com aquell arbre identic al donat
pero en el que els nodes contenen la suma del subarbre corresponent. Per
exemple

1.  Si el p.i. és originalment (recorregut en preordre)

        2 3 2 0 0 1 0 0 4 0 3 0 0 

    l'arbre suma serà (recorregut en inordre)

        0 2 0 6 0 1 0 15 0 7 0 3 0

Dissenyeu aquesta operació

    void arb_sumes(Arbre<int> &asum) const
    /* Pre: cert */
    /* Post: l'arbre asum és l'arbre suma del p.i. */

No utilitzeu cap de les operacions primitives del arbres, accediu
directament als atributs de la classe *Arbre*.

## Entrada

L'entrada és un arbre binari, que serà llegit en preordre, en el
paràmetre implícit.

## Sortida

La sortida és l'arbre suma del paràmetre implícit recorregut en inordre.

## Observació

Només s'ha d'enviar un fitxer anomenat "program.hh"que contengui la
funció amb la capçalera de l'enunciat i qualsevol altra funció auxiliar
que cregueu convenient, sense la funció main i sense posar-hi cap
"include".

## Informació del problema

Autoria: Xavier Messeguer

Generació: 2026-01-27T18:50:49.843Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
