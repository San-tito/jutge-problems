# Cruises

*To solve this problem you have to complete the code that you will find
at the end of the statement. You have to replace each ??? with one or
more lines of code. **Do not change anything else.** Download from the
website of the problem the file code.cc with the code to be completed
(click on the corresponding button ".CPP"), edit it and submit it to the
judge.*

A travel agency maintains a cruise ship catalog for its customers. For
each cruise, we only store one code to indicate where the ship is going,
the length of the trip and what is its price. Because the agency is very
modest, it does not keep information on more than one cruise ship of
each length. Codes and prices can be repeated.

The agency program allows us to do five different operations:

- `n`: It prints the number of stored cruises preceded by "`num:`".

- `u` $c$ $\ell$ $p$: It updates some cruise information. It stores that
  a cruise with code $c$, length $\ell$, and price $p$ is available. If
  there is already a cruise ship of that length, it updates its
  information.

- `q` $\ell$: This query prints the price of the cruise ship with length
  $\ell$. If there is none, it prints -1.

- `p`: It shows a list of all available cruises, sorted by length. It
  prints a line by cruise, with code, length and price in that order. It
  prints a line with 10 dashes above, and a line with 10 asterisks
  below.

- `s`: It prints full details of the second shortest cruise. If there is
  no such cruise, it just prints "`no`".

## Input

Input consists of several operations as indicated above. Codes are
lowercase words. Lengths and prices are integer numbers between 1 and
$10^9$.

## Output

For each operation (except update operations), print the requested
information.

    #include <iostream>
    #include <map>
    using namespace std;


    struct Info {
      string code;
      int price;
    };


    int main() {
      map<int, Info> M;
      char c;
      while (cin >> c) {
        if (c == 'n') {
          ???
        }
        else if (c == 'u') {
          string code;
          int length, price;
          cin >> code >> length >> price;
          ???
        }
        else if (c == 'q') {
          int length;
          cin >> length;
          ???
        }
        else if (c == 'p') {
          cout << string(10, '-') << endl;
          ???
          cout << string(10, '*') << endl;
        }
        else { // c == 's'
          ???
        }
      }
    }

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T15:23:59.676Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
