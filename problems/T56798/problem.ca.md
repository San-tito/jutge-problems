# Arbre de múltiples

Diem que un arbre binari de nombres naturals $T$ és un arbre \"de
múltiples\" quan, per a tot node que no sigui una fulla, els valors de
les arrels dels subarbres esquerre i dret, $E$ i $D$, si no són buits,
són multiples del valor a l'arrel de $T$. Considerarem que un múltiple
de $n$ és un natural $m = nk$ tal que $k >= 1$. Per exemple, el següent
arbre és de múltiples:

    1
    |- 2
    |  |- 4
    |  '- #
    '- 3
       |- 9
       '- 6
          |- 6
          '- 12

Fes una funció `arbre_de_multiples` amb capçalera:

    /**
     * @brief Determina si un arbre és "de múltiples"
     *
     * @param  t  Un arbre binari de naturals
     *
     * @returns  `true` si `t` és un arbre de múltiples
     *           `false` altrament.
     */
    bool arbre_de_multiples(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) contenen:

  --------------------- -------------------------------------------------------
  `main.cc`             el programa principal, amb la entrada/sortida ja feta
  `bintree.hh`          la classe `BinTree<T>`
  `bintree-io.hh`       l'entrada/sortida de `BinTree<T>`
  `bintree-inline.hh`   l'entrada/sortida \"inline\" de `BinTree<T>`
  `Makefile`            per compilar amb `make`
  `.vscode`             per compilar i debuggar amb VSCode
  --------------------- -------------------------------------------------------

Cal implementar `arbre_de_multiples` en un **fitxer `.cc` nou**,
compilar, i finalment **enviar només el fitxer amb la funció** i
funcions auxiliars si són necessàries.

## Entrada

*(Això ja ho fa el programa principal donat)*. L'entrada comença amb
\"`visual`\" o \"`inline`\" per indicar el format dels arbres d'entrada.
Després ve una seqüència d'arbres en el format indicat.

## Sortida

*(Això també ho fa el programa principal donat)*. La sortida són els
`string`s resultants de cridar la funció `arbre_de_multiples`, un
resultat per línia.

## Informació del problema

Autoria: Mª Lluïsa Bonet i Pau Fernández

Generació: 2026-03-24T13:59:08.957Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
