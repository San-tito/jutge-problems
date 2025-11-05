# Consecutive repeated words

Given a sequence of words, print the length of the longest consecutive
subsequence that only contains the first word. That is, if the sequence
is $s_1, \dots, s_n$, print $$\mbox{max}\{j - i + 1
      : 1 \le i \le j \le n
      \wedge s_i = s_{i+1} = \dots
      = s_{j-1} = s_j = s_1 \} .$$

## Input

Input consists of a non-empty sequence of words.

## Output

Print the number of words of the longest consecutive subsequence that
only contains the first word.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

