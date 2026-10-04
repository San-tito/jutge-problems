# Diamonds

A very rich prince has exactly $n$ diamonds. Each diamond
$1 \le i \le n$ has a certain value $v_i$. Tradition says that, before
getting married, the prince has to give a present of value exactly $V$
to his princess. The prince wants to give her exactly two of his
diamonds, but he does not know how to decide *quickly* if he can do it
or not. Can you help to this stupid?

For instance, if $n=6$ and the value of the diamonds is
$5, 8, 6, 2, 6, 20$, then it is possible to give a present of value
$V=10$ ($8+2$) or a present of value $V=12$ ($6+6$), but it is
impossible to give a present of value $V=9$.

## Input

Input consists of several cases. Each case begins with the gift value
$V$ (a natural number between 1 and $10^8$) and the number $n$ of
diamonds (a natural number between 1 and $10^5$) in this order. Then
come $n$ natural numbers between 1 and $10^8$ indicating the value of
each diamond. A case with $V = n = 0$ marks the end of the input.

## Output

For each case, print a line with "`married`" or "`single`" depending on
whether the prince can give the present or not.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T11:49:59.968Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
