# Arbre amb amplada

**Nota:** En aquest exercici, les entrades contenen àrbres binaris
d'enters. Els valors dels nodes d'aquests àrbres d'entrada no importen,
nomès importa l'estructura dels àrbres. Per facilitar la llegibilitat
dels exemples, totes les entrades seran àrbres amb nomès 0's als nodes,
cosa que, com hem comentat, no és rellevant.

**Preliminars:** Recordeu que el recorregut en amplada d'un arbre és la
llista dels nodes de l'arbre per nivells, és a dir, primer l'arrel,
després els nodes a profuncitat 1 d'esquerra a dreta, després els nodes
a profunditat 2 d'esquerra a dreta, després els nodes de profunditat 3
d'esquerra a dreta, i així successivament.

**Exercici:**

Haureu d'implementar una funció **RECURSIVA** que rebrà un arbre binari
d'enters. La funció haurà de retornar un altre arbre binari d'enters,
amb exactament la mateixa estructura (conjunt de posicions) que el que
s'ha rebut d'entrada, i a on cada node guardarà la posició d'aquell node
en el recorregut en amplada de l'arbre.

    // Pre:  Sigui T el valor inicial de l'arbre t que es rep com a paràmetre.
    // Post: Sigui T' l'arbre retornat. T i T' tenen exactament la mateixa estructura.
    //       Sigui n1,n2,...,nk els nodes de T' en el recorregut en amplada de T'.
    //       Llavors, n1 guarda el valor 1, n2 guarda el valor 2, ..., nk guarda el valor k.
    BinTree<int> breadthTree(BinTree<int> t);

Aquí tenim un exemple de comportament de la funció:

    breadthTree(0(0(0(0,0(0,0)),0(0,0(0,))),0)) = 1(2(4(6,7(10,11)),5(8,9(12,))),3)

    breadthTree(      0      ) =                      1
                      |                               |
                  ---- ----                       ---- ----
                 |         |                     |         |
                 0         0                     2         3
                 |                               |
          ------- -------                 ------- -------
         |               |               |               |
         0               0               4               5
         |               |               |               |
     ---- ----       ---- ----       ---- ----       ---- ----
    |         |     |         |     |         |     |         |
    0         0     0         0     6         7     8         9
              |               |               |               |
          ---- ----       ----            ---- ----       ----
         |         |     |               |         |     |
         0         0     0               10        11    12

Fixeu-vos que l'enunciat d'aquest exercici ja ofereix uns fitxers que
haureu d'utilitzar per a compilar:
`main.cc, BinTree.hh, breadthTree.hh`. Només cal que creeu
`breadthTree.cc`, posant-hi els includes que calguin i implementant la
funció `breadthTree`. Només cal que pugeu `breadthTree.cc` al jutge.

## Entrada

La primera linia de l'entrada descriu el format en el que es descriuen
els arbres, o bé INLINEFORMAT o bé VISUALFORMAT. Després venen un nombre
arbitrari de casos. Cada cas consisteix en una descripció d'un arbre un
arbre binari d'enters (amb només el valor 0 als nodes, tot i que això és
irrellevant). Fixeu-vos en que el programa que us oferim ja s'encarrega
de llegir aquestes entrades. Només cal que implementeu la funció abans
esmentada.

## Sortida

Per a cada cas, cal escriure l'arbre binari resultant de cridar a la
funció abans esmentada amb l'arbre d'entrada. Fixeu-vos en que el
programa que us oferim ja s'encarrega d'escriure aquesta sortida. Només
cal que implementeu la funció abans esmentada.

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

Generació: 2026-01-25T14:23:56.499Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
