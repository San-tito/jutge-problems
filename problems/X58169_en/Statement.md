# Positions of a maximun in two sequences

Given two sequences of non negative integers $s_1$ and $s_2$ both ending
in $0$, write a program that computes the maximum $m$ of the elements in
$s_1$ and that shows the position of its latest occurrence within $s_1$
and the position of its first ocurrence within $s_2$.

In your program, you must implement and use the following procedure:

> **void** infoSequence(**int**& *max*, **int**& *lpos*);

which reads a sequence ending in 0 and computes the parameters *max* and
*lpos*. At the end of the execution of the procedure, the parameter
*max* must hold the largest value in the sequence and the parameter
*lpos* has to hold the position of the latest occurrence of the maximum
value.

## Input

The input is formed by two sequences $s_1$ and $s_2$ of non negative
integers, both ending in $0$. The sequence $s_1$ is not empty (i.e., it
has at least one element different from the ending mark), but the
sequence $s_2$ can be empty.

## Output

The output is formed by three items: The maximum element in $s_1$, $m$,
the position of the latest occurrence of $m$ in $s_1$, and the position
of the first occurrence of $m$ in $s_2$. The case in which $m$ does not
form part of $s_2$, or when $s_2$ is an empty sequence (and, therefore
$m$ does not form part of $s_2$) must be conveniently indicated.

 \
Please, follow the specified format.

 \

## Author

Maria J. Serna i Maria J. Blesa (en: Maria J. Blesa)

© Jutge.org, 2006--2025.

