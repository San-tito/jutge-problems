# Incompatible species

Consider $n$ different species. Some may be incompatible, in the sense
that they must be kept separated. For example, if the species were
human, lion, gorilla, buffalo and antelope, then the list of
incompatibilities might be: we cannot put a human next to a lion, nor a
human next to a buffalo, nor a lion next to a buffalo, nor a lion next
to a antelope.

Write a program that reads the incompatibilities between species, and
writes all the ways to put in a row an individual of every species, so
that two incompatible species are never one beside the other.

## Input

Input begins with a number $n$ between 1 and 52, followed by $n$
letters, each identifying a different species. Then comes a number $m$,
followed by $m$ different pairs of letters, each indicating an
incompatibility between two of the $n$ given species.

The first sample input corresponds to the example given above. "`HL`"
means that we cannot put a human next to a lion, etc. Note that "`LH`"
would mean exactly the same.

## Output

Print all the ways of placing $n$ individuals in a row, one of each
species, so that incompatible species are not together.

## Information about the checker

You can print the solutions to this exercise in any order.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T10:32:31.167Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
