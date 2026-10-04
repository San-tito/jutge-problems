# Donations

*To solve this problem you have to complete the code that you will find
at the end of the statement. You have to replace each ??? with one or
more lines of code. **Do not change anything else.** Download from the
website of the problem the file code.cc with the code to be completed
(click on the corresponding button ".CPP"), edit it and submit it to the
judge.*

We want to keep basic information about the money donations to a
hospital. In particular, we want to store the total money donated by
each person, which is uniquely identified with his or her nif (8 digits
followed by an uppercase control letter).

The program allows us to do five different operations:

- `N`: It prints the number of donors preceded by "`number:`". Note that
  there may be fewer donors than donations, if there are repeated
  donors.

- `D` $n$ $m$: It stores that the donor with nif $n$ has given $m$
  money. If the person already made a donation, the amount is
  accumulated.

- `Q` $n$: This query prints the money given for the moment by the
  person with nif $n$. It prints -1 if the person has not made any
  donation yet.

- `P`: It prints a line with all nifs ending in an even digit (ignoring
  the control character), with nifs sorted alphabetically. It separates
  nifs with spaces.

- `L`: It prints the information of the donor with the alphabetically
  largest nif. If there is none, it prints "`NO LAST NIF`".

## Input

Input consists of several operations as indicated above. Nifs are
correct, and donations are strictly positive integer numbers.

## Output

For each operation (except donations), print the requested information.
It is guaranteed that the maximum accumulated donation will not be
greater than $10^9$.

    #include <iostream>
    #include <map>
    using namespace std;


    int main() {
      map<string, int> M;
      char c;
      while (cin >> c) {
        if (c == 'N') {
          ???
        }
        else if (c == 'D') {
          string nif;
          int money;
          cin >> nif >> money;
          ???
        }
        else if (c == 'Q') {
          string nif;
          cin >> nif;
          ???
        }
        else if (c == 'P') {
          ???
        }
        else { // c == 'L'
          ???
        }
      }
    }

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T14:23:33.910Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
