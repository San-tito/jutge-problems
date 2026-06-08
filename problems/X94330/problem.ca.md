# ++ i -- amb rebot a la classe List

Típicament, l'operador `++` dels iteradors de la classe List els
desplaça una unitat cap al end de la llista, i l'operador `–` dels
iteradors de la classe List els desplaça una unitat cap al begin de la
llista. A més a més, executar `++` sobre un iterador que es troba al end
de la llista produeix error d'execució, i executar `–` sobre un iterador
que es troba al begin de la llista també produeix error d'execució.

En aquest exercici modificarem la classe List de manera que els errors
d'execució abans esmentats ja no es produiran. En canvi, es produirà un
intercanvi en la direcció de moviment dels operadors `++` i `–` (efecte
rebot). Per exemple, si creem un iterador nou, el col.loquem al end de
la llista, i executem `++` sobre ell, no hi haurà error d'execució,
l'iterador no es mourà, i a partir d'aquell moment l'operador `++` sobre
ell l'anirà desplaçant cap al begin de la llista, i l'operador `–` el
desplaçarà cap al end de la llista.

Fixeu-vos en el següent exemple de programa i el seu comportament
descrit en els seus comentaris.

    List<string> l;                        // l:
    l.push_back("a");                      // l: a
    l.push_back("b");                      // l: a,b
    l.push_back("c");                      // l: a,b,c
    List<string>::iterator it = l.begin(); // l: (a),b,c
    it++;                                  // l: a,(b),c
    it++;                                  // l: a,b,(c)
    it--;                                  // l: a,(b),c
    it++;                                  // l: a,b,(c)
    it++;                                  // l: a,b,c,()
    it++;                                  // l: a,b,c,()
    it++;                                  // l: a,b,(c)
    it++;                                  // l: a,(b),c
    it--;                                  // l: a,b,(c)
    it++;                                  // l: a,(b),c
    it++;                                  // l: (a),b,c
    it++;                                  // l: (a),b,c
    it++;                                  // l: a,(b),c
    it--;                                  // l: (a),b,c
    it--;                                  // l: (a),b,c
    it--;                                  // l: a,(b),c
    it--;                                  // l: a,b,(c)
    it++;                                  // l: a,(b),c
    it--;                                  // l: a,b,(c)
    it--;                                  // l: a,b,c,()
    it--;                                  // l: a,b,c,()
    it++;                                  // l: a,b,c,()
    it++;                                  // l: a,b,(c)

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`list.hh`, a on hi ha una implementació de la classe genèrica `List`.
Caldrà que modifiqueu la classe `List` per a poder recordar quina és la
direcció actual de desplaçament d'un iterador donat, i reimplementeu els
operadors `++` i `–` convenientment. Més específicament, haureu de
buscar les següents línies i fer els afegits i modificacions que s'hi
indiquen:

      ...
      
      // Iterators mutables
      class iterator {
        friend class List;
        private:
          List *plist;
          Item *pitem;
          // Add an attribute to remember the orientation of the iterator:
          // ...    
          
          // You can add new private methods if you wish.
          
        public:

        iterator() {
            // Initialise the orientation of the iterator
            // ...
        }
        
        // Adapt this function so that no error occurs and the orientation of the iterator
        // is taken into account and updated accordingly.
        // Preincrement
        iterator operator++()
        /* Pre: el p.i apunta a un element E de la llista,
           que no és el end() */
        /* Post: el p.i apunta a l'element següent a E 
           el resultat és el p.i. */
        {
          if (pitem == &(plist->itemsup)) {
            cerr << "Error: ++ on iterator at the end of list" << endl;
            exit(1);
          }
          pitem = pitem->next;
          return *this;
        }

    	...

        // Adapt this function so that no error occurs and the orientation of the iterator
        // is taken into account and updated accordingly.
        // Predecrement
        iterator operator--()
        /* Pre: el p.i apunta a un element E de la llista que
           no és el begin() */
        /* Post: el p.i apunta a l'element anterior a E,
           el resultat és el p.i. */
        {
          if (pitem == plist->iteminf.next) {
           cerr << "Error: -- on iterator at the beginning of list" << endl;
           exit(1);
          }
          pitem = pitem->prev;
          return *this;
        }

    	...

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`list.hh`. Només cal que pugeu `list.hh` al jutge.

## Entrada

L'entrada del programa té una seqüència d'instruccions del següent tipus
que s'aniran aplicant sobre la llista i dos iteradors que se suposen
situats inicialment al principi (i final) de la llista:

    push_front s (s és string)
    push_back s (s és string)
    pop_front
    pop_back
    it1 = begin
    it1 = end
    it1 = erase it1
    it1++
    it1--
    ++it1
    --it1
    *it1 = s (s és string)
    insert it1 s (s és string)
    cout << *it1
    it2 = begin
    it2 = end
    it2 = erase it2
    it2++
    it2--
    ++it2
    --it2
    *it2 = x (x és string)
    insert it2 x (x és string)
    cout << *it2
    cout << l

Se suposa que la seqüència d'entrada serà correcta, és a dir, que no es
produeixen errors d'execució si s'apliquen correctament sobre una llista
i dos iteradors amb les condicions abans esmentades.

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe list.
Només cal que implementeu les modificacions abans esmentades.

## Sortida

Per a cada instrucció `cout << *it1` o `cout << *it2` s'escriurà el
contingut apuntat per l'iterador `it1` o `it2`, respectivament. Per a
cada instrucció `cout << l` s'escriurà el contingut de tota la llista.
El programa que us oferim ja fa això. Només cal que feu els canvis abans
esmentats.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució lenta una que és correcta i capaç de superar els
jocs de proves públics. Entenem com a solució ràpida una que és correcta
i capaç de superar els jocs de proves públics i privats.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:57:24.846Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
