# Freqüències de paraules amb esborrat

Donada una seqüència d'entrada que consisteix en un codi i una paraula,
si el codi és `a` cal incrementar la freqüència de la paraula que
segueix, si el codi és `e` cal decrementar la freqüència de la paraula
que segueix, i si el codi és `f` cal escriure a la sortida estàndard la
freqüència de la paraula que segueix (en la part de la seqüència llegida
fins aleshores). Si la paraula no existeix, la freqüència és, òbviament,
zero.

Feu servir un *diccionari* per a implementar aquest problema. Per a cada
opció, només s'hauria de fer una crida a una única operació primitiva de
cost logarísmic (normalment *find*, *lower_bound* o les versions sense
iterador de *insert* i *erase*). La resta haurien de ser de cost
constant (normalment accés a elements, insercions o esborrats, tot amb
iteradors).

## Entrada

L'entrada és una llista de parells *(codi, paraula)*. El codi pot ser
`a`, `e`, o `f`. En el primer cas, voldrà dir que cal incrementar la
freqüència de la paraula que segueix. En el segon cas, voldrà dir que
cal decrementar la freqüència de la paraula que segueix. En el tercer
cas, el que caldrà fer és treure per pantalla la freqüència de la
paraula que segueix per pantalla.

## Sortida

La sortida són les freqüències de les paraules que tindran el codi `f` a
davant.

## Observació

Cal fer servir la classe `map` de les `stl`. Cal enviar 1 sol fitxer:
`program.cc`.

## Informació del problema

Autoria: J. Baixeries / B. Valles

Generació: 2026-01-25T21:29:08.546Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
