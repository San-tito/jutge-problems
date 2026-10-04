# I2P02. El cavall menja-flors

Un cavall, dins d'un prat rectangular, vol saber a quantes flors pot
arribar, i quina és la distància mitjana a aquestes flors des de la seva
posició inicial. El cavall només pot fer els salts típics dels escacs
(és a dir, modificar en dues unitats una component, i en una unitat
l'altra component), i no pot sortir mai del prat ni trepitjar basses
d'aigua.

Feu un programa que llegeixi la descripció d'un prat, i que calculi i
escrigui el nombre de flors a les quals pot arribar el cavall, i la
distància mitjana a aquestes flors, mesurada per a cada flor com el
nombre mínim de salts d'escacs des de la posició inicial del cavall.

## Entrada

L'entrada comença amb el nombre de files $n$ i de columnes $m$ del mapa.
Segueixen $n$ files amb $m$ caràcters cadascuna. Un punt indica una
posició buida, una `’a’` indica una bassa d'aigua, una `’F’` indica una
flor, i una `’C’` indica la posició inicial del cavall. Podeu suposar
que hi haurà exactament una `’C’` dins del mapa.

## Sortida

Escriviu el nombre de flors accessibles des de la posició inicial del
cavall, així com la distància mitjana, amb quatre decimals. Si no es pot
arribar a cap flor, cal indicar-ho. Seguiu el format dels exemples.

## Observació

Escriviu aquestes dues línies al principi del vostre \@main()@:

        cout.setf(ios::fixed);
        cout.precision(4);

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T10:39:33.178Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
