# Arbre binari amb els valors dels nodes interns iguals

Donat un arbre binari, les seves *fulles* són els subarbres que tenen
les dues branques `left` i `right` buides. Els *nodes interns* són tots
aquells nodes que no són fulles.

Implementa la funció `tree_internal_nodes_equal`, que determina si, en
un arbre binari d'enters, els valors dels nodes interns són tots iguals:

    /**
     * @brief Determina si tots els valors dels nodes interns són iguals
     * 
     * @param  t  Un arbre binari d'enters
     * @returns  `true` si tots els valors dels nodes interns són iguals, 
     *           `false` altrament.
     */
    bool tree_internal_nodes_equal(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) contenen:

  --------------------- ----------------------------------------------------
  `main.cc`             el programa principal, amb la entrada/sortida feta
  `bintree.hh`          la classe `BinTree<T>`
  `bintree-io.hh`       l'entrada/sortida de `BinTree<T>`
  `bintree-inline.hh`   l'entrada/sortida \"inline\" de `BinTree<T>`
  `Makefile`            per compilar amb `make` còmodament
  `.vscode`             carpeta per compilar i debuggar amb VSCode
  --------------------- ----------------------------------------------------

Cal implementar `tree_internal_nodes_equal` en un **fitxer `.cc` nou**,
compilar, i finalment **enviar només el fitxer amb la funció**.

## Entrada

L'entrada comença amb \"visual\" o \"inline\" per indicar el format dels
arbres d'entrada. Després ve una seqüència d'arbres en el format
indicat. (D'això s'encarrega el programa principal).

## Sortida

Per a cada arbre, la sortida és `true` si tots els valors dels nodes
interns són iguals, o `false` altrament. (D'això s'encarrega el programa
principal.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-04-02T21:43:19.481Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
