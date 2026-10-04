# Search in a unimodal vector

In this problem, we say that a vector with $n$ integer numbers
\@v\[0..@$n-1$@\]@ is *unimodal* if $n \ge 1$, and there exists an index
$j$ such that $0 \leq j \leq n-1$ and satisfying:

- \@v\[0\]@ $< \ldots <$ \@v\[@$j-1$@\]@ $<$ \@v\[@$j$@\]@, and

- \@v\[@$j$@\]@ $>$ \@v\[@$j+1$@\]@ $>$ \@v\[@$j+2$@\]@ $> \ldots >$
  \@v\[@$n-1$@\]@.

For instance, the vector @\[0, 2, 5, 7, 6, 5, 4, 3, 1\]@ is unimodal
(with $j = 3$).

Note that vectors with $n \leq 2$ different elements are unimodal. In
general, note that any strictly increasing vector is also unimodal (and
in all cases $j = n-1$), and analogously, any strictly decreasing vector
is also unimodal (and then $j = 0$).

Implement an *efficient* function

        bool search(int x, const vector<int>& v);

such that, given an integer number \@x@ and a unimodal vector \@v@,
returns true if \@x@ appears in \@v@, and false otherwise. You can use
and implement auxiliary functions if you need them.

## Precondition

The vector \@v@ is unimodal.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Problem information

Author: Unknown\
Translator: Prof. EDA

Generation: 2026-01-25T22:41:26.180Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
