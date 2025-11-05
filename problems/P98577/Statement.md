# El campanar de la Torrassa strikes back

![image](campanar.png){width="5.1cm"}

*El campanar de la Torrassa* is well known for annoying its neighbors
with the sound of its bells. Recently, the priest of this church has
decided to collect money to buy a new iron bell for the bell tower. He
plans to sound it every time the clock's hands overlap. For instance,
the bell will sound at 12:00 and at around 13:05. According to the
priest, this new way of playing the bells will double the number of
faithful (which should be easy because his church is usually almost
empty).

Before authorizing this innovation, the bishopric wants to know the
number of times that the bell will sound during a large amount of time.
Specifically, given a starting time ($h$:$m$) and a length in minutes
$\ell$, how many times will the bell sound during this period of time?

## Input

Input consists of several cases, each one with three integer numbers
$h$, $m$ and $\ell$. Assume $0 \le h \le 23$, $0 \le m \le 59$, and
$0 \le \ell \le 2^{30}$.

## Output

For every case, print the number of times that the new bell will sound
starting at ($h$:$m$) for a length of $\ell$ minutes. Take into account
that, because of a small delay, the bell will sound twenty-four
miliseconds after the clock's hands have actually overlapped.

## Author

Jordi Petit

© Jutge.org, 2006--2025.

