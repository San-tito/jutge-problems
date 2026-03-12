# Suma valors d'un arbre binari

Implementa la funció:

    /**
     * @brief Suma els valors d'un arbre binari.
     * 
     * Si un arbre és buit, el seu valor és 0.
     *
     * @param t Un arbre binari.
     *
     * @returns La suma dels valors dels nodes de l'arbre `t`.
     */
     int suma_valors(BinTree<int> t);

El paràmetre `t` és un arbre binari d'enters. La funció retorna la suma
dels valors dels nodes de l'arbre.

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `suma_valors` en un **fitxer `.cc` nou**, compilar
(està preparat per poder compilar i debuggar amb VSCode), i finalment
**enviar només el fitxer amb la funció**.

Els exemples d'entrada/sortida mostren que el `main` que utilitza el
Jutge llegeix una seqüència d'arbres i, per a cadascún, crida la funció
`suma_valors`, mostrant les sumes en línies separades. (Per tant, no cal
implementar-lo.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-01-25T12:57:31.159Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
