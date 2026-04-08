# Mateixos amics

Considerem un conjunt de persones i les seves amistats. L'amistat és
simètrica: si l'Anna és amiga del Bernat, llavors el Bernat és amic de
l'Anna.

Direm que dues persones tenen els **mateixos amics** si el conjunt
d'amics de la primera és exactament igual al conjunt d'amics de la
segona. Per exemple, si l'Anna és amiga del Bernat i la Carla, i la
Diana també és amiga del Bernat i la Carla (i de ningú més), llavors
l'Anna i la Diana tenen els mateixos amics.

Observeu que si dues persones tenen exactament els mateixos amics,
llavors no poden ser amigues entre elles.

Feu un programa que llegeixi una llista de parelles d'amics i mostri
tots els grups de persones que tenen els mateixos amics. Cada grup s'ha
d'escriure en una línia, amb els noms ordenats alfabèticament.

## Observació

En aquest problema el centre d'interès és l'eficiència. Cal trobar una
forma intel·ligent d'agrupar les persones per evitar comparacions
innecessàries.

L'ordre dels grups a la sortida no és important.

## Entrada

L'entrada és una seqüència de parelles de noms (en minúscules, sense
espais interns), separats per un espai, una parella per línia, acabada
per fi d'entrada.

## Sortida

Per a cada grup de persones amb els mateixos amics (de mida $\geq 2$),
s'escriu una línia amb els noms del grup ordenats alfabèticament i
separats per espais. L'ordre dels grups no és important.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:35:46.900Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
