# Basketball League

After many setbacks, the Catalan Basketball Federation has succeeded in
organizing the Catalan National Basketball League and has asked the FIB
to help them with the management of the season's results data.

Specifically, you must write a **program** such that given an integer
$n \geq 2$ and $n$ **different** names of Catalan basketball teams and
then an indeterminate number of results in the form of quadruples:

$$team_1 ~~ baskets_1 ~~ team_2 ~~ baskets_2$$

which represent the result of a match, calculate the final
classification taking into account that the order is given by:

1.  The number of points (match won: 1 point). Note that in basketball
    there are no ties.

2.  In case of a tie on points, the one with the better basketball
    average (difference between points made and points received) goes
    first.

3.  In case of a tie in both previous cases, who has the team name
    **larger** in lexicographical order.

To make this program **you** need to use this structure:

    struct Equip
    {
        string nom;
        int punts_favor;
        int punts_contra;
        int guanyats;
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
to sort any vector, you have to program it yourself. And if so, any
sorting method you have studied is valid.

Look at the second example: all teams have won the same number of
matches and all have the same basketball average. The teams are sorted
in reverse lexicographical order in this case.

## Input

An integer $n > 1$ and $n$ basketball team names followed by an
undetermined number of results in the form of quadruplets:

$$team_1 ~~ baskets_1 ~~ team_2 ~~ baskets_2$$

representing the result of a match.

## Output

The final classification in the format indicated in the examples, and
with the sorting criteria mentioned in the statement.

## Author

PRO1

© Jutge.org, 2006--2025.

