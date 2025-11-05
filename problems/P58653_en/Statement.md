# Classification of characters (2)

Write a program that reads a character and tells if it is a letter, if
it is a vowel, if it is a consonant, if it is an uppercase letter, if it
is a lowercase letter and if it is a digit.

For your comodity when solving this exercise, use the procedure

        void print_line(char c, string s, bool b) {
            cout << s << "('" << c << "') = ";
            if (b) cout << "true" << endl;
            else cout << "false" << endl;
        }

that prints in a line if the character \@c@ is an \@s@ or not, depending
on the boolean \@b@. For instance, the call \@print_line('J',
\"letter\", true);@  prints the first line of the first sample output.

## Input

Input consists of a printable character, like a letter, or a digit, or a
punctuation mark.

## Output

Tell if the given character is a letter, a vowel, a consonant, an
uppercase letter, a lowercase letter and a digit, following the format
of the examples.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

