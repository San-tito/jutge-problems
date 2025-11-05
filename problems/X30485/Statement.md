# Mass center of particles moving at constant velocity

`Preliminaries`

In this exercise we will implement a program that prints real numbers on
the output. Due to format and efficiency issues of `cin` and `cout` when
they manage real numbers, it is convenient to do some things that we
explain as follows.

At the beginning of function `main` you should place these instructions:

    	ios::sync_with_stdio(false);
    	cin.tie(0);    
    	cout.setf(ios::fixed);
    	cout.precision(5);

In order to print real numbers on the output, it is convenient to
include and use this function:

    void printDouble(double d)
    {
    	if (abs(d) < 1e-7)
    		cout << 0.0;
    	else
    		cout << d;
    }

Last but not least, do not use `endl` to print break lines. Use `’\n’`
instead, that is:

    	// This line has been replaced with next one:
    	// cout << endl;
    	cout << '\n';

**Exercise**

**Note:** In this exercise we will speak about positions of particles in
a 3-dimensional system, and about their velocities and masses. The
reference and units system is not too relevant, as long as the chosen
one is more or less standard and reasonable. Just in case someone feels
the need, you can imagine that we speak about meters, seconds, meters
per second and kilograms.

As input, we will have the position, velocity and mass of $n$ particles
$(p_1,v_1,m_1),\ldots,(p_n,v_n,m_n)$. In particular, the first particle
is at position $p_1$ at time $0$, moves at constant velocity $v_1$, and
its mass is $m_1$. Everything is supposed to be represented in a
cartesian coordinate system with three dimensions.

Furthermore, we will have $k$ values of time $t_1,\ldots,t_k$ as input.

We will have to determine the mass center of the $n$ particles after
$t_1$ time units, after $t_1+t_2$ time units, after $t_1+t_2+t_3$, ...,
after $t_1+\cdots+t_k$ time units.

It is compulsory to coherently use the following declarations of types,
and implement and coherently use the following functions. Otherwise, the
delivery will be invalidated. You can declare more data types and
implement more functions if you feel like doing so. That's actually
advisable in this exercise.

    struct Point {
    	double x, y, z;
    };

    struct Particle {
    	Point p,v;
    	double m;
    };

    // Pre:
    // Post: returns the sum of p1 and p2.
    Point sum(Point p1, Point p2)
    {
    	//...
    }

    // Pre:
    // Post: returns a times p.
    Point mul(double a, Point p)
    {
    	//...
    }

**Note:** We strongly advise you to start doing a simple implementation
in order to overcome the public tests, and to try to optimise it later
on, in order to overcome the private tests as well.

## Input

The input has several cases. Each one starts with two positive natural
numbers $n, k$ on a first line. Next, $n$ lines come, each describing
the position (three integers), velocity (three integers) and mass (a
positive natural) of a particle. Finally, $k$ lines come, each with a
positive natural that represents an elapsed time.

## Output

For each case, at first $k$ lines must be printed, where $i$'th line
contains the mass center (three reals rounded to 5 digits after the
decimal point) of all the particles after the sum of the first $i$
elapsed times. Secondly, $n$ lines must be printed, with the positions
(three reals rounded to 5 digits after the decimal point) of the
particles after the sum of all the elapsed times. Each case is followed
by a blank line.

## Observation

Grading up to 10 points:

- Slow solution: 5 points.

- Fast solution: 10 points.

We understand as a fast solution one which is correct, with linear cost
and which passes the public and private tests. We understand as slow
solution one which is not fast, but it is correct and passes the public
tests.

## Author

PRO1

© Jutge.org, 2006--2025.

