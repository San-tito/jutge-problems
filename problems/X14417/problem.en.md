# Film searcher

To make the days of lockdown more bearable, Professor Oak has signed up
for an Internet TV platform. As the film catalogue is immense, the
system provides a searcher that, by means of the remote control, allows
one to look for films by their title. More precisely, the searcher
displays on the TV screen a matrix with letters and a cursor on one of
them, at the beginning that on the upper left corner. By means of the
buttons $\uparrow$, $\downarrow$, $\rightarrow$ and $\leftarrow$ of the
remote control, one can move the cursor. Some of the cells of the
matrix, however, cannot be selected (in the image, in red; in the test
cases, with an asterisk `*`), and then the cursor cannot move in that
direction. It is not possible to move beyond the top, bottom, right and
left borders of the matrix either. Once the cursor is on the aimed
letter, the *OK* button must be pressed.

![image](buscador.jpg){width="8.7cm"}

Before checking whether a film is in the catalogue, Professor Oak wants
to find out how many buttons he will have to press in order to insert
the title into the searcher. Can you help him?

To adapt the problem to *Jutge.org*, from now on we will assume that the
cells of the matrix can contain a word (viewed as a unit) instead of
just a single letter, and that therefore what we insert into the
searcher is a sequence of words, rather than a sequence of letters.

## Input

The input contains several cases. Each case begins with $n$ the number
of rows and $m$ the number of columns of the matrix of the searcher.
Then $n$ lines follow with $m$ **words** each, separated by blank
spaces. The words consisting of a single character `*` represent
forbidden cells of the matrix. Except for `*`, which can be repeated,
the rest of the words can only appear at most once. Then a number $p$
follows, which is the number of words of the sequence we want to insert
into the searcher. Finally the $p$ words of the sequence follow, each of
them different from `*`. Any word in the input is formed with upper case
letters of the alphabet or underscore `_`, or is the word `*`. It holds
that $1 \leq
n, m \leq 300$, $1 \leq p \leq \min(2 \cdot n \cdot m, 1000)$, and that
for each case the upper left corner does not contain the word `*`.

## Output

For each case, write a line with the total number of times that a button
of the remote control ($\uparrow$, $\downarrow$, $\rightarrow$,
$\leftarrow$ or *OK*) must be pressed so as to insert the $p$ words of
the sequence into the searcher. If it is not possible (because a word
cannot be reached, or does not appear in the matrix), write
`impossible`.
