# Push i pop d'elements marcats a la classe Stack

En aquest exercici estendrem la classe `Stack` afegint un nou mètode
anomenat `push_mark`. A priori, aquest mètode fa el mateix que el mètode
`push` existent. També afegirem un altre nou mètode anomenat `pop_mark`.
L'efecte de `pop_mark` és anar eliminant elements del cim de la pila
fins que, o bé hi ha un element al cim que va ser afegit amb
`push_mark`, o bé s'ha buidat la pila.

Fixeu-vos en el següent exemple de programa i en la seva execució
descrita en els seus comentaris, a on denotem entre corxets els elements
afegits amb `push_mark`:

    Stack<string> s;  // s:
    s.push("a");      // s: a
    s.push("b");      // s: a,b
    s.push_mark("c"); // s: a,b,[c]
    s.push("d");      // s: a,b,[c],d
    s.push("e");      // s: a,b,[c],d,e
    s.push_mark("f"); // s: a,b,[c],d,e,[f]
    s.push("g");      // s: a,b,[c],d,e,[f],g
    s.push("h");      // s: a,b,[c],d,e,[f],g,h
    s.push("i");      // s: a,b,[c],d,e,[f],g,h,i
    s.pop();          // s: a,b,[c],d,e,[f],g,h
    s.pop_mark();     // s: a,b,[c],d,e,[f]
    s.pop_mark();     // s: a,b,[c],d,e,[f]
    s.pop();          // s: a,b,[c],d,e
    s.pop();          // s: a,b,[c],d
    s.pop_mark();     // s: a,b,[c]
    s.pop_mark();     // s: a,b,[c]
    s.pop();          // s: a,b
    s.pop_mark();     // s:

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`stack.hh`, a on hi ha una implementació de la classe genèrica `Stack`.
Haureu de buscar dins `stack.hh` les següents línies:

      struct Item {
        T value;
        Item* next;
        // Afegeix el que calgui per a poder recordar si un element està marcat.
        // ...
      };

      ...

      // Modifica aquesta funció per a recordar que l'element afegit no està marcat.
      void push(T value) {
        Item *pnewitem = new Item();
        pnewitem->value = value;
        pnewitem->next = ptopitem;
        ptopitem = pnewitem;
        _size++;
      }

      ...

      // Pre:
      // Post: S'afegeix value al cim de la pila, com a element marcat.
      // Descomenteu les següents dues linies i implementeu el mètode:
      // void push_mark(T value) {
      // ...
      // }

      // Pre: 
      // Post: S'han eliminat del cim de la pila el mínim nombre d'elements necessaris
      //       per tal de garantir que o bé el cim de la pila té un element que va ser
      //       afegit amb push_mark, o bé la pila és buida.
      //       En particular, si el cim de la pila ja tenia un element marcat, no s'ha eliminat res.
      // Descomenteu les següents dues linies i implementeu el mètode:
      // void pop_mark() {
      // ...
      // }

Afegiu el que cal dins de l'struct Item, i descomenteu les linies que
s'indiquen i implementeu els mètodes.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`stack.hh`. Només cal que pugeu `stack.hh` al jutge.

**Observació:** En aquest exercici es prefereix una solució basada en
manegar punters abans que una solució basada en cridar a mètodes
primitius de la pròpia classe.

**Observació:** En els jocs de proves no es copiaran piles. Per tant, no
cal que adapteu les funcions per a copiar piles, i per tant no cal
decidir que passa amb els elements marcats d'una pila quan es copien en
una altra pila.

## Entrada

L'entrada del programa té una primera línia amb o bé **`int`** o bé
**`string`**, que indica el tipus T dels elements de la pila `s` amb la
que treballarà el programa, que se suposa inicialment buida. Després, hi
ha una seqüència d'instruccions del següent tipus que s'aniran aplicant
sobre la pila:

    push x (x és de tipus T)
    pop
    top
    size
    print
    push_mark x (x és de tipus T)
    pop_mark

Se suposa que la seqüència d'entrada serà correcta (sense pop ni top
sobre pila buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe pila.
Només cal que feu els canvis abans esmentats.

## Sortida

Per a cada instrucció `top`, s'escriurà el top actual de la pila, per a
cada instrucció `print`, s'escriurà el contingut de la pila, i per a
cada instrucció `size`, s'escriurà la mida de la pila. El programa que
us oferim ja fa això. Només cal que implementeu els mètodes abans
esmentats i les modificacions que considereu oportunes a la classe.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta i capaç de superar els
jocs de proves públics i privats. Entenem com a solució lenta una que no
és ràpida, però és correcta i capaç de superar els jocs de proves
públics. Per exemple, una solució que superi tots els jocs de proves
però que manegui incorrectament la memòria serà invalidada i tindrà nota
0.

Una solució basada en cridar a mètodes primitius de la pròpia classe pot
tenir una certa penalització en la nota.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:51:08.518Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
