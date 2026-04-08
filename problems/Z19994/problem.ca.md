# Mostra carpetes indentades

Un 'Tree\<string\>' ens permet representar una jerarquia de carpetes.
Cada node és una carpeta, i les fulles són o bé fitxers, o carpetes
buides. Per exemple, l'estructura de carpetes del codi públic d'aquest
mateix problema és aquesta:

    public
    |-- .vscode
    |   |-- launch.json
    |   '-- tasks.json
    |-- main.cc
    |-- Makefile
    |-- tree.hh
    '-- tree-io.hh

Implementa la funció amb la següent capçalera:

    /**
     * @brief Mostra un arbre de carpetes i fitxers a la sortida en format 
     * indentat
     *
     * Per exemple:
     * ```
     * problema
     *     codi_font
     *         main.cc
     *         Makefile
     *     jocs_de_prova
     *         publics
     *             sample-1.inp
     *         privats
     *
     * ```
     *
     * Cal notar que la última línia és buida per poder veure la separació 
     * amb altres arbres de carpetes
     *
     * @param t Un arbre que representa una jerarquia de carpetes i fitxers.
     * @param indent_size Número d'espais d'indentació per a cada nivell.
     *
     * @pre `indent_size` > 0.
     * @post S'ha mostrat per la sortida estàndard l'arbre `t` amb un nivell
     * d'indentació d'`indent_size` espais per a cada nivell de profunditat.
     */
    void print_folders(Tree<string> t, int indent_size);

## Observació

Els fitxers públics (icona del gatet) contenen:

  -------------- -----------------------------
  `tree.hh`      la classe `Tree`
  `tree-io.hh`   l'entrada/sortida de `Tree`
  `main.cc`      el programa principal
  -------------- -----------------------------

També hi ha un `Makefile` i el directori `.vscode` que té la
configuració per compilar i depurar amb VSCode.

Cal implementar `print_folders` en un **fitxer `.cc` nou**, compilar, i
finalment **enviar només el fitxer amb la funció**.

## Entrada

Cada cas consisteix en un enter que és el nivell d'intendació desitjat,
seguit d'una representació textual d'un arbre de carpetes. (Aquesta
lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida és el resultat de cridar l'acció
`print_folders` per a cada carpeta. (Això també ho fa el programa
principal.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:37:46.176Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
