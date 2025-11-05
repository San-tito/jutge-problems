# Sandwich numbers

We define a *sandwich* number as a natural number $n$ with only two
different digits $d$ and $e$, forming a sequence $de_1e_2\cdots e_kd$.
That is, the digit $d$ is the first and last digit of $n$ (it's the
bread), and the digit $e$ is repeated $k \geq 1$ times in between the
two $d$ digits (it's the filling). For example, 121 is a sandwich number
with $d = 1$, $e = 2$, and $k = 1$. And 4004 is a sandwich number with
$d = 4$, $e = 0$ and $k = 2$.

More examples of sandwich numbers: 7227, 41114, 966669, 10001, and 535.\
Examples of numbers that are **not** sandwich numbers: 9, 12, 113311,
7878, 1234, 9991, 1000.

Implement a **function** `is_sandwich` that receives a natural number
and returns `true` if it is a sandwich number and `false` otherwise.

The function header should be:

    /**
     * @pre  n >= 0
     * @post returns true if n is a sandwich number, false otherwise
     */
    bool is_sandwich(int n);

## Observation

You only need to submit the requested function; the main program will be
ignored.

## Author

PRO1

© Jutge.org, 2006--2025.

