# Slides

A *slide* is a sequence of integers of at least three elements such that
the difference $d$ between every two consecutive elements is the same
and is different from 0. The *slope* of the slide is $d$, and the
*length* of the slide is the number of elements in it. Slides are
*ascending* when $d > 0$ and *descending* when $d < 0$.

For example, the following sequences are all slides:

- 1 2 3, with slope 1 and length 3;

- 5 10 15 20, with slope 5 and length 4;

- -11 -22 -33 -44 -55, with slope -11 and length 5.

The goal of the exercise is, given a sequence of integers as input, to
find the longest consecutive subsequence that is an ascending slide, and
the longest consecutive subsequence that is a descending slide. If there
is more than one ascending slide with the same maximum length, the first
one should be reported, and the same applies to descending slides.
Additionally, we are interested in knowing at which position (which
element of the entire input sequence) the slide begins, counting the
position of the first element as 1.

## Input

A sequence of integers without a sentinel. It is guaranteed that the
sequence has at least two elements.

## Output

The output must contain one line for each type of slide (ascending and
descending). If no slides of either type have been found, the
corresponding line should not be written. The line contains a character
(\"`/`\" for ascending and \"`\`\" for descending), a space, and then 3
numbers separated by \"`:`\": the starting position of the longest
slide, its slope, and its length.

## Problem information

Author: Unknown\
Translator: PRO1

Generation: 2026-02-23T17:08:24.127Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
