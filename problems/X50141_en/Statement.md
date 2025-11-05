# Function to fatten numbers

In this problem, given any natural number $x$ with $n$ digits
$x_1 \dots x_n$, we say that $y = y_1 \dots y_n$ is the result of
fattening $x$ if, for every $i$ between 1 and $n$,
$y_i = \max\{x_1, \dots, x_i\}$. For instance, if we fatten 7 we get 7,
if we fatten 32064781 we get 33366788, and if we fatten 9000000 we get
9999999.

Write a function

        int fatten(int x);

to return the result of fattening \@x@.

You cannot use vectors in the code. We suggest to think of a recursive
solution. You may implement and use auxiliar procedures.

Your program should follow a right programming style. You should include
the appropriate comments.

## Precondition

It holds $0 <$ \@x@ $< 10^9$.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Cortadella (en: Salvador Roura)

© Jutge.org, 2006--2025.

