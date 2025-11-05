# First odd digits (1,3,5,7,9), next positive even digits (2,4,6,8)

Implement a program that, for each positive natural number `x` given as
input, prints two natural numbers `y,z` separated by a white space.
Natural `y` is composed by the subsequence of digits of `x` which are
odd (i.e. from the set `{1,3,5,7,9}`), followed by the subsequence of
digits of `x` which are even and positive (i.e. from the set
`{2,4,6,8}`). Natural `z` is just twive `y`, i.e. `z == 2*y`.

For example, if `x` is 250813126, then the program must print natural
51312826 first, as the subsequence of odd digits of `x` is 5131, and the
subsequence of even and positive digits of `x` is 2826. Secondly, the
program must print 102625652, as it is twice 51312826.

## Input

The input consists of several cases of positive natural numbers `x`,
each one in a line.

## Output

For each `x` from the input, the program prints the corresponding `y,z`
in a new line, and separated by a white space.

## Observation

It is not allowed to use any massive storage data structure, not even
`string`. Please solve this exercise by just using type `int` and
manipulating integers with the basic operators (`+,-,*,/,%`).

## Author

PRO1

© Jutge.org, 2006--2025.

