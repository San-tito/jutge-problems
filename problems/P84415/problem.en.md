# Bag of words

You have an initially empty bag, where you can store words, and from
where you can delete words. Words can be repeated. Deleting a word means
removing one of its appearances. Deleting a nonexistent word does not
have any effect. At any moment you can be asked for the
(lexicographically) greatest word of the bag, and how many times it is
repeated. You can also be asked for the same about the smallest word.

## Input

Input consists of several lines. Each line contains either
"`store `$w$", where $w$ is a word, or "`delete `$w$", where $w$ is a
word, or "`maximum?`", or "`minimum?`". Every word is made up of only
one or more lowercase letters.

## Output

For each query, print the greatest word (or the smallest) contained in
the bag at that moment. If, at the moment of answering any query, the
bag is empty, tell so. Follow the format of the example.

## Problem information

Author: Unknown\
Translator: Carlos Molina

Generation: 2026-01-25T12:02:08.546Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
