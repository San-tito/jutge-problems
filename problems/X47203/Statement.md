# Consonant words' scale

**Definition 1:** A pair of words written in capital letters
($p_1, p_2$) is said to form a *consonant scale* if the number of
occurrences of consonants in $p_2$ is greater than the number of
occurrences of consonants in $p_1$.

For example, the pair (MADUIXOT, PRESSEC) form a consonant scale, since
MADUIXOT has 4 consonants and PRESSEC has 5. So does the pair (POMA,
PLATAN). However, neither (SINDRIA, PRUNA) nor (PERA, KIWI) do form a
consonant scale.

**Definition 2:** A *consonant words' scale* of length $k$ is a sequence
of $k$ words (written in capital letters), where every pair of
consecutive words of the sequence form a consonant scale.

For example: POMA, MADUIXA, PLATAN, PRESSEC, ALBERCOCS is a consonant
words' scale of words with length 5.

**Definition 3:** Given a matrix with $n$ rows and $m$ columns, we say
that a sequence of $k$ positions of the matrix is *scaled* if it follows
the following form $\{(i,j), (i+1, j+1),..., (i+k-1, j+k-1)\}$, for
$i, j, k$ holding that $0\leq i$, $i+k-1 < n$, $0\leq j$, $j+k-1<m$.

For example, given a matrix of size $6\times 10$, the sequence
$\{(0,2),(1,3),(2,4),(3,5),(4,6)\}$ is a scaled sequence of positions of
length 5, that starts at position $(0,2)$

**To do:**

Do a program that, given a word matrix and a natural $k$, traverses the
matrix in a row-wise way and computes the first position $(i,j)$
starting a consonant words' scale of length $k$ in a scaled sequence of
positions starting at $(i,j)$.

Your program must represent the word matrix by means of the following
type:

    struct Word {
         string contents;           // the word
         int consonants;            // number of occurrences of consonants 
    };
     
    typedef vector< vector<Word> > WordsMat;

## Input

The input is composed by a single case. The case consists of the number
of rows $n\geq 1$, the number of columns $m\geq 1$ of the matrix, and a
natural number $k$ determining the length of the sequence to be found.
Following, we find $n$ lines with $m$ strings each. Each string is
formed only by capital letters.

## Output

You must write in a single line: the row number and the column number of
the matrix, together with the word in it, where the first (according to
a row-wise traversal) consonant words' scale of length $k$ starts when
considering a scaled sequence of positions. You must write -1 -1 when
the matrix does not have any.

Follow the format as specified on the examples. Follow a good
programming style. You may consider (but it is up to you) to include
comments within your code.

## Author

Gabriel Valiente, Maria Blesa (en: Maria Blesa)

© Jutge.org, 2006--2025.

