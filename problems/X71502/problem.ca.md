# Agafar elements del cim d'un altre Stack mantenint l'ordre

En aquest exercici estendrem la classe `Stack` afegint un nou mètode
anomenat `take`. Aquest mètode té, com a paràmetres, un altre `Stack`, i
un natural `k`, i la seva crida té com a efecte que movem els `k`
elements del top de l'altre `Stack` al top del paràmetre implícit, i en
el mateix ordre.

Més específicament, suposem que un `Stack` `t` té contingut
$[a_1,a_2,\ldots,a_n]$ (on els elements els representem en ordre des del
fons fins el top, i en particular $a_n$ és l'element del top), i que un
altre `Stack` `s` té contingut $[b_1,b_2,\ldots,b_m]$. Llavors, una
crida `t.take(s, k)` té com a efecte que `t` passi a contenir
$[a_1,\ldots,a_n,b_{m-k+1},\ldots,b_m]$ i `s` passi a contenir
$[b_1,\ldots,b_{m-k}]$.

En el cas particular que `k` sigui més gran que `m`, llavors es mouen
tots els elements de `s` a `t`. És a dir, `t` passa a contenir
$[a_1,\ldots,a_n,b_1,\ldots,b_m]$, i `s` passa a contenir $[]$.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` les següents línies:

      // Pre:  Sigui [a1,...,an] el contingut del paràmetre implícit (des del fons fins al cim).
      //       Sigui [b1,...,bm] el contingut de s.
      //       k>=0
      // Post: En el cas en que k>=m, aquest és el resultat:
      //          [a1,...,an,b1,...,bm] és el contingut del paràmetre implícit.
      //          [] és el contingut de s.
      //       En canvi, en el cas k<m, aquest és el resultat:
      //          [a1,...,an,b{m-k+1},...,bm] és el contingut del paràmetre implícit.
      //          [b1,...,b{m-k}] és el contingut de s.
      // Descomenteu les següents dues linies i implementeu el mètode:
      // void take(Stack<T> &s, int k) {
      // ...
      // }

Descomenteu les linies que s'indiquen i implementeu el mètode.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`stack.hh`. Només cal que pugeu `stack.hh` al jutge.

**Observació:** En aquest exercici es prefereix una solució basada en
manegar punters abans que una solució basada en cridar a mètodes
primitius de la pròpia classe. De fet, manegar punters serà més ràpid, i
fer-ho d'una altra forma possiblement provocarà que no supereu els jocs
de proves privats.

## Entrada

L'entrada del programa comença amb una declaració d'unes quantes piles
d'strings (`s0, s1, ...`), i després té una seqüència de comandes sobre
les piles declarades. Com que ja us oferim el `main.cc`, no cal que us
preocupeu d'implementar la lectura d'aquestes entrades. Només cal que
implementeu la extensió de la classe pila abans esmentada.

Se suposa que la seqüència d'entrada serà correcta (sense pop ni top
sobre pila buida), ni farà coses extranyes com cridar a take de la
pròpia pila (així que no cal que tracteu aquest cas).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
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

Generació: 2026-01-27T18:55:12.636Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
