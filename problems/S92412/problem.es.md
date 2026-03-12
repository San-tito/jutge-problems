# Ganadores

Suponiendo la declaración de la tupla `Player` siguiente

    struct Player { 
        string name; 
        int score;
    };

haz una función con la cabecera

    vector<string> winners(vector<Player>::iterator begin,
                           vector<Player>::iterator end);

que devuelva un vector con los jugadores con la puntuación máxima. Ten
en cuenta que puede haber varios.

## Entrada

La función recibe dos iteradores indicando principio y final de una
subsecuencia de un vector de jugadores. Esta subsecuencia puede tener
cualquier longitud, incluso estar vacía. La subsecuencia también podría
ser el vector entero.

## Salida

La función devuelve un vector con los nombres de los jugadores que
tienen a la vez la puntuación máxima en el mismo orden que se encuentran
en el vector original.

## Observación

En los archivos públicos (icono del gatito) encontrarás: `main.cc`,
`player.hh` (declaración de la tupla `Player`), `guanyadors.cc` (donde
debes implementar la función). También hay un `Makefile` y el directorio
`.vscode` que tiene la configuración para compilar y depurar con VSCode.

Debes implementar `winners` en el archivo `guanyadors.cc`, compilar
(está preparado para poder compilar y depurar con VSCode), y enviar solo
el archivo `guanyadors.cc`.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:46:56.556Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
