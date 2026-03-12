# Alçada d'un arbre

L'alçada $H$ d'un arbre $t$ és:

1.  0, si $t$ és buit; i,

2.  1 més que l'alçada màxima dels fills, si $t$ no és buit.

Implementa la funció:

    /**
     * @brief Calcula l'alçada d'un arbre
     *
     * @param t Un arbre.
     * @returns L'alçada de l'arbre, segons la definició anterior.
     */
    int tree_height(Tree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `Tree` (fitxer
`tree.hh`), l'entrada/sortida de `Tree` (`tree-io.hh`) i el programa
principal. També hi ha un `Makefile` i el directori `.vscode` que té la
configuració per compilar i debuggar amb VSCode.

Has d'implementar `tree_height` en un **fitxer `.cc` nou**, compilar
(està preparat per poder compilar i debuggar amb VSCode), i finalment
**enviar només el fitxer amb la funció**.

Els exemples d'entrada/sortida mostren que el `main` que utilitza el
Jutge llegeix una seqüència d'arbres i, per a cadascún, crida la funció
`tree_height`, mostrant les sumes en línies separades. (Per tant, no cal
implementar-lo.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T21:40:52.512Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
