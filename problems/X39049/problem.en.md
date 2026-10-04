# Powers of permutations

Given an $n$, a *permutation* of $\{0, 1, \ldots n-1\}$ is a sequence
where each of the numbers $0, 1, \ldots n-1$ occurs exactly once. For
example, if $n = 3$, the sequences $(1\ 2\ 0)$, $(2\ 0\ 1)$ and
$(0\ 1\ 2)$ are permutations of $\{0, 1, 2\}$.

Given two permutations $\sigma = (\sigma_{0}, \ldots, \sigma_{n-1})$ and
$\tau = (\tau_{0}, \ldots, \tau_{n-1})$ of $\{0$, $1$, $\ldots n-1$
$\}$, their *product* $\sigma \circ \tau$ is defined as the permutation
$\rho = (\rho_{0}, \ldots, \rho_{n-1})$ such that
$\rho_{i} = \sigma_{\tau_{i}}$. For example, if $n = 3$,
$\sigma = (1\ 2\ 0)$ and $\tau = (2\ 0\ 1)$, then
$\sigma \circ \tau = (0\ 1\ 2)$, since:

- $\tau_{0} = 2$ and $\sigma_{2} = 0$,

- $\tau_{1} = 0$ and $\sigma_{0} = 1$, and

- $\tau_{2} = 1$ and $\sigma_{1} = 2$.

Make a program that, given a permutation $\sigma$ and a natural $k$,
computes the *power* of $\sigma$ raised to $k$:
$\sigma^k = \overbrace{\sigma \circ \ldots \circ \sigma}^{k)}$. By
convention, $\sigma^{0} = (0, 1, \ldots, n-1)$.

## Input

The input includes several cases. Each case consists in the number $n$
($1 \leq n \leq 10^{4}$), followed by $n$ numbers between $1$ and $n$
that describe the permutation $\sigma$, followed by the number $k$
($0 \leq k \leq 10^9$).

## Output

Write the permutation $\sigma^k$.

## Observation

The expected solution to this problem has cost $O(n \cdot \log k)$. The
solutions that have cost $\Omega(n \cdot k)$ can get at most $3$ points
over $10$.

You can add (few) lines of comments explaining what you intend to do.

If needed, you can use that the product of permutations is associative.

## Problem information

Author: Enric Rodríguez

Generation: 2026-01-25T15:50:15.949Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
