# Reemplaça els nodes d'un arbre binari a profunditat parell per la suma per sota

Implementeu una funció **RECURSIVA** que, donat un arbre binari
d'enters, retorna un nou arbre amb la mateixa estructura, i a on cada
posició a profunditat parell conté la suma de nodes del subarbre que
penja d'aquella mateixa posició a l'arbre inicial, i a cada posició a
profunditat senar hi ha exactament el mateix valor que es troba en
aquella posició a l'arbre inicial.

Sobreentenem que l'arrel de l'arbre està a profunditat 0, els nodes
directes des de l'arrel són a profunditat 1, els nodes a distància dos
de l'arrel són a profunditat 2, i així successivament. Aquesta és la
capcelera:

    /**
     * @brief Retorna l'arbre binari `t` reemplaçant els valors dels nodes
     * a profunditat parell per la suma per sota
     *
     * @param t L'arbre binari original.
     *
     * @returns Un arbre binari R amb la mateixa estructura que t.
     * Per a cada posició p de t i R, si p és a profunditat senar,
     * llavors t i R tenen el mateix valor a posició p.
     * En canvi, si p es a profunditat parell, llavors el valor de R a posició
     * p és la suma de tots els valors que es troben a t a posició p i per sota.
     */
    BinTree<int> sum_below_at_even_depth(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh` i
`bintree-inline.hh`) i el programa principal. També hi ha un `Makefile`
i el directori `.vscode` que té la configuració per compilar i debuggar
amb VSCode.

Has d'implementar `sum_below_at_even_depth` en un **fitxer `.cc` nou**,
compilar (està preparat per poder compilar i debuggar amb VSCode), i
finalment **enviar només el fitxer amb la funció**.

La vostra funció i subfuncions que creeu han de treballar només amb
arbres. Molt possiblement, una solució recursiva directa serà lenta, i
necessitareu crear alguna funció recursiva auxiliar per a produïr una
solució més eficient capaç de superar tots els jocs de proves.

## Entrada

Cada cas consisteix en una representació textual d'un arbre binari
d'enters. (Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida conté la representació textual de l'arbre
resultant d'aplicar la funció `sum_below_at_even_depth`. (La sortida
també la fa el programa principal.)

## Informació del problema

Autoria: PRO2

Generació: 2026-03-24T13:59:32.139Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
