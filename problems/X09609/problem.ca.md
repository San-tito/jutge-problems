# Cerca de subarbres binaris

Considerem la representació habitual amb nodes de la clase *Arbre* per
manegar arbres binaris genèrics d'elements de tipus *T* que podeu trobar
als fitxers públics. Un arbre només té un atribut: un punter al primer
node. Cada node conté la seva info i dos punters que representen els
seus succesors.

Volem una nova operació de la classe que donat un arbre $a$ i un valor
$x$ de tipus **T** comprovi si $x$ apareix en $a$; cas que la cerca
sigui exitosa, ha d'obtenir el subarbre que tingui com a arrel
l'aparició d'$x$ més propera a l'arrel d'$a$. Cas d'haver-hi diferents
aparicions d'$x$ a la distància mínima, ha d'obtenir el subarbre de més
a l'esquerra. Feu servir la següent especificació:

    void sub_arrel(Arbre& asub, const T& x)
    /* Pre: p.i. = A, asub es buit */
    /* Post: si A conte x, asub es el subarbre d'A resultat de la cerca;
       si A no conte x, asub es buit */

Exemples: siguin els següents arbres d'enters

    a =    7           b =    4           c =   10           d =   -4      
        /     \            /     \            /     \            /     \   
       6      -2          9       6         -1      -2          6      -2  
      / \     / \        / \     / \        /       / \        / \     /  
    -2  -3  -1   3     -1   3   8  -3     -2      -1   3     -1   3   8   
                                   /
                                  1

llavors les instruccions **a.sub_arrel(a1, -2)**, **b.sub_arrel(b1,
1)**, **c.sub_arrel(c1, 10)**, **d.sub_arrel(d1, 6)** han de produir els
següents arbres

    a =   -2       b =  1      c =   10           d =    6      
          / \                      /     \              / \   
        -1   3                   -1      -2           -1   3  
                                 /       / \       
                               -2      -1   3      

Dissenyeu aquesta operació sense utilitzar cap de les operacions
públiques del arbres binaris, accedint directament als atributs de la
classe **Arbre**. Si que podeu fer servir l'operació privada

    static node_arbre* copia_node_arbre(node_arbre* m) 
        /* Pre: cert */
        /* Post: el resultat es NULL si m es NULL;
           en cas contrari, el resultat apunta al node arrel 
           d'una jerarquia de nodes que es una copia de la
           jerarquia de nodes que te el node apuntat per m com a arrel */

## Entrada

L'entrada és un arbre i un enter $x$.

## Sortida

La sortida és un subarbre de l'arbre d'entrada amb $x$ com a l'arrel amb
les condicions de l'enunciat.

## Observació

Només s'ha d'enviar un fitxer que contengui la funció amb la capçalera
de l'enunciat i qualsevol altra funció auxiliar que cregueu convenient,
sense la funció main i sense posar-hi cap "include".

## Informació del problema

Autoria: Alberto Moreno (adaptador), Ramon Ferrer i Cancho (responsable)

Generació: 2026-01-27T18:50:27.437Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
