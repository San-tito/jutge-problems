# $K$ nombres més freqüents

Donada una seqüència de nombres naturals entre 1 i 100 000, cal trobar
els $K$ nombres que apareixen amb més freqüència i mostrar-los ordenats
de major a menor freqüència. Si dos nombres tenen la mateixa freqüència,
cal mostrar primer el més petit.

Per exemple, si la seqüència és:

    3 1 4 1 5 9 2 6 5 3 5 1

i $K = 3$, els nombres més freqüents són: l'1 (apareix 3 cops), el 5
(apareix 3 cops), i el 3 (apareix 2 cops). Com que l'1 i el 5 tenen la
mateixa freqüència, l'1 va primer perquè és més petit.

## Observació

En aquest problema el centre d'interès és l'eficiència. Cal trobar les
estructures de dades adequades per resoldre el problema en el menor
temps possible.

## Entrada

L'entrada consisteix en diversos casos. Cada cas comença amb dos enters
$N$ i $K$, seguits de $N$ nombres naturals entre 1 i 100 000. L'entrada
acaba amb fi de fitxer.

## Sortida

Per a cada cas, cal escriure els $K$ nombres més freqüents, un per
línia, ordenats de major a menor freqüència. Si dos nombres tenen la
mateixa freqüència, el més petit va primer. Cada cas acaba amb una línia
amb `---`.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:36:29.100Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
