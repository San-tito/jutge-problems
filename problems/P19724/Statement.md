***Jutge.org***\
The Virtual Learning Environment for Computer Programming

------------------------------------------------------------------------

 \
**El campanar de la Torrassa**

------------------------------------------------------------------------

ifnextchar ( ifnextchar (offsettrue(0pt,0pt) offsetfalse ifnextchar
\[(0pt,0pt)(0pt,0pt) ifnextchar
\[(0pt,0pt)(0pt,0pt)\[l\](0pt,0pt)(0pt,0pt)\[l\]\[\]
\[r\]![image](campanar.png){width="4.5cm"}

*El Campanar de la Torrassa* is the bell tower of a church of the
district of La Torrassa in the city of L'Hospitalet de Llobregat,
besides Barcelona. It is well known for continuously annoying its
neighbors with the sound of its bells. Day or night, the bells sound
every quarter in the traditional way: Suppose it is seven o'clock in the
afternoon. In this case, at 19:00 the treble bells sound four times and
the bass bells sound seven times. Then, at 19:15 the treble bells sound
once. Latter, at 19:30 the treble bells sound twice. Finally, at 19:45
the treble bells sound thrice. Additionally, every noon the bass bells
sound 100 times rather than 12 to signal the *Angelus*. Every time the
bells start playing, they always finish strictly within the next minute.

(In fact, this is a simplification, because on Saturdays, Sundays and
important dates extra bells are played to signal special masses, not to
count August the 15th, when bells play all day long.)

A non-governmental organization that fights against acoustic pollution
wishes to count the number of times that the bells sound in a large
amount of time. Specifically, they need a program that, given a starting
time ($h$:$m$) and a time length expressed in minutes $t$, computes the
number of times that the bells sound during this period.

## Input

Input consists of several cases, each with three integer numbers $h$,
$m$ and $t$. You can assume $0\le h\le 23$, $0\le m\le 59$ and
$0\le t \le2^{28}$.

## Output

For every case, print the number of times that the bells sound starting
at ($h$:$m$) for a length of $t$ minutes.

## Author

Jordi Petit

© Jutge.org, 2006--2025.

