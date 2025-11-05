***Jutge.org***\
The Virtual Learning Environment for Computer Programming

------------------------------------------------------------------------

 \
**Poker hand**

------------------------------------------------------------------------

Write a **function** that given 3 Poker cards returns a description (a
`string`) of the hand they represent. The description must be one of the
following four possibilities: \"Trio of Aces!\", \"Trio\", \"Pair\", or
\"All cards different\".

The cards are one of the following 13 characters: `A`, `2`, `3`, \...,
`9`, `0`, `J`, `Q`, `K`. There are two characters worth explaining: the
card `A` is the Ace and represents 1, as in normal decks, and the digit
`0` represents 10, to simplify reading.

The function header is, exactly:

    /**
    * @pre c1, c2, c3 in {A, 2, 3, ..., 8, 9, 0, J, Q, K}
    * @post Returns "Trio of Aces!", "Trio", "Pair", or 
    *       "All cards different" according to c1, c2, and c3.
    */
    string poker_hand(char c1, char c2, char c3);

## Observation

You only need to submit the requested function; the main program will be
ignored.

## Author

PRO1

© Jutge.org, 2006--2025.

