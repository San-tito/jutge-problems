# You look younger

Write a program that reads lines. For each input line, somebody tells
how old he/she is. As a response, the program must say that this person
looks younger, and suggest a smaller age.

For ages between 10 and 19 years, the program will suggest exactly 1
less year.

For ages between 20 and 29 years, the program will suggest exactly 2
less years.

For ages between 30 and 39 years, the program will suggest exactly 3
less years.

And so on.

Follow the format of the examples.

## Input

Each input line is of the form:

    My name is NAME and I am N years old.

Where `NAME` is a non-empty string without spaces and N is a natural
greater than or equal to 10.

## Output

For each input case, the output has a line of the form:

    NAME, you look younger. I thought you were M years old.

Where `NAME` is the same string from the input, and `M` is obtained from
`N` by subtracting a number, which will be 1 if `N` is between 10 and
19, or 2 if `N` is between 20 and 29, or 3 if `N` is between 30 and 39,
and so on.

## Author

PRO1

© Jutge.org, 2006--2025.

