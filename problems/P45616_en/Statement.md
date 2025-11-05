# Clock

Using the definition

        struct Clock {
            int h;      // hours    (0<=h<24)
            int m;      // minutes   (0<=m<60)
            int s;      // seconds   (0<=s<60)
        };

implement the following functions and procedures:

        Clock midnight();
        void increase(Clock& r);
        void print(const Clock& r);

the function \@midnight()@ returns a clock initialized to midnight
(00:00:00). The procedure \@increase()@ increases the clock a second.
The procedure \@print()@ prints the time of the clock in the format
\@HH:MM:SS@ in a line.

## Observation

You only need to submit the required classes; your main program will be
ignored.

Strictly obey the type definitions of the statement.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

