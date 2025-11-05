# Folded Numbers

You have to compute the value of "`folding`" a number. "`Folding`" a
number $n$ is an operation shown in the following figure (open the PDF
if you can't see the figure correctly on the Jutge web page).

::: center
![image](folded_number.png){width="15cm"}
:::

In particular, any number $n$ can be considered a sequence of digits and
be divided into two subsequences of consecutive digits $a$ and $b$, be
they of the same length, or alternatively of lengths differing only in
one unit (including the case where $a$ or $b$ are empty). Concatenating
these two halves $a$ and $b$ we would recover the original number $n$.

Then, to compute the \"folding\" operation, we invert the order of the
$a$ subsequence, which we will call $a_{inv}$, and, interpreting
$a_{inv}$ and $b$ as numbers once again, add them together to obtain the
result of \"folding\".

As an example, if $n$ is 1234, the subsequence $a$ is 12 and $b$ is 34.
Inverting the order of $a$ gives 21, and the result will be, then,
$21 + 34 = 55$.

In the case where $n$ has an odd length, the partition can be made in
two different ways. For instance, if $n$ is 12345, we can compute the
\"folding\" in these two ways:

- Divide $n$ in $a = 123$ and $b = 45$, and inverting $a$ and adding, we
  would get $321 + 45 = 366$.

- Divide $n$ in $a = 12$ and $b = 345$, and inverting $a$ and adding, we
  would get $21 + 345 = 366$.

The middle digit, then, ends up contributing in the same way to the
final sum in both cases.

## Input

The input consists of a sequence of strictly positive integers.

## Output

The output consists of each number in the input "`folded`" as explained,
each one in a separate line.

## Author

PRO1

© Jutge.org, 2006--2025.

