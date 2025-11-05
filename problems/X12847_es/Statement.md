# Barquitos (1)

El juego de los barquitos se juega sobre un tablero de $10\times 10$,
donde las filas se identifican con letras (de la `a` a la `j`) y las
columnas se numeran con números del 1 al 10.

 \
Cada uno de los dos jugadores que participan tiene un tablero. Sobre las
casillas del tablero cada jugador dispone un total de 10 barcos, que
ocupan 2, 3, 4 o 5 casillas contiguas en línea recta. En concreto, cada
jugador dispone de una flota formada por: 1 barco de longitud 5, 2 de
longitud 4, 3 de longitud 3, y 4 de longitud 2.

 \
Los barcos no se pueden tocar entre ellos ni se pueden posicionar de
cualquier forma: siempre han de definir una línea continua horizontal o
vertical, pero nunca diagonal. Siempre que se cumplan estas
restricciones, los jugador pueden disponer sus barcos en cualquier lugar
del tablero. Después, cada jugador intentará hundir los barcos del otro
jugador mediante 'disparos' directos a una coordenada del tablero
contrario.

## Entrada

La entrada tiene dos partes:

- Las primeras 10 líneas definen el tablero del jugador 1, que cumple
  las condiciones estipuladas en el juego. Cada línea define la posición
  de un barco en el tablero. Cada barco se define por una coordenada
  inicial del tablero, una longitud y una orientación: la coordenada
  está formada por una letra {`a` .. `j`} y un número de {1 .. 10} , la
  longitud es un entero en {2 .. 5} , y la orientación es una letra `h`
  (horizontal) o una letra `v` (vertical). El barco se situará en el
  tablero a partir de la coordenada inicial, siguiendo la orientación
  indicada, a lo largo de tantas casillas como indica la longitud del
  barco. Cuando la orientación es horizontal, la coordenada inicial
  indica la de la casilla más a la izquierda, y cuando es vertical, la
  casilla superior.

  Por ejemplo, el barco definido por `a1 3 h` ocupa las casillas *a1 ,
  a2 , a3*, mientras que el barco definido por `a1 3 v` ocupa las
  casillas *a1, b1, c1*.

- La segunda parte consiste en una secuencia de coordenadas que
  representa los disparos del jugador 2 sobre el tablero del jugador 1.
  Cada coordenada está formada por una letra {`a` .. `j`} y un número {1
  .. 10 }.

## Salida

- Dibujad el tablero del jugador 1 tras posicionarse los 10 barcos
  definidos en la entrada.

- A continuación indicad, para cada coordenada de la secuencia de
  disparos del jugador 2, si hay barco en esa posición en el tablero del
  jugador 1. Si no lo hay, indicad también la distancia de la posición
  del disparo al barco más cercano.

Seguid el formato indicado en los ejemplos.

## Observación

- Los tableros de los juegos de pruebas son tableros que cumplen las
  condiciones del juego. No es necesario que el programa las compruebe.

- Utilizad la siguiente definición:

  > **typedef** vector$<$ vector$<$**bool**$>$ $>$ *Tablero*;

- La distancia entre dos casillas $(i,j)$ i $(i',j')$ del tablero se
  define como la máxima diferència entre sus coordenadas, es decir,
  $$distancia((i,j), (i',j')) = max\{|i-i'|, |j-j'|\}$$ Fijaos que,
  según esto, las posiciones a distancia 1 son todas las posiciones
  contiguas (horizontalmente, verticalmente o en diagonal), las
  posiciones a distancia 2 son las contiguas a las de distancia 1, etc.

- Se valorará la eficiencia del algoritmo utilizado para calcular el
  barco más próximo.

 \

## Autor

Maria J. Blesa i Maria J. Serna (es: Maria Serna)

© Jutge.org, 2006--2025.

