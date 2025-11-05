# Othello

Othello (also known as Reversi) is a strategy game for two players on an
$8\times8$ board with pieces that have a black side and a white side.
The game starts with four pieces placed diagonally on the center of the
board:

![image](1.png){width="3.2cm"}

The game proceeds by turns, the black player to play first. He has to
place a black piece on the board, so that exists at least one straight
line (horizontal, vertical or diagonal) between this black piece and
another black piece, with one or more white pieces among them. For
example, in the initial situation, the shaded positions are playable:

![image](2.png){width="3.2cm"}

After placing a piece, the black player turns all the white pieces that
are surrounded between his new piece and any other black piece, in the
eight possible directions. All the turned pieces now show their black
side. Thus, if the black player decides to place his piece in the
highest position of the board, one piece is turned and we get the
following board:

![image](3.png){width="3.2cm"}

Now it is the turn of the white player. He must follow the same rules,
with the roles of white and black interchanged. In the example, the
white player has the following possibilities:

![image](4.png){width="3.2cm"}

If the white player decides to play at the bottom-left possible
position, he turns one piece and the position of the board is:

![image](5.png){width="3.2cm"}

When a player cannot make any valid move, he loses his turn. When no
player can make a valid move, the game is finished. This can happen when
the whole board has been filled in, or when no player can place a piece
in a free square. At the end of the game, the player with more pieces of
his color wins the game.

Write a program that reads the movements of a (perhaps unfinished) game,
and prints the several positions of the board.

## Input

Input begins with the the size of the board $n\ge4$, with $n$ even.
Follow the movements (all them legal) of a game. Each movement is
described with a letter ('`B`' for white, or '`N`' for black) to
indicates the player who made it, and the row and column (between 1 and
$n$) of the movement. When a player cannot play, his movement is not
given.

## Output

Print the board at the beginning of the game, and after every movement.
Print the current number of black and white pieces after every board.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

