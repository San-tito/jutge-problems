# Nou mètode de la classe Queue per a accedir indexadament als seus elements

Implementeu un nou mètode de la classe Queue que permeti accedir
indexadament als seus elements amb l'operador `[]`. Per exemple, amb la
declaració `Queue<int> q`, la instrucció `q[0]` ha de retornar el primer
element de `q` (és a dir, el mateix que retorna `q.front()`), i `q[1]`
ha de retornar el segon element de `q`, i `q[2]` ha de retornar el
tercer element de `q`, i així successivament.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`queue.hh`, a on hi ha una implementació de la classe genèrica `Queue`.
Haureu de buscar dins `queue.hh` la part:

    // Pre: i està entre 0 i la mida de la cua implícita menys 1.
    // Post: Retorna l'i-èssim valor de la cua implícita (indexat començant des de 0).
    // Descomenteu les següents dues linies i implementeu el mètode:
    // T operator[](int i) const {
    // }

Haureu de descomentar les dues línies que s'indiquen i implementar
aquest mètode. No toqueu la resta de la implementació de la classe,
excepte si, per algun motiu, considereu que necessiteu afegir algun
mètode auxiliar a la part privada.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs inclou
`queue.hh`. Només cal que pugeu `queue.hh` al jutge.

## Entrada

La entrada del programa és una seqüència d'instruccions del següent
tipus que s'aniran aplicant sobre una cua de strings que se suposa
inicialment buida:

    push s (s és un string)
    pop
    front
    size
    [i] (i és un enter)

Se suposa que la seqüència d'entrada serà correcta (sense `pop` ni
`front` sobre cua buida, ni `[i]` amb un `i` fora de rang).

El programa principal que us oferim ja s'encarrega de llegir aquestes
entrades i fer les crides als corresponents mètodes de la classe cua.
Només cal que implementeu el mètode abans esmentat.

## Sortida

Per a cada instrucció `front`, s'escriurà el front actual de la cua. Per
a cada instrucció `size`, s'escriurà la mida de la cua. Per a cada
instrucció `[i]`, s'escriurà el contingut de la posició `i` de la cua.
El programa que us oferim ja fa això. Només cal que implementeu el
mètode abans esmentat.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:56:11.521Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
