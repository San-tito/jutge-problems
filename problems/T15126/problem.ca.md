# Determinar si un arbre binari està ben barrejat

Un arbre d'elements de tipus `T` està ben barrejat si: és buit; o és una
fulla; o bé els valors de l'arrel, l'arrel del fill esquerre i l'arrel
del fill dret, són tots diferents entre sí. A més, els subarbres fills
han de ser, també, arbres ben barrejats.

Implementa un *mètode públic* de la classe `Arbre<T>` que determini si
un arbre està ben barrejat. La declaració és la següent:

    /**
     * @brief Determina si un arbre està ben barrejat.
     *
     * Un arbre està ben barrejat si és buit, és una fulla, o bé els 
     * valors d'arrel, fill esquerre i fill dret són tots diferents 
     * entre sí. Alhora, els fills han de ser també arbres ben barrejats.
     *
     * @returns `true` si l'arbre està ben barrejat, `false` altrament.
     */
    bool well_mixed() const;

## Observació

Per poder avaluar l'ús de punters, *no feu servir altres mètodes, ni
públics ni privats,* de la classe per resoldre el problema, accediu
sempre als membres privats directament.

Els fitxers públics (icona del gatet) contenen:

  ------------ ------------------------------------------------------
  `Arbre.hh`   la classe `Arbre<T>`
  `main.cc`    el programa principal (gestiona l'entrada i sortida)
  `Makefile`   per compilar amb `make` al terminal
  `.vscode`    per compilar i debuggar amb F5
  ------------ ------------------------------------------------------

Per entregar només cal **enviar el fitxer `Arbre.hh` modificat.**

## Entrada

*De l'entrada se n'encarrega ja el programa principal.* L'entrada està
formada per diferents cassos seguits. Cada arbre d'entrada és una línia
de números o `#`s en preordre (un `#` indica un arbre buit).

## Sortida

*De la sortida també se n'encarrega el programa principal.* La sortida
mostra \"si\" quan l'arbre no està ben barrejat o \"no\" si no ho està,
cada resultat en una línia separada.

## Informació del problema

Autoria: Mª Lluïsa Bonet i Pau Fernández

Generació: 2026-01-27T18:48:51.933Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
