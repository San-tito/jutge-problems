# Avaluar expressions binàries (1)

En aquest exercici considerarem arbres que representen expressions
binàries sobre els operadors `+`, `-`, `*`, i sobre operands naturals.
Per exemple, el següent arbre representa l'expressió
$5 - (3 + (4 \times 2))$.

    -
    |-- 5
    '-- +
        |-- 3
        '-- *
            |-- 4
            '-- 2

Tots els nodes de l'arbre que són fulles contenen un valor natural, i
els nodes amb fills sempre en tenen 2 i el seu valor és sempre un
operador. No hi ha subarbres buits.

Implementeu, doncs, la funció següent:

    /**
     * @brief Avalua un arbre no buit que representa una expressió binària.
     *
     * L'expressió binària és sobre els naturals i els operadors +, -, i *. 
     * Les operacions de l'arbre no produeixen errors de sobreeiximent 
     * (_overflow_).
     *
     * @pre L'arbre és no buit i l'expressió binària és correcta.
     *
     * @param t Arbre que representa l'expressió binària.
     * @return Resultat de l'avaluació de l'expressió.
     */
    int evaluate(BinTree<string> t);

## Observació

Els fitxers públics (icona del gatet) contenen:

  ----------------------- --------------------------------------------------------
  `bintree.hh`            la classe `BinTree`
  `bintree-io.hh`         l'entrada/sortida de `BinTree`
  `util.hh` i `util.cc`   un mòdul d'utilitats amb `is_number` i `string_to_int`
  `eval.hh`               la declaració de la funció a implementar
  `main.cc`               el programa principal
  ----------------------- --------------------------------------------------------

També hi ha un `Makefile` i el directori `.vscode` que té la
configuració per compilar i depurar amb VSCode.

Cal implementar `evaluate` en un **fitxer `.cc` nou**, compilar, i
finalment **enviar només el fitxer amb la funció**.

## Entrada

Cada cas consisteix en una representació textual d'una expressió binaria
del tipus definit. (Aquesta lectura ja la fa el programa principal.)

## Sortida

Per a cada cas, la sortida és el resultat d'avaluar l'expressió, cada
resultat en una línia separada. (Això també ho fa el programa
principal.)

## Informació del problema

Autoria: Guillem Godoy i Pau Fernández

Generació: 2026-01-25T13:00:09.134Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
