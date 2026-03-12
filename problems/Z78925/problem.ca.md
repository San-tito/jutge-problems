# Avaluar expressions binàries amb variables

En aquest exercici considerarem arbres que representen expressions sobre
els operadors `+`, `-`, `*`, i sobre operands naturals i variables (una
variable serà una seqüència no buida de lletres minúscules).

Per exemple, el següent arbre representa l'expressió `(3 + x * 2) - y`

    -
    |-- +
    |   |-- 3
    |   '-- *
    |       |-- x
    |       '-- 2
    '-- y

Per avaluar una expressió com aquesta, necessitarem un *diccionari* que
relaciona cada variable amb el valor que conté (un `map<string, int>`).

Implementeu, doncs, la funció següent:

    /**
     * @brief Avalua una expressió binària amb variables
     *
     * L'expressió és sobre els naturals i els operadors `+`, `-`, i `*`.
     * A més, hi ha un diccionari `env` que conté parelles amb cada 
     * variable i el seu valor per a un conjunt de variables que poden 
     * aparèixer a l'arbre.
     *
     * @param t Arbre amb l'expressió binària.
     * @param env Diccionari amb parelles (nom de variable, valor). Aquest 
     *            diccionari no es pot modificar.
     *
     * @pre `t` és no buit. Totes les variables que apareixen a `t`
     *       estan definides a `env`. Les operacions expressades per
     *       l'arbre no produeixen errors d'_overflow_
     **/
    int tree_eval_env(BinTree<string> t, const map<string, int>& env);

## Observació

Els fitxers públics (icona del gatet) contenen:

  ----------------------- --------------------------------------------------------------------
  `main.cc`               el programa principal
  `bintree.hh`            la classe `BinTree`
  `bintree-io.hh`         l'entrada/sortida de `BinTree`
  `util.hh` i `util.cc`   un mòdul d'utilitats: `is_number`, `is_var_name` i `string_to_int`
  ----------------------- --------------------------------------------------------------------

També hi ha un `Makefile` i el directori `.vscode` que té la
configuració per compilar i depurar amb VSCode.

Cal implementar `tree_eval_env` en un **fitxer `.cc` nou**, compilar, i
finalment **enviar només el fitxer amb la funció**.

## Entrada

L'entrada consisteix en una seqüència de parelles d'arbres i
assignacions de variables. Cada grup d'assignacions de variables
simplement és una línea amb parelles amb el nom d'una variable i el seu
valor, separat per espais. (D'això se n'encarrega el programa principal
ja disponible als fitxer públics.)

## Sortida

Per a cada cas, la sortida és el resultat d'avaluar l'expressió, cada
resultat en una línia separada. (Això també ho fa el programa
principal.)

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T21:40:45.341Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
