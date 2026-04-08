# Anagrames

Dues paraules són **anagrames** si tenen exactament les mateixes lletres
i en les mateixes quantitats. Per exemple, `eat`, `ate` i `tea` són
anagrames entre elles, i també ho són `listen`, `silent` i `enlist`.

Feu un programa que llegeixi una seqüència de paraules i les classifiqui
en grups d'anagrames. Per a cada grup, cal escriure les paraules
ordenades alfabèticament. Els grups s'han d'escriure en un cert ordre
(explicat a sota).

## Observació

En aquest problema el centre d'interès és l'eficiència. Cal trobar una
forma intel·ligent d'agrupar les paraules per evitar comparacions
innecessàries.

**Pista**: Si ordenem les lletres d'una paraula, obtenim una mena de
"signatura". Per exemple, si ordenem les lletres de `eat`, `ate` i
`tea`, obtenim `aet` en tots tres casos. Dues paraules són anagrames si
i només si tenen la mateixa signatura. Aquesta signatura es pot fer
servir com a **clau** d'un `map`.

Per ordenar les lletres d'un `string s`, es pot fer servir la funció
`sort` de la llibreria `<algorithm>`:

    #include <algorithm>
    ...
    sort(s.begin(), s.end());

La sortida del programa ha d'estar ordenada per la signatura de cada
grup, que correspon a l'ordre de les claus del `map`.

## Entrada

L'entrada és una seqüència de paraules (en minúscules, sense espais
interns), una per línia, acabada per fi d'entrada.

## Sortida

Per a cada grup d'anagrames, s'escriu una línia amb la signatura del
grup (les lletres ordenades), seguida de `:` i un espai, i a continuació
les paraules del grup ordenades alfabèticament i separades per espais.
Els grups s'escriuen en ordre de signatura.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:35:39.958Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
