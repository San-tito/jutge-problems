# Afegir elements a un Stack només si continua siguent creixent.

En aquest exercici modificarem el mètode `push` de la classe `Stack` per
tal d'assegurar que els seus elements estan sempre ordenats de forma
estríctament creixent des del fons fins el top de la pila. El canvi és
molt senzill: en una crida a `push`, si afegir l'element provocarà que
l'`Stack` deixi de ser estríctament creixent, llavors aquest element
s'ignora i no s'afegeix.

Per exemple, suposeu que l'`Stack` `s` conté els elements $[1,3,6]$ (on
els elements els representem en ordre des del fons fins el top, i en
particular $6$ és l'element del top de la pila), i que es fa una crida
`s.push(4)`. Llavors, `s` no haurà canviat i continuarà contenint
$[1,3,6]$. Una crida `s.push(6)` tampoc provocarà cap canvi. Però una
crida `s.push(7)` provocarà que `s` passi a contenir $[1,3,6,7]$.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` la implementació del mètode `push` i
adaptar-lo convenientment.

Podeu suposar que el tipus genèric `T` de la classe té predefinida la
operació de comparació `<`. Fins i tot, si voleu, poseu suposar que
també teniu `>, <=, >=`, tot i que realment no cal. De fet, es testejarà
la vostra implementació amb el tipus `T=int`. Ara bé, una solució que no
sigui genèrica es considerarà incorrecta i serà invalidada a posteriori,
encara que superi els jocs de proves.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs fa include
de `stack.hh`. Només cal que pugeu `stack.hh` al jutge.

## Entrada

L'entrada del programa comença amb una declaració d'unes quantes piles
d'enters (`s0, s1, ...`), i després té una seqüència de comandes sobre
les piles declarades. Com que ja us oferim el `main.cc`, no cal que us
preocupeu d'implementar la lectura d'aquestes entrades. Només cal que
implementeu la extensió de la classe pila abans esmentada.

Se suposa que la seqüència d'entrada serà correcta (sense pop ni top
sobre pila buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que feu els canvis abans esmentats.

## Sortida

Per a cada comanda d'escriptura sobre la sortida s'escriurà el resultat
corresponent. El `main.cc` que us oferim ja fa això. Només cal que
implementeu la extensió de la classe pila abans esmentada.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta i capaç de superar els
jocs de proves públics i privats. Entenem com a solució lenta una que no
és ràpida, però és correcta i capaç de superar els jocs de proves
públics.

Una solució que no sigui genèrica (per a qualsevol tipus T amb \<, \>,
\<=, \>=) serà invalidada i rebrà nota 0, encara que superi els jocs de
proves.

Una solució que crei memòria innecessàriament rebrà una penalització, i
aquesta penalització serà fins i tot major si a sobre aquesta memòria
innecessària no s'allibera, encara que superi els jocs de proves.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:51:51.376Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
