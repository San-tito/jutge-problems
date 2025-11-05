# Mutacions de virus

Recordeu que el code genètic (vegeu problema P36671) és un conjunt de
regles que tradueix seqüències de nucleòtids a proteïnes. Quan es
treballa amb ADN enlloc d'ARN missatger, les seqüències de nucleòtids
canvien la base \@U@ per la base \@T@.

Sovint, com a reacció de resistència contra els fàrmacs, els virus muten
el seu ADN tot mantenint la seva funcionalitat, és a dir, sintetitzant
la mateixa proteïna. Per exemple, si un virus tingués la seqüència
$$\text{GCCAATGACTAAGGCCTAAAGA}$$ llavors sintetitzaria la proteïna
\@Thr-Lys-Ala@. Si el virus mutés a $$\text{GCCAATGACCAACGCCTAAAGA}$$
(la desena base ha canviat de \@T@ a \@C@), aquest continuaria
sintetitzant \@Thr-Lys-Ala@. En aquest cas, diem que s'ha produit una (o
més) mutacions equivalents.

En canvi, si el virus mutés a $$\text{GCCAATGTCTAACGCCTAAAGA}$$ (la
vuitena base ha canviat de \@A@ a \@T@ i la quatorzena base ha canviat
\@G@ per \@A@), llavors sintetitzaria \@Ser-Lys-Leu@, fet que es nota
indicant \@Thr-1-Ser,Ala-3-Leu@ (el número indica a quin codó s'ha
produït la mutació).

Feu un programa que indiqui si parells de seqüències d'ADN representen
mutacions equivalents i que, en cas negatiu, indiqui quines mutacions
s'han produït. El programa també ha de dir quantes bases són diferents
entre el codó \@ATG@ i el codó d'Stop.

## Entrada

L'entrada comença amb un natural $k$. Després, venen $k$ parells de
seqüències d'ADN de la mateixa llargada. Cada seqüència d'ADN és formada
per una tira de caràcters '\@A@', '\@C@', '\@T@' i '\@G@' en una línia
sense blancs. Totes les seqüències d'ADN tenen un codó \@ATG@ abans d'un
codó Stop. El codó \@ATG@ i el codó d'Stop no muten mai en cap parell de
seqüències ni cap mutació pot introduir un nou codó d'Stop. Els parells
de seqüències sempre tenen la mateixa llargada.

## Sortida

Per a cada parell de seqüències dd'ADN e l'entrada, cal indicar si són o
no són equivalents. En el cas que no siguin equivalents, cal indicar
tots els canvis que han produït les mutacions segons la notació
estàndard descrita anteriorment. El nombre de bases diferents s'ha
d'escriure al final de la línia, entre parèntesis.

Seguiu el format de l'exemple.

## Autor

Salvador Roura

© Jutge.org, 2006--2025.

