# Matrices dispersas (2): transposición

Tal como vimos en el problema *Matrices dispersas (1): conversión*, una
**matriz dispersa** sólo almacena los elementos no nulos. Los tipos
usados (definidos en `matrius.hh`) son los mismos:

    struct Casella {
        int pos;    // índice de columna
        int valor;  // valor del elemento
    };

    struct MatriuEsparsa {
        int ncols;                   // número de columnas
        vector<list<Casella>> files; // filas de la matriz dispersa
    };

La **transpuesta** de una matriz $n \times m$ es la matriz $m \times n$
que se obtiene intercambiando filas y columnas: el elemento en la
posición $(i, j)$ del original pasa a la posición $(j, i)$ de la
transpuesta.

Escribe la siguiente función:

    /**
     * @brief Calcula la transpuesta de una MatriuEsparsa.
     *
     * @param S MatriuEsparsa de S.files.size() filas y S.ncols columnas.
     *
     * @pre S es una MatriuEsparsa válida. Las posiciones de las casillas van de 0 a S.ncols-1.
     * @post Devuelve una nueva MatriuEsparsa T con T.ncols == S.files.size() y
     *       T.files.size() == S.ncols, donde T.files[j] contiene las casillas
     *       {i, S.files[i][j].valor} de S, ordenadas por columna ascendentemente.
     */
    MatriuEsparsa matriu_esparsa_transposa(const MatriuEsparsa& S);

## Observación

Los ficheros públicos (icono del gatito) contienen:

  -------------- ----------------------------------------------------
  `main.cc`      el programa principal, con la entrada/salida hecha
  `matrius.hh`   los tipos `Casella` y `MatriuEsparsa`
  `Makefile`     para compilar con `make` cómodamente
  `.vscode`      carpeta para compilar y depurar con VSCode
  -------------- ----------------------------------------------------

Hay que enviar únicamente la implementación de la función
`matriu_esparsa_transposa`, incluyendo el include de `matrius.hh`. No
hace falta enviar el `main`.

## Entrada

La primera línea contiene dos enteros $n$ y $m$
($0 \leq n, m \leq 1000$), el número de filas y columnas de la matriz
dispersa de entrada. A continuación hay $n$ líneas, cada una con las
casillas no nulas de la fila como pares `(col,val)` separados por
espacios, seguidos de un punto `.`. Las filas sin elementos no nulos se
representan como `.`.

## Salida

La matriz dispersa transpuesta en el mismo formato que la entrada: la
primera línea contiene las dimensiones $m \times n$ de la transpuesta,
seguida de $m$ líneas con las casillas no nulas de cada fila, seguidas
de un punto `.`.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:47:55.120Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
