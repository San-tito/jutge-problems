# F005B. Russian dolls

![image](Matroshka.png){width="3cm"} The Russian dolls are a Russian
*souvenir* that consist of a succession of dolls, of decreasing sizes,
each (except the first) inside the previous one.

Your task is to write a program that, for each rectangle set given,
decides if they are like Russian dolls, that is, if for each pair of
rectangles one of them is inside the other.

The three first input instances correspond to the following figures.
Only the one on the left is a Russian doll.

To solve this problem, you must use the following definition of
rectangle:

        struct Rectangle {
            int east, west, north, south;
        };

(For instance, the rectangle on the top and on the right has the values
25, 21, 9 and 2.)

Using this defition, you must implement and use the function

        bool is_included(const Rectangle& a, const Rectangle& b);

that indicates if the rectangle `a` is strictly included (that is,
without equality in any of the coordinates) inside the rectangle `b` or
it is not.

## Input

The input consists of a sequence of cases separated with an empty line.
Each case starts with a natural number $n \ge 1$, followed by $n$
rectangles with the sides parallel to the horizontal and vertical axes.
Each rectangle is defined with four integer coordinates: east, west,
north and south. In each case, there will not be horizontal or vertical
coordinates repeated.

## Output

For each case, if they are Russian dolls, your program has to print the
rectangles from large to small. Otherwise, it has to print
`"They are not Russian dolls"`. Separate each output case with an empty
line.

## Observation

Your program has to be efficient. In particular, quadratic solutions in
$n$ will be rejected by the Judge or in the manual correction.

## Author

Professorat de P1

© Jutge.org, 2006--2025.

