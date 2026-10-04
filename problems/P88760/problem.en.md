# Lake of the Dragon God

The *Lake of the Dragon God* is one of the most mythical challenges of
the contest. A river must be crossed by jumping from rock to rock, but
be careful! Some rocks are fake and sink!

![image](roques.svg){width="8cm"}

There are $n$ true rocks, all round, with centre $(x_i, y_i)$ and radius
$r_i$. The maximum distance that a contestant can jump is $d$ (measuring
it from the border of the rocks). Your task is to compute the minimum
number of jumps to go from the first rock to the last one without
falling into the water. If it is impossible, state so.

## Input

Input consists of several cases. Each case starts with the number of
rocks $n \ge 2$ and the jump distance $d > 0$. Follow $n$ triples of
real numbers $x_i$, $y_i$ and $r_i$, describing each rock.

## Output

For each case of the input, print in a line the minimum number of jumps
to go from the first of the given rocks to the last one, by making jumps
non larger than $d$, or "`Xof!`" if it is impossible.

## Observations

- The test cases will never contain overlapped rocks, nor any exact jump
  that could cause an error because of precision issues.

- The picture shows the rocks of the sample test cases.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-02-13T09:13:33.523Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
