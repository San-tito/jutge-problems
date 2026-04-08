# Turistes

Disposem d'un llistat de les visites de turistes a ciutats del món. Cada
visita diu quin turista ha visitat quina ciutat en quin any.

Fes un **programa** que mostra els grups de turistes que, per
coincidència, han visitat la mateixa ciutat en el mateix any.

## Entrada

El llistat d'entrada consisteix en una seqüència de línies en el format
\"`<nom> <any> <ciutat>`\". Els noms de turistes i ciutats són sempre
una sola paraula; l'any sempre té 4 dígits.

## Sortida

Cada línia de la sortida és una coincidència de turistes i té el format
\"`<any> <ciutat>: <nom1> <nom2> ... <nomN>`\". Més en detall, cada
línia comença amb l'any i el nom de la ciutat separats per un espai,
seguit de \"`:`\", i la llista, ordenada pel nom, dels turistes que han
coincidit, separats per un espai. Les línies s'ordenen, de forma
creixent, per l'any i després la ciutat (que també seria l'ordre
lexicogràfic de concatenar l'any, un espai, i la ciutat). Si una
combinació any-ciutat no s'ha visitat o només l'ha visitat un sol
turista, no ha d'aparèixer en el llistat.

## Observació

Aquest problema té como centre d'interés l'**eficiencia**.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-25T09:44:11.095Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
