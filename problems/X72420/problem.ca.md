# (BinTree) Nombre de fulles amb mateix valor que l'arrel

Implementeu una funció **RECURSIVA** que, donat un arbre binari d'enters
no-buit, retorna el nombre de fulles que tenen el mateix valor que
l'arrel.

Aquesta és la capcelera:

    // Pre: t és no buit.
    // Post: Retorna el nombre de nodes de t que tenen el mateix valor que l'arrel.
    int numLeavesLikeRoot(BinTree<int> t);

Aquí tenim un exemple de paràmetre d'entrada de la funció i la
corresponent sortida:

    numLeavesLikeRoot( 0(1(0(2,2(0,0(2,))),0(0(,0(0,)),2(2(,2),))),2(0(2(,1(2,)),),0(0,1))) ) = 3

    numLeavesLikeRoot(                                 0                           ) = 3
                                                       |
                                       ---------------- ----------------
                                      |                                 |
                                      1                                 2
                                      |                                 |
                            ---------- ----------                   ---- ----
                           |                     |                 |         |
                           0                     0                 0         0
                           |                     |                 |         |
                       ---- ----          ------- -------      ----      ---- ----
                      |         |        |               |    |         |         |
                      2         2        0               2    2         0         1
                                |        |               |    |
                            ---- ----     ----       ----      ----
                           |         |        |     |              |
                           0         0        0     2              1
                                     |        |     |              |
                                 ----     ----       ----      ----
                                |        |               |    |
                                2        0               2    2

Fixeu-vos que l'enunciat d'aquest exercici ja ofereix uns fitxers que
haureu d'utilitzar per a compilar:
`main.cc, BinTree.hh, numLeavesLikeRoot.hh`. Us falta crear el fitxer
`numLeavesLikeRoot.cc` amb els corresponents `includes` i implementar-hi
la funció anterior. Només cal que pugeu `numLeavesLikeRoot.cc` al jutge.

## Entrada

La primera linia de l'entrada descriu el format en el que es descriuen
els arbres, o bé INLINEFORMAT o bé VISUALFORMAT. Després venen un nombre
arbitrari de casos. Cada cas consisteix en una descripció d'un arbre un
arbre binari d'enters. Fixeu-vos en que el programa que us oferim ja
s'encarrega de llegir aquestes entrades. Només cal que implementeu la
funció abans esmentada.

## Sortida

Per a cada cas, la sortida conté el corresponent resultat de la funció.
Fixeu-vos en que el programa que us oferim ja s'encarrega d'escriure
aquest resultat. Només cal que implementeu la funció abans esmentada.

## Observació

La vostra funció i subfuncions que creeu han de treballar només amb
arbres. Heu de trobar una solució **RECURSIVA** del problema. Avaluació
sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T21:24:05.741Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
