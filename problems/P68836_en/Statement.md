# F008A. Badenic dates

In the planet Badenia is used a system of dates different to ours.
Although a date is identified like in our case with a day, a month and a
year, we do not know how many months has a year, nor how many days has a
month. However, it should not be an impediment to solve this problem:

Given a sequence of badenic dates, you must write the first date that it
is between its previous one and its posterior one in the sequence. If
there are not any, indicate it.

For instance, \|32/15/2007\| is between \|23/2/1981\| and \|1/1/10234\|,
because is greater than the first date and less than the second date.
Another instance, \|10/10/2\| is between \|100/10/2\| and \|100/1/2\|,
because is greater than the first date and less than the second date.

Using the definition

        struct Date {
            int day, month, year;
        };

your program must include and use the function

        bool less_than(const Date& d1, const Date& d2);

that returns true if and only if the date \|d1\| is strictly less than
date \|d2\|.

## Input

The input starts with a natural number $n \ge 3$. Followed by $n$
different badenic dates, each one described with three natural numbers
separated by a slash, in this oder: day, month and year

## Output

Your program must print the first date that it is between its previous
one and its posterior one in the sequence. If there is not any, it must
indicate it. Follow the format of the instance.

## Observation

You can not use vector to solve this problem.

## Author

Professorat de P1 (en: Carlos Molina)

© Jutge.org, 2006--2025.

