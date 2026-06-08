# Comptar valors en un arbre general

Afegeix un **mètode públic** a la classe `ArbreGen<T>` que donat un
valor `x`, faci el recompte de quants nodes de l'arbre tenen com a valor
`x`.

La capçalera és la següent:

    /**
     * @brief  Compta quants nodes de l'arbre tenen el valor `x`
     *
     * @param  `x`  El valor a cercar
     * @returns     El nombre d'ocurrències de `x` a l'arbre
     */
    int count_equal_to(const T& x) const;

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats*, de la classe per resoldre el problema, accediu
sempre als membres privats.

Recordeu que un arbre general no té fills buits.

Els fitxers públics (icona del gatet) contenen:

  ---------------- ------------------------------------------------------
  `ArbreG.hh`      la classe `ArbreGen<T>`
  `ArbreG-io.hh`   entrada/sortida per `ArbreGen<T>`
  `main.cc`        el programa principal (gestiona l'entrada i sortida)
  `Makefile`       per compilar amb `make` al terminal
  `.vscode`        per compilar i debuggar amb F5
  ---------------- ------------------------------------------------------

Per entregar només cal **enviar el fitxer `ArbreG.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents cassos seguits, a on cada cas té una línia amb
\"comptar `x`\" a on s'indica el valor que cal comptar en l'arbre, i tot
seguit ve un arbre general en el format gràfic típic de la classe
`Tree<T>` de PRO2. Els diferents cassos estan separats per una línia
buida.

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
és el número d'aparicions del valor `x` en cada cas (resultat d'haver
cridat `count_equal_to` amb cada arbre d'entrada), un per línia.

## Informació del problema

Autoria: Mª Lluïsa Bonet i Pau Fernández

Generació: 2026-01-27T18:48:33.078Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
