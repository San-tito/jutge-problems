# Afegir el mètode push_front a la classe Queue

Implementeu un nou mètode de la classe Queue, anomenat `push_front`, que
permeti afegir un element al principi de la cua, enlloc de al final com
passa amb el mètode `push` ja existent.

En cas de dubte, mireu el següent programa i el seu comportament descrit
en els seus comentaris.

    Queue<int> q;              // q:
    q.push(1);                 // q: 1
    q.push(2);                 // q: 1,2
    q.push(3);                 // q: 1,2,3
    cout << q.front() << endl; // escriu 1
    q.push_front(4);           // q: 4,1,2,3
    cout << q.front() << endl; // escriu 4
    q.pop()                    // q: 1,2,3
    cout << q.front() << endl; // escriu 1

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`queue.hh`, a on hi ha una implementació de la classe genèrica `Queue`.
Busqueu dins `queue.hh` les següents línies i implementeu el mètode:

      // Pre:
      // Post: value ha estat afegit al principi de la cua representada pel paràmetre implícit.
      //void push_front(T value) {
      //}

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`queue.hh`. Només cal que pugeu `queue.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una cua d'strings que se suposa
inicialment buida:

    push x (x és string)
    pop
    front
    size
    push_front x (x és string)

Se suposa que la seqüència d'entrada serà correcta (sense pop ni front
sobre cua buida).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe cua.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `front`, s'escriurà el front actual de la cua. Per
a cada instrucció `size`, s'escriurà la mida de la cua. El programa que
us oferim ja fa això. Només cal que implementeu el mètode abans
esmentat.

## Observació

Avaluació sobre 10 punts:

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, on cada operació té
cost **CONSTANT**, i capaç de superar els jocs de proves públics i
privats. Entenem com a solució lenta una que no és ràpida, però és
correcta i capaç de superar els jocs de proves públics.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:57:30.930Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
