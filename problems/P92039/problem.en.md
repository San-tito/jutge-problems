# Symbolic systems of equations

A *symbolic system of equations* is a set of equations
$x = f(y_1, \ldots, y_k)$, where $x$, $y_1$, ..., $y_k$ are variables
and $f$ is a *symbol* representing an arbitrary function with $k$
arguments (we say that $f$ has *arity* $k$). A *solution* of a system
with $n$ variables $x_1, \ldots, x_n$ is any assignment $\alpha$ of
expressions to variables in such a way that for every equation
$x = f(y_1, \ldots, y_k)$ it holds that
$\alpha(x) = f(\alpha(y_1), \ldots, \alpha(y_k))$.

Write a program that, given a system of symbolic equations, computes its
most general solution, or tells that it does not exist.

## Input

Input consists of several cases, each with $n$, followed by $n$
variables in lexicographical order, followed by the number of equations
$m$, followed by $m$ equations in the exact format of the examples.
Variables and functions are words made up of lowercase letters, all
different. Every variable appears at most once in the left side of an
equation. Every function can occur several times, but always with the
same arity, between 1 and $n$. All arguments of the same function are
different variables. You can assume $1 \le n \le 40$.

## Output

Print, in lexicographical order of the variables, the most general
solution of the system, following the format of the examples. Print an
empty line at the end of each case.

## Hint

Take inspiration from a topological sort.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:56:45.754Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
