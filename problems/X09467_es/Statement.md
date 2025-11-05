# Rampas

En este ejercicio diremos que en la posción $i$ de un vector $v$ tenemos
una *rampa* cuando los elementos $v[i]$, $v[i+1]$ y $v[i+2]$ están
ordenados en orden estrictamente creciente o decreciente.

Por ejemplo, si $n=7$ y $v=[4,5,4,3,-4,2,4]$ tenemos rampas en las
posiciones 1, 2 y 4. Cuando $v=[0,0,0,0,0,0]$ no tenemos ninguna
posición con rampa.

Dos posiciones con rampa, $i$ y $j$ con $i<j$, son *potencialmente
conflictivas* si las correspondientes rampas involucran alguna posición
común.

En el ejemplo anterior las rampas de las posiciones 1 y 2 son
potencialmente conflictivas, la de la posición 2 es potencialmente
conflictiva con la de la posición 4. La rampa de la posición 1 no
comparte ninguna posición con la de la posición 4 y por ello las rampas
de las posiciones 1 y 4 no son potencialmente conflictivas.

Escribid un programa que indique las posiciones en las que tenemos
rampas y el número de pares $(i,j)$ con $i<j$ correspondientes a pares
de posiciones con rampa y potencialmente conflictivas.

Vuestro programa tiene que definir, implementar y usar los siguientes
procedimientos:

    vector<bool> pos_rampas (const vector <int>& V);

que dado un vector de enteros devuelve un vector, con la misma
dimensión, de valores booleanos, donde la posición $i$ contiene el valor
**true** si, y solo si, el vector $V$ tiene una rampa en la posición
$i$.

    int pot_conflictivas (const vector <bool>& B);

que dado un vector indicando las posiciones donde hay una rampa
determine el número de pares de posiciones $(i,j)$, $i < j$, con rampas
y potencialmente conflictivas.

## Entrada

La entrada está formada por una secuencia no vacía de casos. Cada caso
está descrito por un entero $n\geq 3$ seguido de los $n$ valores enteros
del vector correspondiente.

## Salida

Indicar para cada caso las posiciones en las que tenemos rampas y el
número de pares de posiciones $(i,j)$ con $i<j$ con rampas y
potencialmente conflictivas.

Seguid el formato especificado en los ejemplos. Vuestro código tiene que
seguir las normas de estilo y contener los comentarios que consideréis
oportunos. Se valorará la sencillez y la eficiencia de las soluciones
propuestas.

## Autor

Professorat de PRO1 (es: Maria Serna)

© Jutge.org, 2006--2025.

