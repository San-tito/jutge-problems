# Interest rates

Professor Obokaman and Professor Oak go to buy something cheap for
lunch. As usual, Prof. Obokaman has no cash at hand, so he asks some
coins to Prof. Oak.

"No problem", says Prof. Oak. "I lend you 5 euros. Since you are a good
friend of mine, I will only charge you 1 euro per day until you return
the coins to me."

Prof. Obokaman looks a bit puzzled by this offer, so Prof. Oak adds:
"You see, now banks charge a daily interest rate of $0.013368$%, right?"

Prof. Obokaman knows that banks charge 5% every year. Since he is a
bright mathematician, he has no problems to mentally check that this is
indeed true (assuming 365 days per year):
$1.00013368^{365} \simeq 1.05$. "Yes, but..." he tries to say.

"Therefore", Prof. Oak interrupts, "if you wait enough days before
returning the coins to me, let's see... days or more, to be precise,
then my deal is better than the banks' offer."

Prof. Obokaman agrees that this reasoning is correct, but he is too
polite to say that he will very likely return the coins sooner than
that, losing a lot of money...

## Input

Input consists of several test cases. Each test case consists of three
real numbers: the amount of money $m$ of the coins generously lent by
Prof. Oak, the fixed amount of money $f$ charged daily to
Prof. Obokaman, and the % daily interest rate $r$ offered by the banks.
You can assume $0.1 \le m \le 1000$, $0.1 \le f \le 1000$, and
$0.001 \le r \le 10$.

## Output

For every test case, print the minimum number of days $d$ that
Prof. Obokaman should wait before returning the money to get a deal that
is better than the banks' offer. Assume that the test cases have no
precision issues, and that every solution $d$ will be between 1 and
$10^7$.

## Problem information

Author: Salvador Roura

Generation: 2026-01-25T11:30:51.251Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
