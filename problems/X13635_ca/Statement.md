# Mediateca Digital (II)

Una mediateca digital és un program que s'usa per organitzar la música
que hi ha a un ordinador. Entre moltes de les seves funcions, l'usuari
pot accedir a les característiques d'una cançó, com per exemple:
artista, títol, gènere i any. Cal fer un programa que permeti obtindre
informació de la mediateca digital.

En concret, un cop les dades de la mediateca digital han sigut llegits
pel programa, un gènere (per exemple, *Rock*) pot ser introduit per
llistar totes les cançons que corresponen a aquest gènere, ordenades per
artista, any i títol.

Utilitza la següent estructura de programa, que no pot ser canviada:

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

**Punts examen:** 2.5 **Part automàtica:** 0%

## Entrada

L'entrada consisteix en un nombre $n  \geq 0$ seguit de $n$ cançons,
cadascuna descrita amb tres strings (artista, títol i gènere) i un enter
(any). Després ve una llista d'strings (gèneres).

## Sortida

Per cada gènere a l'entrada, llistar totes les cançons d'aquest gènere
ordenades per artista, i dins del mateix artista, per any i finalment
per títol. Segueix el format dels jocs de proves.

## Autor

Unknown

© Jutge.org, 2006--2025.

