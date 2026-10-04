# Compensated words

Consider a word $s$ of length $n$, with only letters '`a`' and '`b`'.
For any prefix $p$ of $s$, let $a(p)$ be the number of '`a`' within $p$,
and let $b(p)$ be the number of '`b`' within $p$. In this problem, we
say that $s$ is compensated if and only if for every of the $n + 1$
prefixes $p$ of $s$ we have $\vert a(p) - b(p) \vert \le 2$.

For instance, "`abbaaabb`" is compensated, but "`abbaaaab`" is not,
because "`abbaaaa`" is a prefix with five '`a`' and two '`b`'. As other
examples, neither "`bbb`" nor "`bbbbbb`" are compensated.

Given an $n$, print all compensated words of this length.

## Input

Input consists of an $n$ between 1 and 18.

## Output

Print in alphabetical order all compensated words with $n$ characters
chosen between '`a`' and '`b`'.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T21:33:02.364Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
