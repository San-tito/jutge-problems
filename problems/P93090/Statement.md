# F008B. Addition of fractions

Your task is to write a program that computes the result of adding a
sequence of fractions.

Using the definition

        struct Fraction {
            int num, den;   // always strictly positive
        };

your program must include and use the function

        Fraction addition(const Fraction& x, const Fraction& y);

that returns the addition of \|x\| and \|y\|, *without common factors in
the numerator and denominator*.

## Input

The input is a sequence of one or more simplified fractions separated by
plus signs, ended with an equal sign. Each fraction consists of its
numerator, a bar, and its denominator. Numerators and denominators are
natural strictly positive.

## Output

Your program must print the simplified fraction corresponding to the sum
of all the given fractions.

## Observations

- In order to avoid overflows, use the function \|addition()\| to
  accumulate the partial calculations.

- Inefficient calculation of the greatest common divisor will be
  negatively valued.

- Using vectors is not allowed to solve this problem.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

