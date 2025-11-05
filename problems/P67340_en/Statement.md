# F010B. Threatening bishops

Consider a rectangular chessboard where there are some bishops. A bishop
threatens to other one if both are in the same diagonal and there is not
any other bishop between them. We want to know all the threats between
bishops.

For instance, consider the following chessboard with 4 rows and 5
columns:

:::: center
::: pspicture
(6,5.5)

(1,1)(1,0)6(0,0)(0,4) (1,1)(0,1)5(0,0)(5,0)

(0.5 , 1.5 )4 (0.5 , 2.5 )3 (0.5 , 3.5 )2 (0.5 , 4.5 )1

(1.5 ,0.5 )1 (2.5 ,0.5 )2 (3.5 ,0.5 )3 (4.5 ,0.5 )4 (5.5 ,0.5 )5

(1.5 ,1.5 )X (3.5 ,3.5 )X (4.5 ,2.5 )X (4.5 ,4.5 )X (5.5 ,2.5 )X
:::
::::

The bishop of the position (3,5) has not any threat. The bishop of the
position (4,1) threatens the bishop of the position (2,3). The bishop of
the position (2,3) threatens to the bishops of the positions (4,1),
(1,4) and (3,4). The set of all the threats is:

$$\begin{array}{l}
(4,1)\leftrightarrow(2,3) \\
(2,3)\leftrightarrow(4,1) \\
(2,3)\leftrightarrow(1,4) \\
(1,4)\leftrightarrow(2,3) \\
(2,3)\leftrightarrow(3,4) \\
(3,4)\leftrightarrow(2,3)
\end{array}$$

Your task is to write a program that reads a chessboard with bishops and
writes all their threats.

## Input

The input starts with the number of rows and the number of columns of
the chessboard (two integers strictly positive). Afterwards, there is a
chessboard of the indicated size, with characters '\|X\|' to indicate
the bishops and dots to indicate the empty boxes.

## Output

For each threat of a bishop to the position $(r_1,c_1)$ to other bishop
in the position $(r_2,c_2)$, print a row with the text
"\|(\|$r_1$\|,\|$c_1$\|)\<-\>(\|$r_2$\|,\|$c_2$\|)\|". The positions are
numbered from top to bottom and from left to right, starting for 1.

## Observation

The order which you write the lines is irrelevant. The Judge will
consider as good any output that contains all the correct threats, with
independence of their order.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

