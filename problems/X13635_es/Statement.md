# Mediateca Digital (II)

Una mediateca digital es un programa que se usa para organizar la música
que hay en un ordenador. Entre muchas de sus funciones, el usuario puede
acceder a las características de una canción, como por ejemplo: artista,
título, género y año. Debéis hacer un programa que permita recabar
información de la mediateca digital.

En particular, una vez los datos de la mediateca digital han sido leídos
por el programa, un género (por ejemplo, *Rock*) puede ser introducido
para listar todas las canciones que corresponden a este género,
ordenadas por artista, año y título.

Debéis usar la siguiente estructura de programa, que no puede ser
cambiada:

    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    struct Track {
      string artist, title, genre;
      int year;
    };

    ....
    ....

    vector<Track> read_tracks(int n) {
      ....
      ....
    }

    void print_track(const Track &t) {
      cout << t.artist;
      cout << " (" << t.year;
      cout << ") " << t.title << " (" << t.genre << ")" << endl;
    }

    int main() {
      ....
      ....
    }

**Puntos examen:** 2.5 **Parte automática:** 0%

## Entrada

La entrada consiste en un número $n \geq 0$ seguido de $n$ canciones,
cada una descrita con tres strings (artista, título y género) y un
entero (año). Después viene una lista de strings (géneros).

## Salida

Para cada género en la entrada, listar todas las canciones de ese género
ordenadas por artista, y dentro del mismo artista, por año y finalmente
por título. Sigue el formato de los juegos de pruebas.

## Autor

Unknown

© Jutge.org, 2006--2025.

