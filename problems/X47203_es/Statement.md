# Escala consonante de palabras

**Definición 1:** Un par de palabras en mayúscula ($p_1, p_2$) forma una
*escala consonante* si el número de apariciones de consonantes en $p_2$
supera al número de apariciones de consonantes en $p_1$.

Por ejemplo, el par (MADUIXOT, PRESSEC) forma una escala consonante,
porque MADUIXOT tiene 4 consonantes y PRESSEC tiene 5. También la forman
(POMA, PLATAN). Pero en cambio no forman escala consonante (SINDRIA,
PRUNA) ni (PERA, KIWI).

**Definición 2:** Una *escala consonante de palabras* de longitud $k$ es
una secuencia de $k$ palabras escritas con letras mayúsculas, en que
todo par de palabras consecutivas de la secuencia forma una escala
consonante.

Por ejemplo: la secuencia POMA, MADUIXA, PLATAN, PRESSEC, ALBERCOCS es
una escala consonante de palabras de longitud 5.

**Definición 3:** Dada una matriz con $n$ filas y $m$ columnas, diremos
que una secuencia de $k$ posiciones de la matriz es *escalonada* si es
de la forma $\{(i,j), (i+1, j+1),..., (i+k-1, j+k-1)\}$, para $i, j, k$
cumpliendo $0\leq i$, $i+k-1 < n$, $0\leq j$, $j+k-1<m$.

Por ejemplo, dada una matriz de $6\times 10$, la secuencia
$\{(0,2),(1,3),(2,4),(3,5),(4,6)\}$ es una secuencia escalonada de
posiciones que comienza en la posición $(0,2)$ y tiene longitud $5$.

**Se pide:**

Diseñad un programa que, dada una matriz de palabras y un natural $k$,
recorra la matriz por filas e indique la primera posición $(i,j)$ que
contiene una escala consonante de palabras de longitud $k$ en la
secuencia escalonada de posiciones que comienza en $(i,j)$.

Vuestro programa ha de representar la matriz de palabras mediante el
siguiente tipo:

    struct Palabra {
         string contenido;          // la palabra
         int consonantes;           // número de apariciones de consonantes 
    };
     
    typedef vector< vector<Palabra> > MatPalabras;

## Entrada

La entrada contiene un único caso. El caso consiste en el número de
filas $n\geq 1$, el número de columnas $m\geq 1$ de la matriz, y un
natural positivo $k$ que determina la longitud de la escala consonante
de palabras a buscar. A continuación vienen $n$ líneas con $m$ strings
cada una. Cada string está formado solo por letras mayúsculas.

## Salida

Se ha de escribir en una misma línea el número de fila, el número de
columna de la matriz, y la palabra con la que comienza la primera escala
consonante de palabras de longitud $k$ en una secuencia escalonada de
posiciones. El orden a seguir para buscar dicha posición y palabra es el
de un recorrido por filas de la matriz. Se ha de escribir -1 -1 si la
matriz no contiene ninguna.

Seguid el formato especificado en los ejemplos. Vuestro código ha de
seguir buenas normas de estilo, y ha de contener los comentarios que
consideréis oportunos.

## Autor

Gabriel Valiente, Maria Blesa (es: Maria Blesa)

© Jutge.org, 2006--2025.

