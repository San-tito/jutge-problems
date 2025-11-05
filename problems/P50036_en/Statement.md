# Horner scheme

Let $p[0\dots n]$ be a vector of integer numbers that contains the
coefficients of a polynomial of degree $n\ge0$. For instance, the vector
$p=\langle3,2,5,-1\rangle$ represents $p(x)=3+2x+5x^2-x^3$, a polynomial
of degree $n=3$.

Write a function

        int evaluate(const vector<int>& p, int x);

that evaluates the polynomial at the point \@x@, that is, that returns
$\sum_{i=0}^n p[i]x^i$.

Use the Horner scheme:
$$p_nx^n+p_{n-1}x^{n-1}+\dots+p_0=((p_nx+p_{n-1})x+\dots)x+p_0.$$

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

