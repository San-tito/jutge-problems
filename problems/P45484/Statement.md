# Magic square

A *magic square* of order $n$ is an arrangement of the integer numbers
$1$ to $n^2$ in a $n\times n$ square where the sum of the numbers of
each row, of each column, and that of the two main diagonals are the
same. The following figure shows two instances of magic squares of order
3 and 6:

                                      28  4   3   31  35  10
                    4  9  2           36  18  21  24  11  1
                    3  5  7           7   23  12  17  22  30
                    8  1  6           8   13  26  19  16  29
                                      5   20  15  14  25  32
                                      27  33  34  6   2   9

Magic squares have been often used as talismans, to help in the
childbirths, to prevent bites of insects or to cure illnesses. Many
magic squares have been found engraved in plates, glasses, medallions or
monuments. For instance, you can find another magic square in the west
façade of the Sagrada Família of Gaudí.

Write a function

        bool magic_square(const vector< vector<int> >& t);

that, given a table \@t@ of $n\times n$ integer numbers, prints whether
it represents a magic square or not.

## Precondition

The table \@t@ is square.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

