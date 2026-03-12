# Búsqueda por Edad

Dado un vector de personas ordenado por edad (de menor a mayor), debes
encontrar el índice de la primera persona (la de índice más pequeño) en
el vector que tiene una edad dada.

Cada persona está representada por una estructura con su nombre y su
edad:

    struct Persona {
        string nom;
        int edat;
    };

El vector de personas está *ordenado por edad de forma creciente*, y
puede haber *varias personas con la misma edad*.

Debes hacer la **función** `cerca_per_edat`, que retorna el índice de la
primera persona con exactamente `anys` años de edad, o $-1$ si no hay
ninguna persona con esa edad.

    /**
     * @brief Encuentra el índice de la primera persona (con el índice mínimo)
     *        cuya edad es exactamente 'anys'.
     *
     * @returns Índice de la persona encontrada, o -1 si no hay ninguna.
     *
     * @pre   El vector de personas está ordenado por edad y puede tener
     *        varias personas con la misma edad.
     */
    int cerca_per_edat(const vector<Persona>& persones, int anys)

## Observación

El icono de nombre '.CPP' contiene el programa principal para hacer las
pruebas.

Sólo debes enviar un fichero que contenga la función requerida, con los
`include` necesarios y las funciones auxiliares que hayas declarado (si
las hay), y **nada más**.

Propón una solución utilizando **búsqueda binaria** para este ejercicio.
Cualquier otro tipo de solución implica la anulación **total** del
ejercicio, independientemente del veredicto del juez.

Para poder utilizar la estructura en la solución, debes copiar y pegar
el siguiente código:

    #ifndef PERSONA
    #define PERSONA

    struct Persona {
        string nom;
        int edat;
    };

    #endif

Para compilar conjuntamente los dos ficheros `solucion.cc` y `main.cc`,
debes ejecutar el comando: `g++ -o programa.exe main.cc solucion.cc`.

También puedes descargar el código de `main.cc`, implementar la función
ahí mismo, y luego borrar la función `main` y enviar el fichero
resultante.

## Entrada

Primero se lee un entero $n$ que indica el número de personas. Después
se leen $n$ líneas, cada una con el nombre y la edad de una persona. El
vector está ordenado por edad de forma creciente. A continuación, se
leen varios enteros, cada uno representando una edad a buscar.

## Salida

Para cada edad leída, se escribe el índice de la primera persona con
exactamente esa edad, o $-1$ si no hay ninguna persona con esa edad.

## Información del problema

Autoría: Pau Fernández

Generación: 2026-01-25T12:47:30.588Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
