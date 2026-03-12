# Ordenar un arbre binari per sumes de subarbres

Implementeu una funció *recursiva* que, donat un arbre binari d'enters,
el retorna ordenat per sumes de subarbres. Ordenar l'arbre implica
intercanviar els fills de cada node no buit en el cas en que la suma
dels valors dels nodes del fill dret d'aquell node sigui menor estricte
que la suma dels valors dels nodes del fill esquerre d'aquell node.
Aquesta és la capçalera:

    /**
     * @brief Retorna l'arbre `t` ordenat per sumes.
     *
     * @param t L'arbre binari original.
     *
     * @returns L'arbre resultat d'ordenar `t` per sumes.
     */
    BinTree<int> sort_tree(BinTree<int> t);

## Observació

Els fitxers públics (icona del gatet) són: la classe `BinTree` (fitxer
`bintree.hh`), l'entrada/sortida de `BinTree` (`bintree-io.hh`) i el
programa principal. També hi ha un `Makefile` i el directori `.vscode`
que té la configuració per compilar i debuggar amb VSCode.

Has d'implementar `sort_tree` en un **fitxer `.cc` nou**, compilar (està
preparat per poder compilar i debuggar amb VSCode), i finalment **enviar
només el fitxer amb la funció**.

La vostra funció i subfuncions que creeu han de treballar només amb
arbres. Molt possiblement, una solució recursiva directa serà lenta, i
necessitareu crear alguna funció recursiva auxiliar per a produïr una
solució més eficient capaç de superar tots els jocs de proves.

## Entrada

Cada cas consisteix en una representació textual d'un arbre binari
d'enters. (Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida conté la representació textual de l'arbre
resultant d'aplicar la funció `sort_tree`. (La sortida també la fa el
programa principal.)

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T13:21:04.014Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
