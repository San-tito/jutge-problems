# F002A. Infixes

Your task is to write a program that reads a sequence of words and
prints, for each word, all the other words of the sequence contained in
it.

Your program has to implement and use the function

        bool contains(string s1, string s2);

that returns if the word \|s1\| contains the word \|s2\| under the
precondition that the length of \|s1\| is greater or equal than the
length of \|s2\|.

For instance, \|contains (\"enlightenment\", \"light\")\|, \|contains
(\"enlightenment\", \"enlightenment\")\|, \|contains (\"enlightenment\",
\"lighten\")\| and\
\|contains (\"enlightenment\", \"ten\")\| have to return \|true\|, but,
however, \|contains (\"enlightenment\", \"ei\")\|\
and \|contains (\"enlightenment\", \"might\")\| have to return
\|false\|.

## Input

Input consists in a natural number $n$ followed by $n$ different words
$p_1,\dots,p_n$.

## Output

The program has to print a line for each $p_1,\dots,p_n$ in this order.
Each line starts with $p_i$, followed by the symbol ":" and the list of
all the input words contained in $p_i$, in the same order than the
input. Notice that the list corresponding to each $p_i$ always includes
$p_i$, since every word contains itself.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

