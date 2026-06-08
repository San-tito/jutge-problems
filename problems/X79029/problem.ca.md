# Agafar elements del front d'un altre Queue en el mateix ordre

En aquest exercici estendrem la classe `Queue` afegint un nou mètode
anomenat `take`. Aquest mètode té, com a paràmetres, un altre `Queue`, i
un natural `k`, i la seva crida té com a efecte que movem els `k`
elements del front de l'altre `Queue` al final del paràmetre implícit, i
en el mateix ordre.

Més específicament, suposem que un `Queue` `t` té contingut
$[a_1,a_2,\ldots,a_n]$ (on els elements els representem en ordre des del
front fins el final, i en particular $a_1$ és l'element del front), i
que un altre `Queue` `q` té contingut $[b_1,b_2,\ldots,b_m]$. Llavors,
una crida `t.take(q, k)` té com a efecte que `t` passi a contenir
$[a_1,\ldots,a_n,b_1,\dots,b_k]$ i `q` passi a contenir
$[b_{k+1},\ldots,b_m]$.

Per exemple, si `t` conté $[3,1,5]$ i `q` conté $[9,4,6,8,2]$, llavors
la crida `t.take(q, 3)` té com a efecte que `t` passi a contenir
$[3,1,5,9,4,6]$, i que $q$ passi a contenir $[8,2]$.

En el cas particular que `k` sigui més gran que `m`, llavors es mouen
tots els elements de `s` a `t`. És a dir, `t` passa a contenir
$[a_1,\ldots,a_n,b_1,\ldots,b_m]$, i `q` passa a contenir $[]$.

Per exemple, si `t` conté $[3,1,5]$ i `q` conté $[9,4,6,8,2]$, llavors
la crida `t.take(s, 10)` té com a efecte que `t` passi a contenir
$[3,1,5,9,4,6,8,2]$, i que $q$ passi a contenir $[]$.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`queue.hh`, a on hi ha una implementació de la classe genèrica `Queue`.
Haureu de buscar dins `queue.hh` les següents línies:

      // Pre:  Sigui [a1,...,an] el contingut del paràmetre implícit (des del front fins al final).
      //       Sigui [b1,...,bm] el contingut de q.
      //       k>=0
      // Post: En el cas en que k>=m, aquest és el resultat:
      //          [a1,...,an,b1,...,bm] és el contingut del paràmetre implícit.
      //          [] és el contingut de q.
      //       En canvi, en el cas k<m, aquest és el resultat:
      //          [a1,...,an,b1,...,bk] és el contingut del paràmetre implícit.
      //          [b{k+1},...,bm] és el contingut de q.
      // Descomenteu les següents dues linies i implementeu el mètode:
      // void take(Queue<T> &q, int k) {
      // ...
      // }

Descomenteu les linies que s'indiquen i implementeu el mètode.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`queue.hh`. Només cal que pugeu `queue.hh` al jutge.

**Observació:** En aquest exercici es prefereix una solució basada en
manegar punters abans que una solució basada en cridar a mètodes
primitius de la pròpia classe (`push, pop, front`). De fet, manegar
punters serà més ràpid, i fer-ho d'una altra forma possiblement
provocarà que no supereu els jocs de proves privats, quedant-vos així
amb la meitat de la nota.

## Entrada

L'entrada del programa comença amb una declaració d'unes quantes cues
d'strings (`q0, q1, ...`), i després té una seqüència de comandes sobre
les cues declarades. Com que ja us oferim el `main.cc`, no cal que us
preocupeu d'implementar la lectura d'aquestes entrades. Només cal que
implementeu la extensió de la classe cua abans esmentada.

Se suposa que la seqüència d'entrada serà correcta (sense pop ni front
sobre cua buida), ni farà coses extranyes com cridar a take de la pròpia
cua (així que no cal que tracteu aquest cas).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe cua.
Només cal que feu els canvis abans esmentats.

## Sortida

Per a cada comanda d'escriptura sobre la sortida s'escriurà el resultat
corresponent. El `main.cc` que us oferim ja fa això. Només cal que
implementeu la extensió de la classe cua abans esmentada.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta i capaç de superar els
jocs de proves públics i privats. Entenem com a solució lenta una que no
és ràpida, però és correcta i capaç de superar els jocs de proves
públics. Per exemple, una solució que superi tots els jocs de proves
però que manegui incorrectament la memòria serà invalidada i tindrà nota
0.

Una solució basada en cridar a mètodes primitius de la pròpia classe
possiblement serà lenta i, en cas que no ho sigui, pot tenir una certa
penalització en la nota.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:55:48.184Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
