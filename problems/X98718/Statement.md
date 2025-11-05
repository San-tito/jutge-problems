# First repeated subword of size 3

Implement a program such that, given a sequence of characters from
`{a,b}`, tells which one is the first subword of size 3 which is
repeated if we read the input from the beginning, and on what position
this first repetition takes place (positions are assumed to be indexed
starting from 0).

We consider repetitions including overlappings. For exmple, in the
sequence `ababa`, the subword `aba` has size 3 and is repeated for the
first time at position 2.

It is guaranteed that there will be at least one repetition of a subword
of size 3.

## Input

The input contains only one line with a consecutive sequence of
characters from `{a,b}`. It is guaranteed that at least one subword of
size 3 occurs twice or more in the input sequence.

## Output

The output contains the first subword of size 3 which is repeated, and
the position of the first character of the first repetition (indexing
positions from 0). These data must be printed on one line and separated
by a white space.

## Observation

Do not use `strings` nor any other massive data storage method. Read and
treat the input character by character. Please, try to avoid carrying on
reading the input when that is no longer necessary.

## Author

PRO1

© Jutge.org, 2006--2025.

