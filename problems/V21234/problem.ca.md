# Arbre mirall

Implementeu la funció:

    /**
    * @brief Retorna un arbre que és el mirall de l'arbre `t`.
    * 
    * Un arbre és el mirall d'un altre si les seves branques
    * estan en ordre invers recursivament en tots els nodes.
    * 
    * @param t L'arbre original.
    * 
    * @returns Un arbre que és el mirall de l'arbre `t`.
    */
    Tree<int> tree_mirror(Tree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `Tree` (fitxer
`tree.hh`), l'entrada/sortida de `Tree` (`tree-io.hh`) i el programa
principal. També hi ha un `Makefile` i el directori `.vscode` que té la
configuració per compilar i debuggar amb VSCode.

Has d'implementar `tree_mirror` en un **fitxer `.cc` nou**, compilar
(està preparat per poder compilar i debuggar amb VSCode), i finalment
**enviar només el fitxer amb la funció**.

## Entrada

Cada cas consisteix en una representació textual d'un arbre d'enters.
(Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida conté la representació textual de l'arbre
resultant d'aplicar la funció `tree_mirror`. (La sortida també la fa el
programa principal.)

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T13:06:41.927Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
