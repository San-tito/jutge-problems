# Subhasta

En una subhasta, els postors van fent ofertes per un objecte. El
subhastador anuncia cada cop que algú supera la millor oferta fins al
moment. Els postors també es poden retirar de la subhasta.

Escriu un programa que simuli una subhasta. L'entrada comença amb un
enter, el *preu mínim* de sortida. Després ve una seqüència d'events de
dos tipus:

- `oferta <nom> <quantitat>`: el postor `<nom>` fa una oferta de
  `<quantitat>` euros.

- `retira <nom>`: el postor `<nom>` es retira de la subhasta.

Després de cada event, si la millor oferta ha canviat, cal escriure:

    millor oferta: <quantitat> (<nom>)

Si no ha canviat, no s'escriu res.

La millor oferta inicial és el preu mínim de sortida. Totes les ofertes
es registren, però només s'anuncien si superen la millor oferta.

Cal ignorar també les situacions següents (no produeixen cap sortida ni
efecte):

- Una oferta d'algú que ja s'ha retirat.

- Una retirada d'algú que ja s'havia retirat.

Un cop un postor es retira, no pot tornar a participar.

Al final de tots els events, cal escriure el guanyador:

    guanyador: <nom> (<quantitat>)

Si no queda cap postor (tots s'han retirat o ningú ha ofert prou), cal
escriure:

    no hi ha guanyador

## Entrada

La primera línia conté un enter, el preu mínim de sortida. Les línies
següents contenen events de tipus `oferta` o `retira`, com s'ha descrit.
Els noms dels postors no contenen espais.

## Sortida

Cada cop que la millor oferta canvia, una línia amb el format indicat.
La millor oferta pot canviar tant per una nova oferta que superi
l'anterior com per la retirada del postor que tenia la millor oferta. Al
final, una línia amb el guanyador o indicant que no n'hi ha.

## Observació

El centre d'interès en aquest problema és l'**eficiència**.

Als fitxers públics (icona del gatet) trobaràs els contenidors de PRO2
(`stack.hh`, `queue.hh`, `heap.hh`, i la seva dependència `assert.hh`),
un `program.cc` buit per començar, un `Makefile` i el directori
`.vscode` amb la configuració per compilar i debuggar amb VSCode.

Implementa el programa al fitxer `program.cc` i envia'l al Jutge. Pots
fer servir qualsevol contenidor de la STL i els de PRO2 que necessitis.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-04-03T21:10:47.424Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
