# Is it a palindrome?

Write a function that tells if \@s@ is a palindrome or not. Remember
that a word is a palindrome if it reads the same from left to right than
from right to left. In this exercise, \@s@ can be rather large; this is
why it is passed by reference.

In order to compare the efficiency of your solution against the
efficiency of the solution of the Judge, start checking \@s@ from its
ends.

## Interface

+-------:+:----------------------------------------------+
| C++    | ``` c++                                       |
|        | bool is_palindrome(const string& s);          |
|        | ```                                           |
+--------+-----------------------------------------------+
| C      | ``` c                                         |
|        | int is_palindrome(const char s[], int ssize); |
|        | ```                                           |
+--------+-----------------------------------------------+
| Java   | ``` java                                      |
|        | public static boolean isPalindrome(String s); |
|        | ```                                           |
+--------+-----------------------------------------------+
| Python | ``` python                                    |
|        | is_palindrome(s)  # returns bool              |
|        | ```                                           |
+--------+-----------------------------------------------+
|        | ``` python                                    |
|        | is_palindrome(s: str) -> bool                 |
|        | ```                                           |
+--------+-----------------------------------------------+

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

