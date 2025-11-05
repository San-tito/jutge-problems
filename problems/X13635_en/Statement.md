# Media Library (II)

A media library is a program used to organise digital audio on a
personal computer. Among many other functions, the user can access the
attributes of a song, such as: artist, title, genre and year. You have
to make a program supporting queries to the media library.

In particular, once the data available on the library has been read by
your program, a genre (e.g., *Rock*) can be introduced to retrieve all
the songs belonging to this genre, listed by artist, year and title
order.

Use the following program structure, which can not be changed:

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

**Exam score:** 2.5 **Automatic part:** 0%

## Input

The input consists of a number $n \geq 0$ followed by $n$ songs, each of
which consists of three strings (artist, title and genre) and an integer
(year). This is followed by a sequence of strings (genres).

## Output

For each genre in the input, print all the songs of that genre sorted by
artist and, within artist, by year, and then by title. Follow the format
of the test case.

## Author

Unknown

© Jutge.org, 2006--2025.

