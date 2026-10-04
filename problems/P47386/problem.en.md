# Gossip

Write a program to maintain basic information for the gossip magazines:
who is a couple of who. There are two kinds of orders: "`info`" and
"`affair`" $x$ $y$. The first asks for a list of all the information at
that moment. The second indicates that $x$ and $y$ are a couple now. If
some person $z$ was a couple of $x$ or a couple of $y$, then $z$ becomes
single.

## Input

Input consists of several orders. For every "`affair`" $x$ $y$ order,
both $x$ and $y$ are words made up of only lowercase letters, such that
$x$ and $y$ are different, and such that $x$ and $y$ do not have an
affair at that moment.

## Output

Print as many lists as "`info`" orders, finishing each with a line with
10 dashes. Print the couples in alphabetical order, and also the couples
among them. Print the alone people in alphabetical order as well.

## Observation

In the private test cases, most orders are of the "`affair`" kind.

## Problem information

Author: Unknown\
Translator: Salvador Roura

Generation: 2026-01-25T11:24:28.578Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
