# Nombres sense prefixos prohibits

Feu un programa que usi *backtracking* per escriure tots els nombres de
$n$ dígits tals que cap dels seus prefixos (ell inclòs) sigui múltiple
de cap de $m$ divisors prohibits donats $d_1, \dots, d_m$.

Per exemple, si $n = 3$, $m = 6$ i els divisors prohibits són 2, 3, 5,
7, 11 i 19, llavors 137 està permès, perquè cap dels seus tres prefixos
1, 13 i 137 és múltiple de cap $d_i$. En canvi, 433 no està permès,
perquè dels seus tres prefixos 4, 43 i 433, n'hi ha algun que és
múltiple d'algun $d_i$ (4 és múltiple de 2).

## Entrada

L'entrada consisteix en diversos casos. Cada cas comença amb $n$ i $m$,
seguits de $m$ enters diferents entre 2 i $1000$. Podeu suposar que
$1 \le n \le 9$ i $1 \le m \le 15$.

## Sortida

Per a cada cas, escriviu tots els nombres que tenen exactament $n$
dígits i no tenen prefixos prohibits, un per línia i de petit a gran.
Escriviu una línia amb 10 guions al final de cada cas.

## Informació del problema

Autoria: Salvador Roura

Generació: 2026-01-25T13:25:02.538Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
