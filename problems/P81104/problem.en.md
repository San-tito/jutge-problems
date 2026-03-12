# F001A. Students at the FIPS

The Poble Sec School of Informatics stores the information of its
students and the marks they have obtained in the subjects they have done
in this struct:

        struct Student {
            string name;             // Student's name
            int idn;                 // Student's IDN
            vector<Subject> subj;    // Subject list of the student
        };

where \|Subject\| is:

        struct Subject {
            string name;                // Subject's name
            double mark;                // Between 0 and 10, -1 shows NP
        };

Using these definitions, implement the function

        double mark(const vector<Student>& stu, int idn, string name);

that searches and returns the mark that the student \|idn\| has obtained
at the subject \|name\|. If the student does not exist, or if he has not
done the subject, or his mark is NP, the function must return $-1$.

You also have to implement the function:

    double mean(const vector<Subject>& subj);

that calculates and returns the average mark of the subjects in the
vector \|subj\|. To calculate the average mark, NP must be ignored. If
all the marks are NP or the vector is empty, the mean mark is $-1$.

Using the previous functions, you must implement:

        void count(const vector<Students>& stu, int idn, string name, int& counter);

that counts and sets in the output parameter \|counter\| the number of
students in the vector \|stu\| that have a average mark greater than the
mark that student \|idn\| has obtained at the subject \|name\|.

## Precondition

There are not repeated students. In the list of subjects of each student
there are not repeated subjects.

## Observation

The main program is already done; do not modify it. This program reads
the student's data, then prints the result of your \|count()\| function
for each combination student-subject of the input.

(In the instance, the average marks of Helen, Michael, Peter, Alicia,
Paul, John and George are respectively 9.5, 8, 0, 5.25, $-1$, 9.25 and
$-1$. The 2 in the output corresponds to Helen and John. The 1
corresponds to Helen. The 5 correspond to Helen, Michael, Peter, Alicia
and John).

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T11:52:44.814Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
