# Word square

A *word square of order $k$* is a matrix of $k\times k$ letters in form
that in each row and in each column a word of the dictionary appears and
that the same words are read horizontally and vertically. For instance,
below some word squares of order three to eight are given:

      B I T    C A R D    H E A R T    G A R T E R    B R A V A D O    L A T E R A L S
      I C E    A R E A    E M B E R    A V E R S E    R E N A M E D    A X O N E M A L
      T E N    R E A R    A B U S E    R E C I T E    A N A L O G Y    T O E P L A T E
               D A R T    R E S I N    T R I B A L    V A L U E R S    E N P L A N E D
                          T R E N D    E S T A T E    A M O E B A S    R E L A N D E D
                                       R E E L E D    D E G R A D E    A M A N D I N E
                                                      O D Y S S E Y    L A T E E N E R
                                                                       S L E D D E R S

Write a program that reads a dictionary and prints if various matrices
of characters are or are not word squares.

## Input

Input has two parts:

- The first part is a dictionary of $n$ words. First, the value of $n$
  is given. Then, $n$ words of the dictionary (all in uppercase letters)
  come in lexicographical order.

- The second part is various matrices of characters. Each matrix starts
  with an integer $k$ that indicates the number of rows and columns and
  continues with $k^2$ characters (all uppercase letters) arranged in
  $k$ rows and $k$ columns. The value $k=0$ indicates the end on the
  input.

## Output

For each matrix of the input, print "`YES`" if forms a word square using
some of the dictionary words and must print "`NO`" otherwise.

## Observation

In private test data is used a dictionary derived from
@/usr/share/dict/words@ with four hundred thousand words and a thousand
of matrices are tested.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

