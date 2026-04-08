# Arbre binari de graus de desequilibri

Considereu un arbre binari `t` de qualsevol tipus. Donat qualsevol
subarbre `s` no buit de `t`, diem que el *grau de desequilibri* de `s`
és la diferència entre l'alçada del seu fill esquerre i la del seu fill
dret (pot ser positiva, zero o negativa).

Diem que l'*arbre de graus de desequilibri* de `t` és un altre arbre
binari `D` amb la mateixa forma que `t`, on el valor de cada node $n$ és
el grau de desequilibri del subarbre de `t` amb l'arrel a $n$.

Un exemple, amb l'arbre `t` a l'esquerra, i l'arbre `D` de graus de
desequilibri a la dreta:

    t = 7                  D = 2
        |-- 1                  |-- -1
        |   |-- #              |   |-- #
        |   '-- 8              |   '-- 0
        '-- 6                  '-- -2
            |-- 3                  |-- -2
            |   |-- #              |   |-- #
            |   '-- 5              |   '-- 0
            |       |-- 2          |       |-- 0
            |       '-- 4          |       '-- 0
            '-- 10                 '-- 0

Implementeu la funció:

    /**
     * @brief Retorna l'arbre de graus de desequilibri de `t`.
     *
     * @param t L'arbre binari original.
     * @returns L'arbre de graus de desequilibri de `t`.
     */
    BinTree<int> bintree_of_height_diffs(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `bintree_of_height_diffs` en un **fitxer `.cc` nou**,
compilar (està preparat per poder compilar i debuggar amb VSCode), i
finalment **enviar només el fitxer amb la funció**.

## Entrada

Cada cas consisteix en una representació textual d'un arbre d'enters.
(Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida conté la representació textual de l'arbre
resultant d'aplicar la funció `bintree_of_height_diffs`. (La sortida
també la fa el programa principal.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:39:03.282Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
