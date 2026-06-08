# Inserció ordenada en pila

Disposem d'una classe `Stack` amb elements de tipus `T` (fitxer
`stack.hh`). Implementeu un mètode d'aquesta classe que insereixi un nou
element amb cert valor (paràmetre explícit) a la pila (paràmetre
implícit). La pila està ordenada, i l'element que s'introdueix *manté la
pila ordenada*.

    /**
     * @pre:  La pila (parámetro implícito) está ordenada
     *        de menor (bottom) a mayor (top).
     *
     * @post: Se ha introducido en la pila p.i. de forma ordenada
     *        un nodo con contenido 'value'.
     */
    void push_sort(T value);

(La declaració del mètode `push_sort` està al final del fitxer
`stack.hh`.)

Els fitxers públics (icona del gatet) inclouen un `.tar` amb `main.cc`,
`stack.hh` i un `Makefile`. També s'inclou una còpia dels jocs de prova
públics per comoditat. A la carpeta on es descomprimeixin es pot:
compilar amb \"`make`\"; i testar amb \"`make test`\".

El `main.cc` ja s'encarrega de llegir l'entrada, processar les comandes
i produir la sortida. Per entregar, només cal pujar al Jutge el vostre
fitxer `stack.hh` modificat.

## Observació

En implementar `push_sort` no es poden cridar altres operacions de la
classe, i tot s'ha d'implementar amb punters.

## Entrada

El programa principal té un bucle on es van llegint comandes, una per
línia, i per a cadascuna es realitza una operació de la pila. El nom de
les comandes es correspon amb el dels mètodes de la pila. Consulteu els
jocs de prova, ja que són auto-explicatius. Si una línia està buida o té
un signe `#` al principi, s'ignora i es passa a la següent.

## Sortida

La sortida és l'estat de la pila cada vegada que l'entrada conté una
comanda `size` o `print`. Consulteu els jocs de prova, ja que són
auto-explicatius.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:49:10.429Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
