# Sustituciones en un árbol

Añadir a la clase `ArbreGen` la operación que se especifica a
continuación:

    /**
    * @pre:  Cierto.
    *
    * @post: En el parámetro implícito se han sustituido todas las
    *        apariciones de 'x' por 'y', y el resultado es el número
    *        de sustituciones realizadas.
    */ 
    int sustituir(const T& x, const T& y);

(Encontraréis el método `sustituir` al final del fichero `ArbreG.hh`.)

Los ficheros públicos (icono del gatito) incluyen un `.tar` con
`main.cc`, `ArbreG.hh`, `ArbreG-io.h` y un `Makefile`. También se
incluye una copia de los juegos de prueba públicos por comodidad. En la
carpeta donde se descompriman se puede: compilar con \"`make`\"; y
testear con \"`make test`\".

El `main.cc` ya se encarga de leer la entrada, hacer la sustitución y
producir la salida. Para entregar, solo es necesario subir al Jutge
vuestro archivo `ArbreG.hh` modificado.

## Entrada

La entrada ya la gestiona `main.cc` y contiene una secuencia de
sustituciones, que empiezan por la palabra `"sust"`, seguido del valor
antiguo y el nuevo, seguido del árbol en un formato generado por
`ArbreG-io.hh` (más fácil de leer y escribir).

## Salida

La salida también la gestiona `main.cc` y es una secuencia con los
resultados de hacer las sustituciones en cada árbol, con una frase
indicando el número de sustituciones realizadas seguido del árbol
resultado.

## Observaciones

Con el fin de programar la operación anterior, podríais necesitar alguna
operación privada y posiblemente `static`.

No utilicéis ninguna operación primitiva de `ArbreGen`. Acceded
directamente a los atributos de la clase para trabajar.

## Información del problema

Autoría: PRO2

Generación: 2026-01-27T18:49:48.233Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
