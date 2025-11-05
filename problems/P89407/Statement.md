# F004B. Stable products

The product of $x$ by $y$ is stable if the digits of $x$ and $y$ on one
hand, and the digits of $x * y$ on the other hand, are the same ones.

For instance, the product $$875 * 650 = 568750$$ is stable because in
the both sides there is a 0, two 5, a 6, a 7 and a 8.

This property can be extended to other bases different of 10. For
instance, the product of 3 by 53 is stable in base 2:
$$11 * 110101 = 10011111$$ because in both sides there are two 0 and six
1.

Your task is to write a program that, given a sequence of pairs $x$ and
$y$, prints which bases between 2 and 16 (both included) the product
$x * y$ is stable for.

To solve this problem, you must implement and use the function

        bool same_digits(int x, int y, int b);

that indicates if, in base $b$ ($2\le b\le 16$), $x$ and $y$ in one
hand, and $x * y$ in the other one, have the same digits.

You must implement and use also the procedure

        void print(int n, int b);

that prints $n$ in base $b$ in the screen (just like that, without
spaces nor line feeds).

## Input

The input is a sequence of pairs of natural numbers $x$ and $y$.
$x \ge 1$, $y \ge 1$, $x * and \le 10^9$ are fulfilled. You can assume
this information as a precondition of your procedures.

## Output

For each pair $x$ and $y$, print which bases the product $x * y$ is
stable for. If there is not any base, print it. It must print a line
feed after the output of each case. Follow the format of the instance.

## Observation

If you do tests with random numbers and your program do not find any
solution, do not worry: most products are *not* stable.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

