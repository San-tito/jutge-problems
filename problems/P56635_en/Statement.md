# Rectangles (1)

In a popular manager of windows, the following definition is used to
mantain the information of the visible windows in the screen of the
computer:

        struct Rectangle {
            int x_left, x_right, y_down, y_up;
        };

Here, the rectangles have the parallel sides in the axes \@x@ and \@y@,
and \@x_left@, \@x_right@, \@y_down@ and \@y_up@ are respectively the
minimal horitzontal coordenate, the maxmal horitzontal coordenate, the
minimal vertical coordenate, and the maximal vertical coordenate of each
rectangle.

Write a procedure that reads a rectangle:

        void read(Rectangle& r);

which is given in the input with the four integer numbers \@x_left@,
\@x_right@, \@y_down@ and \@y_up@ in this order.

Write also a function that indicates the relationship that have two
given rectangles \@r1@ and \@r2@:

        int relationship(const Rectangle& r1, const Rectangle& r2);

that must return 1 if \@r@ is inside \@r2@, 2 if \@r2@ is inside \@r1@,
3 if none is inside the other one but the rectangles intersect, 4 if the
rectangles are identical, and 0 otherwise (if the rectangles do not have
ay point in common).

Suppose that two rectangles intersect even if they coincide only in a
segment or a point. Moreover, suppose that all the rectangles are
correctly formed, that is, that \@x_left@ is strictly smaller than
\@x_right@, and that \@y_down@ is srictly smaller than \@y_up@.

Use these definitions and procedures to write a program that reads a
series of pairs of rectangles, and for each one prints which
relationship have.

## Input

Input consists of a natural $n$, followed by $n$ lines, each one with
two rectangles (eight integer numbers).

## Output

For each pair of rectangles, print their relationship as it is shown in
the examples.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

