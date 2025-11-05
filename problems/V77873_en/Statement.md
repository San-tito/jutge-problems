# Decoding

The **decoding** of a natural number $n$ is a string of characters such
that every two digits of $n$ represent a character. For example, the
decoding of $n = 6568$ is `AD`, because the ASCII code of the character
`A` is 65 and the ASCII character of the character `D` is 68. Notice
that $n$ has two groups of two digits: $65$ and $68$. Another example:
the decoding of $65666768$ is `ABCD`, since $n$ is composed of $65$,
$66$, $67$, and $68$.

It is necessary to implement the **recursive** function
`void decodificacio(int)` with the following specification:

`PRE: ` The input is an integer $n$ such that:

1.  $n \geq 65$

2.  $n = d_1 d_2 d_3 d_4 \dots d_{m-1} d_m$.

3.  $m$ is even

4.  for any pair of digits $d_i d_{i+1}$ ($i$ odd) we have that
    $65 \leq d_i d_{i+1} \leq 90$.

`POST:` writes the decoding of $n$ to the output channel `cout`.

## Observation

Only recursive solutions are accepted.

**IMPORTANT:** You only need to submit the requested function, and
possibly other necessary actions and functions. However, you must keep
the type definitions and `#include`s.

## Input

The input consists of a natural number $n \geq 65$ such that
$n = d_1d_2d_3d_4 \dots d_{m-1}d_m$ $m$ is even and for any pair of
digits $d_i d_{i+1}$ such that $i$ is odd, we have that
$65 \leq d_i d_{i+1} \leq 90$.

## Output

For each integer $n$, its decoding.

## Author

PRO1

© Jutge.org, 2006--2025.

