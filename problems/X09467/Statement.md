# Ramps

In this exercice we say that in the position $i$ of vector $v$ there is
a *ramp* when the elements $v[i]$, $v[i+1]$ y $v[i+2]$ are sorted in
strictly increasing or decreasing order.

For example, when $n=7$ and $v=[4,5,4,3,-4,2,4]$ there are ramps at the
positions 1, 2 and 4. When $v=[0,0,0,0,0,0]$ there are no positions with
a ramp.

Two positions with a ramp, $i$ and $j$ with $i<j$, are *potentially
conflictive* if the corresponding ramps involve some common position.

In the previous example, the ramps at positions 1 and 2 are potentially
conflictive, the one at position 2 is potentially conflictive with the
ramp at position 4. The ramp at position 1 does not share any position
with the ramp at position 4, therefore the ramps at positions 1 and 4
are not potentially conflictive.

Write a program indicating the positions with a ramp and the number of
pairs $(i,j)$ with $i<j$ corresponding to positions with a ramp and
potentially conflictive.

Your program must define, implement and use the following procedures:

    vector<bool> ramps_pos(const vector <int>& V);

which, given a vector of integers, returns a vector, with the same
dimension, of boolean values, where the position $i$ holds the value
**true** if and only if the vector $V$ has a ramp a position $i$.

    int pot_conflictive(const vector <bool>& B);

which, given a vector indicating the positions with a ramp determines
the number of pairs of positions $(i,j)$, $i < j$, with a ramp and
potentially conflictive.

## Input

The input is formed by a non-empty sequence of cases. Each case is
described by an integer $n\geq 3$ followed by the $n$ integer values of
the corresponding vector.

## Output

Print, for each case, the positions having a ramp and the number of
pairs of positions $(i,j)$ with $i<j$ having a ramp and potentially
conflictive.

Follow the format especified in the examples. Your code must follow the
rules of style and the adequate comments. The simplicity and efficiency
of the proposed solutions will be taken into consideration for the
evaluation.

## Author

Professorat de PRO1 (en: Maria Serna)

© Jutge.org, 2006--2025.

