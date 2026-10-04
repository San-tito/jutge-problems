# Knight's game

Consider a chess board with $n$ rows (indexed $0$, $1$, $\ldots$, $n-1$
from top to bottom) and $m$ columns (indexed $0$, $1$, $\ldots$, $m-1$
from left to right). Each position of the board is determined by a pair
$(r, c)$, where $r$ is the index of the row and $c$ is the index of the
column.

Let us define the following game. We begin with a knight (see the figure
to recall how it moves) at the upper left corner. Given a sequence of
goal positions of the board $p_{1}$, $p_{2}$, \..., $p_{k}$, we have to
move the knight to goal position $p_{1}$ doing knight jumps; from there
we have to get to goal position $p_{2}$, doing knight jumps; and so on
until getting to the last goal position $p_{k}$. For each goal we reach,
we get $W$ points. But for each knight jump we do, we lose $L$ points.
The match is over when the next goal position cannot be reached, or we
decide to stop moving. What is the maximum score that we can get if we
play optimally?

![image](knight.png){width="9cm"}

## Input

Input contains different cases, only with integer numbers. Each case
starts with $n$ and $m$, followed by $W$ and $L$. Finally, we have $k$
and the $k$ goal positions represented by pairs of integers $r_{i}$
$c_{i}$ separated by blank spaces, where $0 \leq
r_{i} < n$ and $0 \leq c_{i} < m$. It holds that $2 \leq n, m \leq
5000$, that $n \cdot m \leq 10^{4}$, that $1 \leq W, L \leq 100$ and
that $1 \leq k \leq \min(n \cdot m, 1000)$.

## Output

For each case, write in a line the maximum score that can be achieved if
we play optimally.
