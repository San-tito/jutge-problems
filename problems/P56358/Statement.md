# Add and subtract one second

Write a program that, given a time expressed in hours, minutes and
seconds, computes the time corresponding to add one second, and also the
time corresponding to subtract one second.

Your program must use the definition

        struct Time {
            int hour, minute, second;
        };

and it must implement and use the precedure

        void one_second(const Time& t, Time& t1, Time& t2);

that leaves in \@t1@ the time in \@t@ plus one second, and leaves in
\@t2@ the time in \@t@ minus one second. For instance, if \@t@ has 23 59
59, then \@t1@ must be 0 0 0 and \@t2@ must be 23 59 58.

## Input

Input consists of several cases, each with three numbers (hour, minute
and second) that form a correct time. That is, the hour is between 0 and
23, and the minute and the second are between 0 and 59.

## Output

For every given time \@t@, print two lines with \@t1@ and \@t2@.

## Observation

You can implement auxiliary procedures.

## Author

Salvador Roura (en: Salvador Roura)

© Jutge.org, 2006--2025.

