# Queues of a supermarket (1)

Simulate the behavior of the queues of a supermarket. Initially, there
are $n$ queues ($1, 2, \dots, n$), each one with some customers.
Afterwards, two events can happen:

- A costumer arrives to a queue: If the queue is between 1 and $n$, the
  customer goes to the end of that queue. Otherwise, the event is
  ignored.

- A customer leaves a queue: If the queue is between 1 and $n$, and that
  queue is not empty, the first customer of that queue leaves it.
  Otherwise, the event is ignored.

## Input

Input starts with the number of queues $n$ (a strictly positive natural
number). Follow $n$ lines, one per queue, each one with its customers (a
word), in the order in which they arrived to que queue. Follow an empty
line and the description of several events, one per line: the word
"`ENTERS`" followed by the customer (a word) and the queue (an integer
number); or the word "`LEAVES`" followed by the queue (an integer
number).

## Output

First, print the name of the customers that leave the queues, in the
order that they departed. Afterwards, print the final content of the $n$
queues, using the order in which the customers would leave. Follow the
format of the example.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T11:53:35.635Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
