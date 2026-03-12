# Students

Using the definition

        struct Student {
            int idn;
            string name;
            double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
            bool repeater;
        };

implement the procedure

        void information(const vector<Student>& stu, double& min, double& max, double& avg)

that computes the minimum mark (@min@), the maximum mark (@max@) and the
average mark (@avg@) of all the students of the table \@stu@ that have
taken the exam and that are not repeaters. If none of the students that
has these requirements, the value of these parameters must be $-1$.

## Observation

You only need to submit the required classes; your main program will be
ignored.

Strictly obey the type definitions of the statement.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T09:57:43.813Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
