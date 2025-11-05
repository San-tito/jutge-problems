# P0014. Numerical valleys

Your task is to write a program that, given two natural numbers $n$ and
$r$, uses $n$ to print a valley with $r$ rows as it is shown at the
instances. Notice that, the last row has $r$ numbers $n$ separated by
dashes, the central dot, and $r$ numbers $n$ separated by dashes, that
each row has two numbers $n$ less than the row immediataly below, and
that the part of the middle has to be filled with as many dots as
necessary.

To solve this problem, you must implement *recursively* the function

        int number_of_digits(int n);

that returns the number of digits of \|n\|, under the precondition \|n\|
$\ge 0$.

## Input

The input consists of two natural numbers $n$ and $r$, with $r > 0$.

## Output

Your program must print a valley of $r$ rows using the number $n$ as can
be seen in the instances.

## Observations

- Using strings is not allowed. Obviously, you can not use vectors
  either.

- Remember to implement \|number_of_digits(n)\| recursively.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

