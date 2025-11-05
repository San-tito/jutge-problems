# Better Card

Write a **function** that, given two Poker cards, returns `true` if the
value of the first card is higher than the value of the second card. The
cards are from the usual Poker deck, represented by one of the following
13 characters: `A`, `2`, `3`, \..., `9`, `0`, `J`, `Q`, `K`. There are
two special characters: the card `A` is the Ace and is equivalent to 1,
as in normal decks, and the digit `0` represents 10, for simplicity.
Note that the cards identified by a letter are always uppercase.

The values of the cards are as follows: the numeric cards have the value
indicated by their number. The card `0` will have the value 10, as it
represents the card 10. Next, the `J` is worth 11, the `Q` is worth 12,
and the `K` is worth 13. The `A` would be worth 1, but in this problem,
we will consider it to have the highest value (as is often the case),
and it will be 14.

The function header is exactly:

    /**
     * @pre c1, c2 in {A, 2, 3, ..., 8, 9, 0, J, Q, K}
     * @post Returns true if c1 has a higher value than c2
     */
    bool better_card(char c1, char c2);

## Observation

You only need to submit the requested function; the main program will be
ignored.

## Author

PRO1

© Jutge.org, 2006--2025.

