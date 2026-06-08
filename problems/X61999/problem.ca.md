# Mètode de la classe Arbre per a comptar el nombre de nodes amb valor estríctament major que el valor del seu node pare

En aquest exercici afegirem un nou mètode `numIncreasing` a la classe
`Arbre` per a calcular el nombre de nodes que guarden un valor
estríctament major que el valor guardat en el seu node pare. Fixeu-vos
que l'arrel de l'arbre no compta perquè no té node pare.

Per exemple, suposeu que aquest és l'arbre representat per la variable
`a` de tipus `Arbre`:

                                             6
                                             |
                                     -------- --------
                                    |                 |
                                    3                 6
                                    |                 |
                             ------- -------      ---- ----
                            |               |    |         |
                            2               6    9         9
                            |               |
                        ----            ---- ----
                       |               |         |
                       2               7         2
                       |               |         |
                   ---- ----       ---- ----      ----
                  |         |     |         |         |
                  9         0     0         7         9

Llavors, la crida `a.numIncreasing()` ha de retornar 6.

D'entre els fitxers que s'adjunten en aquest exercici, trobareu
`Arbre.hh`, a on hi ha una implementació de la classe genèrica `Arbre`.
Haureu de buscar dins `Arbre.hh` les següents línies i implementar els
mètodes que s'hi indiquen:

      // Pre:
      // Post: Retorna el nombre de parelles de nodes de l'arbre representat pel paràmetre implícit
      // que no son l'arrel i que guarden un valor
      // estríctament major que el valor guardat al seu node pare.
      // Descomenteu les següents dues linies i implementeu el mètode:
      // int numIncreasing() const{
      // }
    private:

      // Pre:
      // Post: Retorna el nombre de parelles de nodes de l'arbre representat per n
      // que no son l'arrel i que guarden un valor
      // estríctament major que el valor guardat al seu node pare.
      // Descomenteu les següents dues linies i implementeu el mètode:
      // static int numIncreasingAux(node_arbre *n ){
      // }

Podeu suposar que el tipus genèric `T` de la classe té predefinida la
operació de comparació `<`. Fins i tot, si voleu, poseu suposar que
també teniu `>, <=, >=`, tot i que realment no cal. De fet, es testejarà
la vostra implementació amb el tipus `T=int`. Ara bé, una solució que no
sigui genèrica es considerarà incorrecta i serà invalidada a posteriori,
encara que superi els jocs de proves.

D'entre els fitxers que s'adjunten a l'exercici també hi ha `main.cc`
(programa principal), i el podeu compilar directament, doncs fa include
de `Arbre.hh`. Només cal que pugeu `Arbre.hh` al jutge.

## Entrada

L'entrada conté un nombre arbitrari d'arbres. Cada cas consisteix en una
descripció d'un arbre binari d'enters. La descripció consisteix en un
recorregut en preordre dels nodes de l'arbre, amb marques on hi anirien
els arbres buits. Fixeu-vos en que el programa que us oferim ja
s'encarrega de llegir aquestes entrades. Només cal que implementeu els
mètodes abans esmentats.

## Sortida

Per a cada cas, la sortida conté la corresponent avaluació de l'arbre.
Fixeu-vos en que el programa que us oferim ja s'encarrega d'escriure
aquesta avaluació. Només cal que implementeu els mètodes abans
esmentats.

## Observació

Avaluació sobre 10 punts: (Afegiu comentaris si el vostre codi no és
prou clar)

- Solució lenta: 5 punts.

- solució ràpida: 10 punts.

Entenem com a solució ràpida una que és correcta, de cost lineal i capaç
de superar els jocs de proves públics i privats. Entenem com a solució
lenta una que no és ràpida, però és correcta i capaç de superar els jocs
de proves públics.

Una solució que no sigui genèrica (per a qualsevol tipus T amb
\<,\>,\<=,\>= predefinits) serà invalidada i rebrà nota 0, encara que
superi els jocs de proves.

## Informació del problema

Autoria: PRO2

Generació: 2026-01-27T18:53:55.155Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
