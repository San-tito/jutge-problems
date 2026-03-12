# Bounding rectangle

Using the definitions

        typedef vector<char> Row;
        typedef vector<Row> Rectangle;

write a procedure

        void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols);

that computes the number of rows \@rows@ and the number of columns
\@cols@ of the smallest subrectangle with horizontal and vertical sides
that contains all the occurrences of \@c@ in \@r@.

## Precondition

The character \@c@ occurs at least once in \@r@, which is really a
rectangle. That is, all rows have the same number of characters.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T11:59:51.643Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
