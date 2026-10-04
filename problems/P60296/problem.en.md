# Role classification

Simulate a server of a role-playing game for two players. Each player
has an "elo", which is a value larger the better is the player. Everyone
starts with 1200 points, and nobody ever gets a lower quantity, no
matter how many games are lost. Whenever there is a match, the winner
gets 10 elo points, and the loser loses 10 elo points (with the
limitation above). The elo of a player is kept when he or she
disconnects from the server.

We have these instructions:

- "`LOGIN`" $j$ : The player $j$ starts a session. Ignore it if the
  player is already connected.

- "`LOGOUT`" $j$ : The player $j$ closes the session. Ignore it if the
  player is not connected.

- "`PLAY`" $j_1 \enspace j_2$ : Indicates that $j_1$ has beaten $j_2$,
  with $j_1 \ne j_2$. Ignore it but print an error message if any of the
  two players is not connected.

- "`GET_ELO`" $j$ : Print the player $j$ (who was connected for sure
  previously, although now may be disconnected) with his or her current
  elo.

## Input

Input consists of several instructions for at most $10^5$ players. Each
player's name is different and made up of only lowercase letters.

## Output

For every instruction "`GET_ELO`" (and perhaps "`PLAY`") print the
proper output. At the end, print an empty line, the word "`RANKING`",
and a ranking sorted in decreasing order by elo (if there is a tie,
print first the alfabetically smallest name) with all the players ever
connected to the server.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:05:45.497Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
