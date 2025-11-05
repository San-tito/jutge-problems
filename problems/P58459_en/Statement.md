# Valid dates

Write a function that tells if the date defined by a day \@d@, month
\@m@ and year \@y@ is valid or not.

## Interface

+-------:+:--------------------------------------------------------+
| C++    | ``` c++                                                 |
|        | bool is_valid_date(int d, int m, int y);                |
|        | ```                                                     |
+--------+---------------------------------------------------------+
| C      | ``` c                                                   |
|        | int is_valid_date(int d, int m, int y);                 |
|        | ```                                                     |
+--------+---------------------------------------------------------+
| Java   | ``` java                                                |
|        | public static boolean isValidDate(int d, int m, int y); |
|        | ```                                                     |
+--------+---------------------------------------------------------+
| Python | ``` python                                              |
|        | is_valid_date(d, m, y)  # returns bool                  |
|        | ```                                                     |
+--------+---------------------------------------------------------+
|        | ``` python                                              |
|        | is_valid_date(d: int, m: int, y: int) -> bool           |
|        | ```                                                     |
+--------+---------------------------------------------------------+

To write this function, it is convinient to use the function for leap
years of the exercise 
`problem://problemsjutge.org:problems/p1/jpetit/traspas-funcio.pbm` .

## Precondition

The parameter \@y@ is between 1800 and 9999, both included.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

Jordi Petit (en: Salvador Roura)

© Jutge.org, 2006--2025.

