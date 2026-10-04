# Balanced scales

Given $n$ weights, we have to place all of them on a scale, one after
another, in such a way that the right pan is never heavier than the left
pan. Please compute the number of ways of doing this.

For example, for $n=3$ and weights $\{1,2,4\}$, possible solutions are

$$(1\ell,2\ell,4\ell),(2\ell,1\ell,4\ell), (2\ell,4\ell,1r), (2\ell,1r,4\ell), (4\ell,1r,2r), \cdots$$

where $1\ell$ means that the weight $1$ is placed on the left pan and
$2r$ means that the weight $2$ is placed on the right pan. We remark, as
it can be seen in the example, that the order in which we place the
weights does matter. Hence, $(2\ell,4\ell,1r)$ and $(2\ell,1r,4\ell)$
are different solutions.

## Input

Input consists of several cases, each with the number of weights $n$
followed by $n$ different weights, all between 1 and $10^6$. Assume
$1 \le n \le 8$.

## Output

For every case, print the number of correct ways of placing the weights
on the scale. This number will never be larger than $10^7$.

## Problem information

Author: Albert Oliveras

Generation: 2026-01-25T13:09:53.110Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
