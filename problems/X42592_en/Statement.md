# Search for distance d in vector with strictly increasing consecutive distances

Implement a function that receives a natural $d$ and a vector $v$ with
two or more elements and which satisfies the following condition: the
sequence of distances between each pair of consecutive elements in $v$
is strictly increasing, i.e.
$|v[0]-v[1]| < |v[1]-v[2]| < |v[2]-v[3]| < \cdots$. For instance, the
following sequence satisfies this condition:

    3 2 4 8 0 -10 -22 -8 7

Note that the distance between the first and second element is 1, the
distance between the second and third is 2, between the third and fourth
is 4, between the fourth and fifth is 8, between the fifth and sixth is
10, between the sixth and seventh is 12, between the seventh and the
eighth is 14, and between the eighth and the ninth is 15. It is clear,
therefore, that the sequence of consecutive distances increases.

In the case that a pair of consecutive elements at distance $d$ exists,
the function must return the position (indexing from 0) of the first
element of the pair. Otherwise, the function must return -1. In the
previous example, with $d=12$ the function must return $5$, and with
$d=6$ the function must return $-1$. This is the header:

    // Pre: Let n be v.size(). n>=2 and d>=0 and |v[0]-v[1]| < |v[1]-v[2]| < ... < |v[n-2]-v[n-1]|
    // Post: If there exists i in {0..n-2} holding |v[i]-v[i+1]| = d, then the function returns this i.
    //       Otherwise, it returns -1.
    int findDistance(int d, const vector<int> &v);

The private test cases try to check that your solution has a logarithmic
cost.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Observation

You can use the function `abs` in `cmath` if you wish. Evaluation over
10 points:

- Slow solution: 5 points.

- Fast solution: 10 points.

It is understood that a fast solution is correct, with logarithmic cost
and passes all test cases, both public and private. A slow solution is
defined as one that is not fast, but it is correct and passes the public
test cases.

## Author

PRO1

© Jutge.org, 2006--2025.

