# Substitucions en un arbre

Afegir a la classe `ArbreGen` l'operació que s'especifica a continuació:

    /**
    * @pre:  Cert.
    *
    * @post: En el paràmetre implícit s'han substituït totes les
    *        ocurrències de 'x' per 'y', i el resultat és el nombre
    *        de substitucions realitzades.
    */ 
    int substituir(const T& x, const T& y);

(Trobareu el mètode `sustituir` al final del fitxer `ArbreG.hh`.)

Els fitxers públics (icona del gatet) inclouen un `.tar` amb `main.cc`,
`ArbreG.hh`, `ArbreG-io.h` i un `Makefile`. També s'inclou una còpia
dels jocs de prova públics per comoditat. A la carpeta on es
descomprimeixin es pot: compilar amb \"`make`\"; i testar amb
\"`make test`\".

El `main.cc` ja s'encarrega de llegir l'entrada, fer la substitució i
produir la sortida. Per lliurar, només és necessari pujar al Jutge el
vostre fitxer `ArbreG.hh` modificat.

## Entrada

L'entrada ja la gestiona `main.cc` i conté una seqüència de
substitucions, que comencen per la paraula `"sust"`, seguit del valor
antic i el nou, seguit de l'arbre en un format generat per
`ArbreG-io.hh` (més fàcil de llegir i escriure).

## Sortida

La sortida també la gestiona `main.cc` i és una seqüència amb els
resultats de fer les substitucions en cada arbre, amb una frase indicant
el nombre de substitucions realitzades seguit de l'arbre resultat.

## Observacions

Per tal de programar l'operació anterior, podríeu necessitar alguna
operació privada i possiblement `static`.

No utilitzeu cap operació primitiva d'`ArbreGen`. Accediu directament
als atributs de la classe per treballar.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:49:44.239Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
