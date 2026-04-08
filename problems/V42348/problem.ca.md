# Ok Cupid

El sistema online "`okcupid.com`" de cites a cegues té una base de dades
a on cada persona registrada té associat un número enter $t$. Aquest
número compleix $-10^6 \leq t \leq 10^6$ i permet classificar la persona
a grans trets. El número de cada persona està dissenyat de tal manera
que quan dues persones són compatibles la suma dels seus números $t$ és
0.

Fes un programa que llegeixi les dades dels usuaris de `okcupid.com` i
generi una llista de les persones compatibles amb cada usuari.

## Entrada

Una seqüència de parelles nom-número, possiblement buida. El nom és un
sol `string` (el nom d'usuari, que conté lletres i dígits) i el número
és l'enter $t$ associat.

## Sortida

La sortida consisteix en una línia per a cada usuari, per ordre
alfabètic. La línia per a l'usuari $A$ comença amb el seu nom i segueix
amb una seqüència dels usuaris compatibles amb $A$. És clar que entre
els usuaris compatibles amb $A$ no pot haver-hi $A$ mateix. A més, entre
cada parell de noms només hi ha un espai.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-18T09:42:13.132Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
