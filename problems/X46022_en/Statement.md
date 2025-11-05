# How many games does each person win?

With the aim of doing something in favor of harmony and solidarity for
the peoples in the world, and to show that there are better ways to
solve conflicts, a multinational company has decided to organize a
ping-pong (table tennis) tournament between two teams, one consisting of
Russian employees, and another consisting of employes from the USA.

There are $n$ players on each team. Each player plays two matches
against each member of the other team. Therefore, in total each player
will play $2n$ ping-pong matches.

Actually, we can predict in advance how many matches each player will
win, since we know the level of each employee as a ping-pong player. Any
employee always wins the two matches against any other with an inferior
level. In contrast, when someone plays with another player of the same
level, then he/she wins exactly one of the two matches, therefore
loosing the other.

## Input

The input consists of several cases. Each case starts with a natural
number $n$ in one line. The second line contains a list of $n$ pairs
(string, natural number) with name and level of each of the Russian
players. The third line, with the same format, lists the USA players.
Finally, there is a blank line.

## Output

For each case, the output has two lines. In the first, there is a list
of $n$ pairs (string, natural number) showing the name and number of
matches won by each of the Russian players. The names have to go in the
order in which they were read from the input. A second line contains the
same information and with the same format but for the USA players. After
that, a blank line comes.

## Observation

Evaluation over 10 points:

- Slow solution: 5 points.

- Fast solution: 10 points.

A fast solution is correct, has cost $n\log(n)$ and passes both public
and private test cases. A slow solution is not fast, but it is correct
and passes the public test cases.

## Author

PRO1

© Jutge.org, 2006--2025.

