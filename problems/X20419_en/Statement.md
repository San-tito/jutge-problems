# Average length and most frequent letter

Given a sequence of words, we wish to know:

1.  Which is the average length $L$ of its words.

2.  For every word with length $L$ or longer, which is the most frequent
    letter (the smallest in lexicographic order in case of ties).

To solve the second question, your program must implement the function

> **char** *most_frequent_letter*(**const string**& s);

which returns the lowercase letter with most occurrences inside the word
represented by *s* (and the smallest in lexicographic order when ties
occur).

## Input

The input is formed by a natural $n > 0$ followed by $n$ non-empty
words. Each word is formed exclusively by lowercase letters.

## Output

Print the average length of the words in the input sequence with
precision 2. Additionally print, for every word with length equal or
longer to the average one, the lowercase letter with most occurrences
inside the word (the smallest in lexicographic order when ties). Please,
follow the output format given in the examples.

## Observation

Recall that, in order to fix a decimal precision $d$ in the output
channel, you need to use the following instructions

> cout.setf(ios::fixed);
>
> cout.precision(*d*);

You may find useful to define and use the constant \@LENGTH_ALPHABET@,

> **const int** *LENGTH_ALPHABET* = 'z' - 'a' + 1;

 \

## Author

Maria J. Blesa i Maria J. Serna (en: Maria J. Serna)

© Jutge.org, 2006--2025.

