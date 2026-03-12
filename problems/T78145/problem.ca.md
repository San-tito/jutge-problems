# Mirall d'un arbre binari

Implementeu la funció:

    /**
    * @brief Retorna un arbre binari que és el mirall de l'arbre `t`.
    * 
    * Un arbre binari és el mirall d'un altre si les seves branques esquerra i dreta
    * estan intercanviades recursivament en tots els nodes.
    * 
    * @param t L'arbre binari original.
    * 
    * @returns Un arbre binari que és el mirall de l'arbre `t`.
    */
    BinTree<int> reverse_tree(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `reverse_tree` en un **fitxer `.cc` nou**, compilar
(està preparat per poder compilar i debuggar amb VSCode), i finalment
**enviar només el fitxer amb la funció**.

## Entrada

Cada cas consisteix en una representació textual d'un arbre binari
d'enters. (Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida conté la representació textual de l'arbre
resultant d'aplicar la funció `reverse_tree`. (La sortida també la fa el
programa principal.)

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T12:55:44.006Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
