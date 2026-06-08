# Esborrar tots els nodes amb cert valor d'una llista

Afegeix un **mètode públic** a la classe `List<T>` que donat un valor
`x`, esborri de la llista tots els nodes amb aquest valor.

La capçalera és la següent:

    /**
     * @brief Elimina de la llista tots aquells nodes que tenen el valor `x`.
     *
     * @param `x` El valor dels nodes que cal esborrar
     */
    void erase_all(const T& x);

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Els fitxers públics (icona del gatet) contenen:

  ------------ ------------------------------------------------------
  `list.hh`    la classe `List<T>`
  `main.cc`    el programa principal (gestiona l'entrada i sortida)
  `Makefile`   per compilar amb `make` al terminal
  `.vscode`    per compilar i debuggar amb F5
  ------------ ------------------------------------------------------

Per entregar només cal **enviar el fitxer `list.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents cassos seguits. Cada cas té dues línies, a on la
primera conté una llista en el format `{e1, e2, ..., eN}`, i la segona
línia indica quin és el valor `x` a esborrar de la llista.

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
mostra la llista tal qual ha quedat després de fer l'esborrat, un cop
aplicat el mètode `erase_all`.

## Informació del problema

Autoria: Mª Lluïsa Bonet i Pau Fernández

Generació: 2026-01-27T18:50:15.232Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
