# Rotació en una cua

Disposem d'una classe `Queue` (fitxer `queue.hh`) que implementa una cua
de valors de tipus `T`. Es tracta d'afegir un mètode **`rotate`** a la
classe `Queue`, que rep un valor $v$, i té el següent comportament.

- Si $v$ no es troba a la cua, aquesta no canvia.

- Si $v$ apareix a la cua, l'element de valor $v$ passa a ser el primer
  de la cua, posant tots els anteriors a aquest al final de la cua, en
  el mateix ordre en què estaven. (Si la cua conté diversos elements de
  valor $v$, es pren el primer.)

Per exemple, si la cua és `x y z a b c d`, i $v$ és `a`, llavors la cua
es converteix en `a b c d x y z`. La capçalera del mètode a implementar
és:

    /**
     * @pre:  Cierto.
     *
     * @post: Si la cola (p. i.) no contiene el valor value, ésta no cambia. 
     *        Si la cola lo contiene, se tomará como referencia la primera 
     *        aparición, y se moverán todos los elementos anteriores a ésta al
     *        final de la cola, en el mismo orden en que estaban.
     */
    void rotate(T value);

(El mètode `rotate` es troba al final del fitxer `queue.hh`.)

Els fitxers públics (icona del gatet) inclouen un `.tar` amb `main.cc`,
`queue.hh` i un `Makefile`. També s'inclou una còpia dels jocs de prova
públics per comoditat. A la carpeta on es descomprimeixin es pot:
compilar amb \"`make`\"; i testar amb \"`make test`\".

El `main.cc` ja s'encarrega de llegir l'entrada, processar les comandes
i produir la sortida. Per entregar, només cal pujar al Jutge el vostre
fitxer `queue.hh` modificat.

## Entrada

L'entrada del programa és una seqüència de comandes com les següents que
s'aniran aplicant sobre una cua de `string`s que està inicialment buida:

    push x     // llegeix un string i el posa a la cua
    pop
    front
    size
    rotate x   // llegeix un string i rota la cua
    print      // mostra la cua a la sortida

Es pot suposar que la seqüència d'entrada serà correcta (p. e., sense
comandes `pop` ni `front` quan la cua està buida).

## Sortida

La sortida és el resultat de les comandes `size`, `front` o `print`.
Consulteu els jocs de prova, ja que són auto-explicatius.

## Observació

L'**eficiència** de l'algorisme és important.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:48:12.212Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
