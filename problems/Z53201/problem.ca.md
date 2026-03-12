# Cerca un valor en un arbre binari

Implementa la funció:

    /**
     * @brief Cerca un valor en un arbre binari.
     * 
     * @param t Arbre binari.
     * @param x Valor a cercar.
     *
     * @returns `true` si `x` es troba en algun node de l'arbre `t`,
     *          `false` en cas contrari.
     */
    bool cerca_valor(BinTree<int> t, int x);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `cerca_valor` en un **fitxer `.cc` nou**, compilar
(està preparat per poder compilar i debuggar amb VSCode), i finalment
**enviar només el fitxer amb la funció**.

Els exemples d'entrada/sortida mostren que el `main` que utilitza el
Jutge llegeix un arbre i tot seguit una seqüència d'enters i, per a
cadascún, crida la funció `cerca_valor`, mostrant el resultat de la
cerca. (Per tant, no cal implementar-lo.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T21:40:38.579Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
