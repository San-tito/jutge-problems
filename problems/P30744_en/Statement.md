# Robots (2)

This is a variation of the exercise 
`problem://problemsjutge.org:problems/p1/roura/robots-1.pbm` . Write a
program to simulate the movements of a robot located in a rectangular
world with $n$ rows and $m$ columns. The robot receives a sequence of
orders about where to move, either to the right, to the left, upwards or
downwards. The simulation must end if any instruction is incorrect, if
the robot goes out of the world, or if the robot repeats any position.

## Input

The first line contains two strictly positive natural numbers $n$ and
$m$. The second line has the initial row (between 1 and $n$) and the
initial column (between 1 and $m$). Follow several orders, one per line.
Each order is a non-empty word made up of only lowercase letters.

## Output

Print the positions visited by the robot, starting with the initial
position. If the robot goes out of the world, or if the robot repeats a
position, or if any order is not "`right`", "`left`", "`up`" or
"`down`", print "`out of bounds`", "`repeated position`" or
"`incorrect order`" and stop the simulation.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

