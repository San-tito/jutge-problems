# Football League

After many setbacks, the Catalan Football Federation has succeeded in
organizing the Catalan National Football League and has asked the FIB to
help them with the management of the season's results data.

Specifically, you must write a **program** such that given an integer
$n \geq 2$ and $n$ **different** names of Catalan football teams and
then an indeterminate number of results in the form of quadruples:

$$team_1 ~~ goals_1 ~~ team_2 ~~ goals_2$$

which represent the result of a match, calculate the final
classification taking into account that the order is given by:

1.  The number of points (match won: 3 points, match tied: 1 point).

2.  In case of a tie on points, the team with the best goal difference
    (difference between goals scored and goals conceded) goes first.

3.  In case of a tie in both previous cases, the team with the
    **smallest** team name in lexicographical order.

To make this program **you** need to use this structure:

    struct Equip
    {
        string nom;
        int gols_favor;
        int gols_contra;
        int guanyats;
        int empatats;
    };

## Observation

The number $n \geq 2$ of teams does not necessarily have to be even.
Similarly, the matches that will be played do not necessarily have to be
all possible (that is, all against all at home and away).

Although it is irrelevant to your program, a match cannot appear more
than once, not even with different results.

Only teams that appeared in the initial list of $n$ teams will appear in
a match.

You cannot use the `sort` operation from the `stl` library. If you need
to sort any vectors, you have to program it yourself. And if so, any of
the sorting methods you have studied are valid.

Look at the second example: all teams have won the same number of
matches and all have the same goal difference. The teams are sorted in
this case in lexicographical order.

## Input

An integer $n \geq 2$ and $n$ soccer team names followed by an
undetermined number of results in the form of quadruplets:

$$team_1 ~~ goals_1 ~~ team_2 ~~ goals_2$$

representing the result of a match.

## Output

The final classification in the format indicated in the examples, and
with the sorting criteria mentioned in the statement.

## Author

PRO1

© Jutge.org, 2006--2025.

