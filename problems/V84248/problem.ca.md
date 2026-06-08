# Subarbre menor de Productes

En aquest exercici haureu de resoldre un algorisme de la pràctica, però
en comptes d'usar la classe `BinTree` programareu l'algorisme en la
classe `Arbre`. No es poden cridar les operacions d'`Arbre`, sinó que
heu de programar-ho tot usant punters.

L'algorisme crea, a partir d'un arbre de sales i un conjunt de productes
que es troben a l'arbre, el **subarbre mínim** que inclogui l'arrel, i
tots els productes del conjunt.

La capçalera i especificació són les següents:

    /**
    * @pre:  El árbol (p.i.) está vacío. Los productos del set están todos
    *        en el árbol 'a'.
    *
    * @post: El árbol (p.i.) contiene el subárbol menor de 'a' que incluye todos
    *        los 'productos', incluyendo la raiz.
    */
    void crear_subarbol(const Arbre& a, set<string>& productos);

(La declaració de `crear_subarbol` es troba al final del fitxer
`Arbre.hh`.)

Els fitxers públics (icona del gatet) inclouen un `.tar` amb `main.cc`,
`Arbre.hh`, `Arbre-io.hh`, i un `Makefile`. També s'inclouen els jocs de
prova públics per comoditat. Fent \"`make`\" a la carpeta on es
descomprimeixi el `.tar` es pot compilar, i amb \"`make test`\" es pot
provar amb els jocs de prova (els fitxers `*.inp`).

El `main.cc` ja s'encarrega de llegir l'entrada, crear el subarbre i
produir la sortida. Per lliurar, només és necessari pujar al Jutge el
vostre fitxer `Arbre.hh` modificat.

## Observacions

Tingueu present que el nom de la funció està en *castellà*:
`crear_subarbol`.

Per tal de programar l'operació anterior, podríeu necessitar alguna
operació privada i possiblement `static`.

## Entrada

L'entrada és una representació textual de l'arbre de sales de la botiga,
i una seqüència amb el conjunt de productes que ha seleccionat l'usuari,
tal com a la pràctica. (Això ja està implementat a `main.cc`).

## Sortida

La sortida és la representació textual del subarbre menor trobat. (Això
també està implementat a `main.cc`).

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:50:08.724Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
