# Card Repetitions

Write a **program** to report the *consecutive repetitions* in a
sequence of Poker cards. The goal is to detect consecutive subsequences
of identical cards, of length $k \geq 2$, and write to the output a
phrase describing each subsequence using the typical Poker names. We
will consider 4 cases: \"Pair\" ($k = 2$), \"Trio\" ($k = 3$), \"Poker\"
($k = 4$), and longer repetitions ($k > 4$). If a card does not appear
repeated in the sequence, nothing needs to be written. There's no need
to consider overlapping, only the longest consecutive subsequences have
to be reported.

## Input

The input consists of a sequence of characters representing the cards.
As in the problem \"Better Card\", the characters for the cards are `A`,
`2`, `3`, \..., `9`, `0`, `J`, `Q`, and `K`. The sequence of cards ends
with a period, i.e., the character `'.'`, and it can be empty.

## Output

You must detect the consecutive repetitions of cards and write to the
output the description corresponding to the number of times $k$ that the
card $C$ has been repeated: \"Pair of $C$s\", \"Trio of $C$s\", \"Poker
of $C$s\" or \"$k$ $C$s!\". Each description should be on a different
line and in the order in which they appear in the input sequence. Refer
to the public test cases for concrete examples.

## Observation

In this problem, the input must be processed character by character; if
you use `string`s or any method to store the card sequence, the problem
will be considered **invalid**. Also, note that the sequence is supposed
to come from an unlimited source of cards, so no maximum length can be
assumed.

## Author

PRO1

© Jutge.org, 2006--2025.

