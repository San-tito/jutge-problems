# Arbre binari de mides

Implementeu la següent funció:

    /**
     * @brief Retorna l'arbre de mides de `t`.
     *
     * L'arbre de mides és un arbre binari amb la mateixa forma 
     * que `t` però a on cada valor conté la quantitat total de 
     * nodes del subarbre que penja de la mateixa posició a `t`.
     *
     * @param t L'arbre binari original.
     *
     * @returns L'arbre de mides de `t`.
     */
    BinTree<int> tree_of_sizes(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `tree_of_sizes` en un **fitxer `.cc` nou**, compilar
(està preparat per poder compilar i debuggar amb VSCode), i finalment
**enviar només el fitxer amb la funció**.

## Entrada

Cada cas consisteix en una representació textual d'un arbre binari
d'enters. (Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida conté la representació textual de l'arbre
resultant d'aplicar la funció `tree_of_sizes`. (La sortida també la fa
el programa principal.)

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T21:40:02.119Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
