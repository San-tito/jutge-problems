# casino

Fes un programa que **calcula els beneficis** dels jugadors d'un casino.
Els esdeveniments que descriuen el que li pot succeir a una persona `P`
al casino són:

- \"`P enters`\": entra al casino;

- \"`P leaves`\": marxa del casino; i

- \"`P wins x`\": guanya una quantitat `x` entera (potser negativa!).

## Observació

Els fitxers públics (icona del gatet) contenen:

  ------------ --------------------------------------------
  `main.cc`    el programa principal, buit
  `Makefile`   per compilar amb `make` còmodament
  `.vscode`    carpeta per compilar i debuggar amb VSCode
  ------------ --------------------------------------------

Cal enviar el programa sencer en un sol fitxer.

## Entrada

L'entrada consisteix en una llista cronològica d'esdeveniments per a
diferents persones, en el format esmentat. L'entrada pot tenir
esdeveniments invàlids, com ara: 1) un \"`enters`\" si la persona ja
estava al casino, 2) un \"`leaves`\" si la persona no estava al casino,
i 3) un \"`wins`\" si la persona no estava al casino. En el cas d'un
esdeveniment invàlid, cal ignorar l'esdeveniment i seguir com si no
hagués succeït.

## Sortida

Cada cop que una persona surt del casino, cal mostrar el benefici que ha
aconseguit (pot ser negatiu), amb la frase \"`P has won x`\" (`P` és la
persona i `x` els beneficis). Al final, cal deixar una línia buida, i
després produir una llista ordenada per nom dels beneficis de cada
persona que encara era al casino, usant la frase \"`P is winning x`\".

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T14:00:33.984Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
