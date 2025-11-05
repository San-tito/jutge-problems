# F006B. Manhattan distance

8cm

The Manhattan distance between two points with integer coordinates in a
plane is described as the number of unit steps towards up, down, left or
right that you must do to go from a point to the other one. (It has this
name because is the number of blocks that is necessary to walk in a
squared neighborhood to go from a junction to another one.)

For instance, consider the point (1, -2) of the figure on the right (the
biggest). The nearest point is (2, -3), that it is in a distance 2. The
farthest point is (-2, 1), that it is in a distance 6. Except that
(2,2), the rest of points are in a distance 4.

Your task is to write a program that, given a point $(x, y)$ and $n$
points $(x_1, y_1), \dots, (x_n, y_n)$, prints these points sorted
depending on their Manhattan distance to $(x, y)$.

::: picture
(205, 230)(-85, -140) (-80, 0)(1, 0)200 (115, 5)$x$ (0, -140)(0, 1)200
(5, 55)$y$

(-80, -2)(0, 1)4 (-60, -2)(0, 1)4 (-40, -2)(0, 1)4 (-20, -2)(0, 1)4 (20,
-2)(0, 1)4 (40, -2)(0, 1)4 (60, -2)(0, 1)4 (80, -2)(0, 1)4 (100, -2)(0,
1)4

(-2, -140)(1, 0)4 (-2, -120)(1, 0)4 (-2, -100)(1, 0)4 (-2, -80)(1, 0)4
(-2, -60)(1, 0)4 (-2, -40)(1, 0)4 (-2, -20)(1, 0)4 (-2, 20)(1, 0)4 (-2,
40)(1, 0)4

(20, -40) (25, -43)(1, -2) (40, -60) (45, -63)(2, -3) (20, -120) (25,
-123)(1, -6) (100, -40) (105, -43)(5, -2) (-60, -40) (-55, -43)(-3, -2)
(-40, -20) (-35, -23)(-2, -1) (-40, 20) (-53, 25)(-2, 1) (40, 40) (45,
37)(2, 2) (60, 0) (47, 5)(3, 0)

(20, -45)(0, -1)4 (20, -51)(0, -1)4 (20, -57)(0, -1)3 (20, -60)(1, 0)3
(25, -60)(1, 0)4 (31, -60)(1, 0)4

(20, 20)(0, -1)4 (20, 14)(0, -1)4 (20, 8)(0, -1)4 (20, 2)(0, -1)4 (20,
-4)(0, -1)4 (20, -10)(0, -1)4 (20, -16)(0, -1)4 (20, -22)(0, -1)4 (20,
-28)(0, -1)4 (20, -34)(0, -1)2

(20, 20)(-1, 0)4 (14, 20)(-1, 0)4 (8, 20)(-1, 0)4 (2, 20)(-1, 0)4 (-4,
20)(-1, 0)4 (-10, 20)(-1, 0)4 (-16, 20)(-1, 0)4 (-22, 20)(-1, 0)4 (-28,
20)(-1, 0)4 (-34, 20)(-1, 0)2
:::

## Input

The input consists of integer numbers, and it is formed by one line with
$x$ and $y$, one line with $n$, and one or more lines with the
coordinates of the $n$ points: $x_1, y_1, x_2, y_2, \dots, x_n, y_n$.
You can suppose $0 \le n \le 10^5$. The $n$ points are different, and
they can be in any order.

## Output

Your program must print according to their distance to $(x, y)$. If two
points are at the same distance, print first the one that has the first
coordinate smaller and, in the event of draw, the one that has the
second coordinate smaller. Follow the format of the instance.

## Observation

Your algorithm must be efficient in all the cases, because $n$ can be
huge, and because the private test data will include borderline cases,
like a lot of points at the same distance.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

