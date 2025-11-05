# Poker

Anna and Bernat play now to poker with dice (in a simplified version).
In each turn, first Anna throws five poker dice, and then Bernat throws
them. Each die has 6 sides, with values (more to less): ace, king,
queen, jack, ten and nine. Each time wins who gets the highest move. In
the event of a tie, Anna wins.

These are the possible move, sorted from more to less value:

- Five-of-a-kind: 5 dice equal.

- Four-of-a-kind: 4 dice equal.

- Full house: 3 dice equal and two dice equal.

- Three-of-a-kind: 3 dice equal.

- Two pair: two dice equal and two dice equal.

- One pair: two dice equal.

- Nothing: All the dice different.

If the two players have the same move, wins who has obtained it with the
highest dice. Thus, for instance, a three-of-a-kind of aces wins a three
of a kind of kings, and a two pair of kings and nines wins a two pair of
queens and jacks.

If still there is a tie after using the dice of the most valuable
combination, the second combination is used to break the tie, and so
forth. For instance, a three-of-a-kind of jacks with a king wins to a
three of a kind of jacks with a queen, a two pair of kings and queens
wins to a two pair of kings and tens, a three-of-a-kind of jacks with a
king and a ten wins to a three-of-a-kind of jacks with a king and a
nine, and nothing with an ace and a king wins to a nothing with an ace
and a queen.

Write a program that reads the moves of each game, and decides who wins
each one, and computes how many games has won each one.

## Input

Input consists of several lines, each one with the throws of dice of a
turn (two strings with five characters each one between \|'A'\|,
\|'K'\|, \|'Q'\|, \|'J'\|, \|'T'\| and \|'N'\|, corresponding
respectively to an ace, king, queen, jack, ten and nine.

## Output

In each turn, print "`Anna`" or "`Bernat`" depending on who wins. At the
end, print the total number of won games for each one, following the
format of the instance.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

