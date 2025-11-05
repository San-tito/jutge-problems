# Tennis tournament

Consider a tennis tournament with $m$ participants with names
$x_1, x_2, \dots, x_m$, where $m$ is a power of two. In the first round
$x_1$ plays against $x_2$, $x_3$ plays against $x_4$, ..., and
$x_{m - 1}$ plays against $x_m$. The players that lose are eliminated,
and the process is repeated with the remaining players. When only a
player remains, this is the winner of the tournament.

For instance, let $m = 8$, and suppose that in the first round $x_1$
defeats $x_2$, $x_3$ loses against $x_4$, $x_5$ defeats $x_6$, and $x_7$
defeats $x_8$. In the second round $x_1$ plays against $x_4$ (suppose
that $x_4$ wins), and $x_5$ plays against $x_7$ (suppose that $x_7$
wins). In the third and last round $x_4$ plays against $x_7$. Assuming
that $x_4$ wins, this is the champion. The following figure shows the
championship just described:

![image](tennis1.png){width="6cm"}

Write a procedure that, given the names of the players and the table of
results, returns the name of the winner of the tournament:

        string winner(const vector<string>& name, const vector<bool>& win);

The vector \@name@ has size $m$, where $m$ is any power of 2. For each
\@j@ between 0 and $m - 1$, we have \@name\[j\]@ $= x_{\mbox{j} + 1}$.
All the names are different.

For instance, this could be the table of names of the tournament
previously described:

![image](tennis2.png){width="10cm"}

The vector \@win@ has size $m - 1$ and contains all the results of the
matches: the first round is stored in the last $m/2$ positions, the
second round is stored in the $m/4$ previous positions, the third round
is stored in the $m/8$ previous positions, ..., and the result of the
last round (the final) is stored in \@win\[0\]@. The boolean of each
position indicates if the first player (the one with the smallest index)
has won against the second one.

This would be the table of results of the tournament previously
described:

![image](tennis3-en.png){width="10cm"}

For the example tournament, the answer should be "`Borg`".

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

