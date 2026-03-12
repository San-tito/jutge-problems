# Alçada d'un arbre binari

L'alçada d'un arbre binari $t$ és:

1.  si $t$ és buit: 0;

2.  si $t$ no és buit: 1 unitat més que l'alçada màxima de les branques
    esquerra i dreta.

Implementa la funció:

    /**
     * @brief Calcula l'alçada d'un arbre binari
     *
     * @param t Un arbre binari.
     * @returns L'alçada de l'arbre, segons la definició anterior.
     */
    int height(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `height` en un **fitxer `.cc` nou**, compilar (està
preparat per poder compilar i debuggar amb VSCode), i finalment **enviar
només el fitxer amb la funció**.

Els exemples d'entrada/sortida mostren que el `main` que utilitza el
Jutge llegeix una seqüència d'arbres i, per a cadascún, crida la funció
`height`, mostrant les sumes en línies separades. (Per tant, no cal
implementar-lo.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-04T08:27:09.395Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
