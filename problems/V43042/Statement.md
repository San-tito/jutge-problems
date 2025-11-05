# Consecutive N-Poker

We have a sequence of Poker cards, and we want to know if at any point
in the sequence there are $N$ consecutive identical cards (an
\"N-Consecutive Poker\"). Write a **program** that reads a sequence of
cards and determines whether the sequence has $N$ consecutive identical
cards.

## Input

The input begins with a natural number $N$, with $N > 0$. Then comes a
sequence of characters representing the cards in the sequence. As in the
problem \"Poker Hand\", the characters for the cards are `A` for 1, `2`,
`3`, `4`, `5`, `6`, `7`, `8`, `9`, `0` for 10, `J`, `Q`, and `K`. It is
guaranteed that the sequence of cards has at least one card.

## Output

Write \"$N$-Poker of $x$!\" if the sequence has $N$ consecutive cards of
the same value $x$. Otherwise, write \"No $N$-Poker\". For example, if
$N$ is 7, and we find 7 repetitions of the card K, the output will be
\"7-Poker of K!\", but if there is no such repetition, the output will
be \"No 7-Poker\". The output only shows the first consecutive $N$-Poker
found, with its corresponding $x$, even though there might be more
consecutive $N$-Pokers in the sequence.

## Observation

In this problem, you need to process the input character by character.
If you use `string`s or any method to store the data, the problem will
be considered invalid. Also, keep in mind that the sequence comes from
an unlimited source of cards, so no maximum length can be assumed.

## Author

PRO1

© Jutge.org, 2006--2025.

