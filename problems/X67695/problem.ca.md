# Suma màxima dels camins d'un arbre binari

Afegiu una operació pública a la classe *Arbre* vista a teoria que
calculi la suma del camí de suma màxima d'un arbre binari.

Recordeu que hem definit un *camí* a un arbre com una successió de nodes
que van de l'arrel a una fulla. Us demanem implementar una operació nova
d'aquesta classe, amb la següent especificació pre/post, on el tipus $T$
ha de tenir definides les operacions $+$ (suma) i $>$ (més gran que):

    T max_suma_cami() const 
    /* Pre: el parametre implicit no es buit */
    /* Post: el resultat es la suma del cami de suma maxima del parametre implicit */

Exemple: si $a$ és el següent arbre d'enters

                          7
                      ---- ----
                     |         |
                     2         9
                  --- ---    -- --
                 |       |  |     |
                10       8  12    13
             ---- ----                
            |         |
           -1         4 
         --- ---       
        |       |
       -2       -5
     --- ---       
    |       |
    3       6

llavors la crida **a.max_suma_cami()** ha de retornar 29 $(7+9+13)$.

Dissenyeu aquesta operació sense utilitzar cap de les operacions
primitives del arbres, accedint directament als atributs de la classe
*Arbre*.

## Entrada

L'entrada és un arbre binari que serà el paràmetre implícit de la
funció.

## Sortida

La sortida és la suma del camí de suma màxima del paràmetre implícit.

## Observació

Només s'ha d'enviar un fitxer anomenat *program.hh*, que contengui la
funció amb la capçalera de l'enunciat i qualsevol altra funció auxiliar
que cregueu convenient, sense la funció main i sense posar-hi cap
*include*. A l'apartat *Public files* trobareu els fitxers que us calen
per construir la vostra solució.

## Informació del problema

Autoria: Alberto Moreno (adaptador), Ramon Ferrer i Cancho
(responsable), Borja Valles (readaptador)

Generació: 2026-01-27T18:54:32.702Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
