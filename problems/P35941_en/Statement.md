# The Gold-Bug

Consider a text made up of only lowercase letters, which is encrypted
with one of the easiest methods: each letter has an associated character
that is always written in its place. Given the translation table and the
text encrypted with this table, recover the original text.

## Input

Input consists of several cases separated by an empty line. Every case
has three parts. The first one is a line with the translation table: 26
different characters (with no spaces nor '`_`'), the first one
corresponding to '`a`', the second one to '`b`', ..., and the last one
to '`z`'. The second part is a number $n > 0$ in a line. The third part
consists of $n$ encrypted lines of text.

## Output

For each case, write the original text, also with $n$ lines. Change each
'`_`' of the encrypted text for a space. Write an empty line at the end
of each case.

## Observation

The first example is (basically) extracted from the story "The Gold-Bug"
of Edgar Allan Poe. The second text is a famous quotation of Donald
Knuth.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

