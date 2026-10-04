# Ticket distribution

A football club does not usually have enough tickets for all its
supporters, so some method is needed to distribute them: When a
supporter asks for a ticket, if there is any available at that moment,
the supporter immediately gets one. Otherwise, the supporter's code is
recorded. When a ticket is available, if there is no recorded code at
that moment, the ticket is stored. Otherwise, the ticket is given to the
supporter with the shortest code.

Ties are broken as follows: A fixed word $w$ is arbitrarily chosen at
the beginning of the process. Then, lexicographical order is used among
codes of length $n$, except that $w[1..n]$ is considered the first code,
and the rest are considered cyclically. For instance, if $n = 4$ and
$w[1..4] =$"`abcd`", then codes of length 4 are sorted in this order:
"`abcd`", "`abce`", ..., "`abcz`", "`abda`", ..., "`abdz`", ...,
"`zzzz`", "`aaaa`", ..., "`abcc`".

Please write a program to distribute tickets among supporters according
to the method just described above.

## Input

Input consists of several cases. Each case begins with a string $w$ made
up of 10 lowercase letters, followed by several events: '`T`' for an
available ticket, and '`S`' for a supporter asking for a ticket. In the
latter case follows the supporter's code (a non-empty string with at
most 10 lowercase letters). The same supporter can ask for more than one
ticket. An '`E`' marks the end of the events of a case. Assume that each
case has no more than $10^5$ events.

## Output

For every case, print the codes of the supporters who get tickets, in
the order in which this happens. Print two lines with final information.
Count every supporter who unsuccessfully asked for $t$ tickets exactly
as $t$ supporters who unsuccessfully asked for one ticket. Print an
empty line after every case.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T11:14:46.260Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
