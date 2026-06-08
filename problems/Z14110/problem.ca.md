# Partir una cua en dos

Afegeix un **mètode públic** a la classe `Queue<T>` que donat un valor
`x`, de tipus `T`, trobi el node de la cua amb aquest valor i divideixi
la cua en dos parts per la posició d'`x`. Més concretament, la partició
de la cua $q$ dóna lloc a la pròpia cua $q$ modificada, i una nova cua
$p$, de manera que, un cop feta la partició, $q$ contindrà la primera
meitat, és a dir, els valors des del principi fins la posició just abans
de `x`; i $p$ rebrà la segona meitat, desde `x` fins al final. Si `x`
apareix més d'una vegada a la cua, cal prendre com a punt de tall la
posició de la primera aparició de `x`. Si `x` no apareix, no cal fer
res.

La capçalera és la següent:

    /**
     * @brief Parteix la cua en dos en el punt on es troba el 
     *        primer node amb valor `x`. La cua original manté els
     *        valors des del principi fins a `x` (no inclòs), i `p`
     *        rebrà els valors desde `x` fins al final. Si `x` no 
     *        apareix a la cua, no es modifica la cua i tampoc `p`.
     *
     * @pre   `p` es una altra cua, buida.
     *
     * @post  Si la cua (p.i.) no conté el valor `x` la cua no ha canviat.
     *        Si la cua conté `x`, s'han traspassat a `p` els elements a partir
     *        del primer `x` trobat.
     */
    void split(const T& val, Queue<T>& p);

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Els fitxers públics (icona del gatet) contenen:

  ------------ ------------------------------------------------------
  `queue.hh`   la classe `Queue<T>`
  `main.cc`    el programa principal (gestiona l'entrada i sortida)
  `Makefile`   per compilar amb `make` al terminal
  `.vscode`    per compilar i debuggar amb F5
  ------------ ------------------------------------------------------

Per entregar només cal **enviar el fitxer `queue.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents cassos seguits. Cada cas té dues línies, a on la
primera conté una cua en el format `{e1, e2, ..., eN}` (a on l'element
de més a l'esquerra és el *front* i el de més a la dreta el *back*), i
la segona línia indica quin és el valor `x` a esborrar de la cua. Els
cassos se separen per una línia buida.

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
mostra les dues cues `q` i `p`, cada una en una línia, un cop cridat el
mètode `split` amb la cua d'entrada. També se separen els resultats dels
diferents cassos amb una línia buida.

## Informació del problema

Autoria: Mª Lluïsa Bonet i Pau Fernández

Generació: 2026-01-27T18:58:53.073Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
