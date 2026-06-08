# Construeix arbres i accedeix a posicions en postordre

**Preliminars:**

**Preliminars:** Recordeu que el recorregut en postordre d'un arbre és
la llista dels nodes de l'arbre ordenada com segueix: en primer lloc, el
recorregut en postordre del fill esquerra de l'arbre, després el
recorregut en postordre del fill dret de l'arbre, i finalment l'arrel de
l'arbre. En altres paraules:

- $Postordre(x(t_1,t_2))\;=\;Postordre(t_1)\;\cdot{}\;Postordre(t_2)\;\cdot{}\;x$

- $Postordre(()) = ()$, és a dir, el postordre de l'arbre buit és
  l'arbre buit.

Donat un arbre de caràcters, el seu corresponent arbre de posicions en
postordre és un arbre d'enters amb exactament la mateixa estructura
(conjunt de posicions), i a on cada node guardarà la posició d'aquell
node en el recorregut en postordre.

    postorderTree(    a    )    =                     12
                      |                               |
                  ---- ----                       ---- ----
                 |         |                     |         |
                 b         z                     10        11
                 |                               |
          ------- -------                 ------- -------
         |               |               |               |
         e               x               5               9
         |               |               |               |
     ---- ----       ---- ----       ---- ----       ---- ----
    |         |     |         |     |         |     |         |
    p         w     b         g     1         4     6         8
              |               |               |               |
          ---- ----       ----            ---- ----       ----
         |         |     |               |         |     |
         a         m     e               2         3     7

En l'exemple anterior, fixeu-vos que el valor guardat en l'arbre
original a posició en postordre 1 és 'p', el valor guardat a posició en
postordre 8 és 'g', i el valor guardat a posició en postordre 12 és 'a'.

**Fi de preliminars**

