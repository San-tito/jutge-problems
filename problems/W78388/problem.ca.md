# Round Robin

Un algorisme de tipus \"Round Robin\" (RR) és una forma justa de tractar
tots els elements d'una sèrie de cues. Donades $n$ cues $q_i$, amb
$1 \leq i \leq n$, cadascuna amb els seus elements per tractar, RR va
passant per cada una d'elles, per ordre i circularment, traient i
processant l'element al capdavant de cada cua.

La circularitat (d'on prové la paraula \"Round\") vol dir que la
seqüència de cues es considera circular perquè com a successora de $q_n$
és pren $q_1$, que tanca la seqüència de cues en un cercle. En altres
paraules, un cop s'ha processat un element de $q_i$ es passa a
$q_{i+1}$, però després d'atendre $q_n$, es torna a començar per $q_1$.
A més, si una cua $q_i$ està buida, s'ignora i es passa a la següent.

Al principi, l'algorisme comença atenent la primera cua, $q_1$, i acaba
quan *totes les cues estan buides*.

Amb aquesta informació, implementeu la funció següent:

    /**
     * @brief Simula un algorisme "Round Robin" en un vector de cues
     *
     * La funció itera circularment (és a dir, considerant l'element n-1 
     * com l'inmediatament anterior al 0) el vector de cues, i va afegint 
     * els elements que treu del capdavant de cada cua en una cua resultat.
     *
     * @param  queues  Les cues d'entrada
     *
     * @returns La cua resultant d'aplicar l'algorisme "Round Robin"
     */
    queue<string> round_robin(vector<queue<string>>& queues);

## Entrada

L'entrada consisteix en un seguit de cassos separats per una línia amb
\"`---`\", i cada cas conté una seqüència de línies de text amb la
descripció d'una cua a cada línia. Cada cua és només una llista de
paraules. (D'aquesta lectura se n'encarrega el programa principal.)

## Sortida

La sortida és cada una de les cues resultants, una per línia, de cridar
a `round_robin` amb cada vector de cues de l'entrada. (D'aquesta
escriptura ja se n'encarrega el programa principal, també.)

## Observació

Els fitxers públics (icona del gatet) contenen:

  ------------ --------------------------------------
  `main.cc`    el programa principal
  `Makefile`   per compilar amb `make` còmodament
  `.vscode`    per poder compilar i debuggar amb F5
  ------------ --------------------------------------

Has d'implementar `round_robin` en un **fitxer `.cc` nou** i enviar
**només aquest fitxer amb la funció**.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:37:06.830Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
