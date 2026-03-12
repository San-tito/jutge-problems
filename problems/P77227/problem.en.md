# Jump, jump

Being \@v@ a vector of integer numbers. Starting in any position \@p@ of
\@v@, jump in the vector according to \@v\[p\]@: When it is positive, it
must jump \@v\[p\]@ steps to the right; when it is negative, it must
jump $-$\@v\[p\]@ steps to the left. The process is always repeated,
unless it goes out of bounds.

Write a function

        string exit(int p, vector<int>& v);

that returns "`left`", "`right`" or "`never`" depending on whether the
process goes out of bounds on the left side, on the right side or never
ends.

## Precondition

$0 \le$\@p@$<$\@v.size()@

## Observation

The value of \@v@ at the end is not important. Moreover, notice that the
parameter \@v@ has not been declared as constant. Take advantage of this
fact to write a function as efficient as possible.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T11:56:04.358Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