En aquest exercici, heu d'implementar un programa que llegeix comandes
que manipulen variables que guarden àrbres binaris de caràcters. La
primera comanda `numvars= `$n$` ;` indica el nombre total $n$ de
variables. Els noms d'aquestes variables son `t0,…,t(n-1)`, i se suposa
que inicialment cadascuna guarda un àrbre buit. Després venen comandes
que construeixen nous àrbres a partir de variables i els assignen a
variables (com per exemple `t2 =BinTree( a , t0 , t1 );`, i comandes que
accedeixen als fills d'un arbre existent i els assignen a variables (com
per exemple `t3 = t2 .left();` o `t3 = t2 .right();`). També hi ha
comandes per a escriure per la sortida un àrbre en `INLINEFORMAT` (com
per exemple `cout``<<`` t2 ``<<``endl;`), i comandes per a escriure el
valor guardat en un arbre a una posició en postordre donada (com per
exemple `cout``<<``valueAtPostorderPosition( t2 , 3 )``<<``endl;`

Aquest és un exemple d'entrada del programa:

    numvars= 4 ;
    t1 =BinTree( a , t2 , t3 );
    t2 =BinTree( b , t1 , t3 );
    t3 =BinTree( c , t2 , t1 );
    cout<< t0 <<endl;
    cout<< t1 <<endl;
    cout<< t2 <<endl;
    cout<< t3 <<endl;
    cout<<valueAtPostorderPosition( t1 , 1 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 1 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 2 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 1 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 2 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 3 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 4 )<<endl;
    t1 =BinTree( d , t2 , t3 );
    t2 =BinTree( e , t1 , t3 );
    t3 =BinTree( f , t2 , t1 );
    cout<< t1 <<endl;
    cout<< t2 <<endl;
    cout<< t3 <<endl;
    cout<<valueAtPostorderPosition( t1 , 1 )<<endl;
    cout<<valueAtPostorderPosition( t1 , 2 )<<endl;
    cout<<valueAtPostorderPosition( t1 , 3 )<<endl;
    cout<<valueAtPostorderPosition( t1 , 4 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 3 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 4 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 8 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 9 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 8 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 13 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 16 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 18 )<<endl;
    t1 = t3 .left();
    t2 = t1 .right();
    t3 = t2 .left();
    cout<< t1 <<endl;
    cout<< t2 <<endl;
    cout<< t3 <<endl;
    cout<<valueAtPostorderPosition( t1 , 3 )<<endl;
    cout<<valueAtPostorderPosition( t1 , 4 )<<endl;
    cout<<valueAtPostorderPosition( t1 , 8 )<<endl;
    cout<<valueAtPostorderPosition( t1 , 9 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 1 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 2 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 3 )<<endl;
    cout<<valueAtPostorderPosition( t2 , 4 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 1 )<<endl;
    cout<<valueAtPostorderPosition( t3 , 2 )<<endl;

La sortida del programa amb la seqüència de comandes d'entrada anterior
hauria de ser:

    ()
    a
    b(a,)
    c(b(a,),a)
    a
    a
    b
    a
    b
    a
    c
    d(b(a,),c(b(a,),a))
    e(d(b(a,),c(b(a,),a)),c(b(a,),a))
    f(e(d(b(a,),c(b(a,),a)),c(b(a,),a)),d(b(a,),c(b(a,),a)))
    a
    b
    a
    b
    a
    c
    d
    a
    b
    c
    d
    c
    e
    a
    b
    c
    d
    c
    e
    c
    d
    f
    e(d(b(a,),c(b(a,),a)),c(b(a,),a))
    c(b(a,),a)
    b(a,)
    a
    b
    c
    d
    c
    e
    a
    b
    a
    c
    a
    b

Com podeu observar a l'exemple d'entrada anterior, hi han espais en
blanc per a facilitar la lectura.

**GUIA PER A OBTENIR UNA SOLUCIÓ INEFICIENT QUE SUPERI ELS JOCS DE
PROVES PÚBLICS**

A continuació us posem una guia per a obtenir una solució lenta. Aquesta
us permetrà superar els jocs de proves públics però no els privats,
obtenint així la meitat de la nota. Per tal d'obtenir una solució
ràpida, haureu de repensar el programa, quines dades convé mantenir, i
com fer-les servir.

Per a obtenir una solució lenta, n'hi ha prou amb guardar un vector de
BinTree t\[0\...numvars-1\] sobre el qual es guarden els àrbres que es
van calculant. Totes les comandes es transformen en crides directes a
mètodes de BinTree excepte `valueAtPostorderPosition`, per a la cual
caldrà implementar una funció, amb el mateix nom, que rebi un arbre i un
enter que representa una posició en postordre, i retorni el valor de
l'arbre en aquella posició.

Podeu utilitzar la plantilla següent, a on només hi manca implementar la
funció `getValueAtPostorderPosition`.

    #include <iostream>
    #include <string>
    #include <cstdlib>
    #include <vector>
    // Add more includes if you wish ...

    using namespace std;

    #include "BinTree.hh"

    typedef BinTree<char> BT;

    int getIdVar(string s)
    {
        return atoi(s.substr(1).c_str());
    }

    // Add auxiliary functions if you wish ...

    char getValueAtPostorderPosition(BT t, int pos)
    {
        // Implement this function ...
    }

    int main()
    {
        string s1, s2, s3, s4, s5, s6, s7;
        int numvars;
        cin >> s1 >> numvars >> s2;
        vector<BT> t(numvars);
        while (cin >> s1 >> s2) {
            if (s1[0] == 't') {
                int idvar = getIdVar(s1);
                if (s2 == "=BinTree(") {
                    char value;
                    cin >> value >> s3 >> s4 >> s5 >> s6 >> s7;
                    int idvar1 = getIdVar(s4);
                    int idvar2 = getIdVar(s6);
                    t[idvar] = BT(value, t[idvar1], t[idvar2]);
                } else if (s2 == "=") {
                    cin >> s3 >> s4;
                    int idvar1 = getIdVar(s3);
                    if (s4 == ".left();") {
                        t[idvar] = t[idvar1].left();
                    } else {
                        t[idvar] = t[idvar1].right();
                    }
                }
            } else if (s1 == "cout<<") {
                int idvar = getIdVar(s2);
                cin >> s3;
                t[idvar].setOutputFormat(BinTree<int>::INLINEFORMAT);
                cout << t[idvar] << endl;
            } else if (s1 == "cout<<valueAtPostorderPosition(") {
                int idvar = getIdVar(s2);
                int pos;
                cin >> s3 >> pos >> s4;
                cout << getValueAtPostorderPosition(t[idvar], pos) << endl;
            } else {
                cout << "Error: unexpected command '" << s1 << "'" << endl;
                exit(1);
            }
        }
    }

Fixeu-vos que l'enunciat d'aquest exercici us ofereix el fitxer
`BinTree.hh`. Us falta crear el fitxer `main.cc`, que podeu construïr,
si voleu, a partir de la plantilla que us hem oferit abans. Només cal
que pugeu `main.cc` al jutge.

**Observació: Com us hem mencionat abans, la guia y el programa que us
oferim com a plantilla indica com obtenir una solució lenta. Els arbres
dels jocs de proves privats son molt grans, i això fa que, encara que
implementeu molt bé `valueAtPostorderPosition`, s'obtingui temps límit
excedit. Tot i així, els arbres dels jocs de proves privats tenen poca
profunditat (doncs son bastant equilibrats). Per tant, cal repensar el
programa i seguir un enfocament que faci que resoldre les comandes
`valueAtPostorderPosition` tingui cost proporcional a com a molt la
profunditat de l'arbre.**

## Entrada

La primera linia de l'entrada és de la forma `numvars= LIMIT ;`, a on
LIMIT és un nombre natural positiu. Després venen instruccions
d'aquestes menes:

    tNUM =BinTree( VALUE , tNUM1 , tNUM2 );
    tNUM1 = tNUM2 .left();
    tNUM1 = tNUM2 .right();
    cout<< tNUM <<endl;
    cout<<valueAtPostorderPosition( tNUM , POSTORDERINDEX )<<endl;

On `VALUE` es una lletra minúscula, `NUM, NUM1, NUM2` son naturals en el
rang {0,...,LIMIT-1}, i POSTORDERINDEX és un natural entre 1 i el nombre
de nodes de l'arbre guardat en la variable que l'acompanya en la crida a
`valueAtPostorderPosition`.

Se suposa que les entrades son correctes. En particular, sempre es
demana accedir a `left` o `right` d'arbres no buits.

## Sortida

Per a cada instrucció dels següents dos tipus, el vostre programa ha
d'escriure el resultat esperat (l'arbre contingut en la variable en
`INLINEFORMAT`, o el valor guardat per l'arbre contingut en la variable
en la posició indicada per l'índex en postordre, segons el cas).

    cout<< tNUM <<endl;
    cout<<valueAtPostorderPosition( tNUM , POSTORDERINDEX )<<endl;

## Observació

Podeu seguir l'enfocament que considereu oportú, i podeu utilitzar
qualsevol de les estructures de dades presentades al curs (**string,
vector, stack, queue, list, map**) com a element de suport, si ho
considereu oportú. De totes maneres, `BinTree` ha de jugar un paper
rellevant en la vostra solució. Qualsevol solució que ignori això i faci
servir enfocaments o estructures de dades alternatives que no formen
part de l'assignatura serà invalidada.

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, on cada operació té
cost **CONSTANT** (excepte per a la d'escriptura d'arbres, a on s'espera
cost proporcional a la mida de l'arbre involucrat, i a la d'escriptura
del valor a posició en postordre, a on s'espera cost proporcional a la
profunditat d'aquella posició en l'arbre involucrat), i capaç de superar
els jocs de proves públics i privats. Entenem com a solució lenta una
que no és ràpida, però és correcta i capaç de superar els jocs de proves
públics.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-25T21:24:29.527Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
