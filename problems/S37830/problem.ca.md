# Concatena els valors d'un arbre binari de strings

Si recorrem un `BinTree<string>` com el següent

    :root:
    |-- left
    '-- right

en **inordre**, obtenim la seqüència `left`, `:root:`, `right`. Si
concatenem aquests `string`s el resultat seria: `left:root:right`.

Implementa la funció `tree_join`, que fa aquesta operació en un
`BinTree<string>` qualsevol:

    /**
     * @brief Concatena els valors d'un arbre binari de `string`s en inordre
     * 
     * @param t Un arbre binari de `string`s
     * @returns El resultat de la concatenació
     */
    string tree_join(BinTree<string> t);

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

Cal implementar `tree_join` en un **fitxer `.cc` nou**, compilar, i
finalment **enviar només el fitxer amb la funció**.

## Entrada

L'entrada comença amb \"visual\" o \"inline\" per indicar el format dels
arbres d'entrada. Després ve una seqüència d'arbres en el format
indicat. (D'això s'encarrega el programa principal).

## Sortida

La sortida són els `string`s resultants de cridar la funció `tree_join`,
un resultat per línia. (D'això també s'encarrega el programa principal.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:37:19.300Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
