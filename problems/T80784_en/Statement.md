# Bicolor numbers

We define a *bicolor* number as a natural number $n$ with only two
different digits that are repeated in two blocks (or \"colors\"). More
formally, the sequence of digits of $n$ is
$d_1d_2\ldots d_ke_1e_2\ldots e_l$, where $d$ and $e$ are the two digits
and, $d \neq e$, $k > 0$ and $l > 0$.

Examples of bicolor numbers: 7722, 44111, 666699, 277, and 45.\
Examples of number which are **not** bicolor: 121, 113311, 7878, 1234,
7, 99910.

Implement a **function** `is_bicolor` that receives a natural number and
determines if it is bicolor. The function receives a number $n > 0$ and
returns `true` if it is bicolor and `false` otherwise.

The function header must be exactly:

    /**
    * @pre n >= 0
    * @post returns true if n is bicolor, false otherwise
    */
    bool is_bicolor(int n);

## Observation

You only need to submit the requested function; the main program will be
ignored.

## Author

PRO1

© Jutge.org, 2006--2025.

