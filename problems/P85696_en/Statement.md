# Rational numbers (1)

Using the definition

        struct Rational {
            int num, den;
        };

write a function

        Rational rational(int n, int d);

that returns an equivalent rational to $\frac{n}{d}$ and "normalized"
according to: if the numerator is 0, the denominator is 1; otherwise,
the numerator and the denominator do not have any common factor, and the
denominator is positive.

## Precondition

\@d@ $\neq 0$.

## Observation

You only need to submit the required classes; your main program will be
ignored.

Strictly obey the type definitions of the statement.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

