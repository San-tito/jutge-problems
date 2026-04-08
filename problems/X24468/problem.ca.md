# Índex de paraules

Un **índex** d'un text és una llista de totes les paraules que hi
apareixen, juntament amb les posicions on es troben. Per exemple, donat
el text:

    the cat sat on the mat the cat

l'índex seria:

    cat: 2 8
    mat: 6
    on: 4
    sat: 3
    the: 1 5 7

Fixeu-vos que les paraules de l'índex estan ordenades alfabèticament, i
les posicions de cada paraula també estan ordenades.

Feu un programa que llegeixi una seqüència de paraules i en mostri
l'índex.

## Observació

En aquest problema el centre d'interès és l'eficiència. Cal trobar una
forma intel·ligent d'emmagatzemar les paraules i les seves posicions per
evitar cerques innecessàries.

## Entrada

L'entrada és una seqüència de paraules (en minúscules, sense espais
interns), una per línia, acabada per fi d'entrada. La primera paraula té
la posició 1.

## Sortida

Per a cada paraula diferent que apareix al text, s'escriu una línia amb
la paraula, seguida de `:` i un espai, i a continuació les posicions on
apareix, ordenades de menor a major i separades per espais. Les paraules
s'escriuen en ordre alfabètic.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:35:31.997Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
