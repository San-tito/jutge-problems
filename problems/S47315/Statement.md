# Obfuscation

Obfuscation of a string $s = c_1 c_2 c_3 \dots c_k$ with respect to a
natural number $n$ consists of changing all the letters $c_i \in s$ by
the letter that is $n$ places after $c_i$ in the alphabet.

For example, `ofuscacio(1,'A') = 'B'`, because `'B'` is one place after
`'A'`. Other examples: `ofuscacio(4,'B') = 'F'` and
`ofuscacio(2,'AB') = 'CD'`.

The function **recursive** `void ofuscacio(int n, string s)` must be
implemented with the following specification:

`PRE: ` The input is an integer $n$ such that $0 \leq n \leq 20$ and a
string of characters $s = c_1 c_2 c_3 \dots c_k$ such that $k > 0$ and
$\forall c_i \in s, 'A' \leq c_i \leq 'F'$.

`POST:` writes to the output channel `cout` the obfuscation of the
string of characters $s$ with respect to $n$.

## Observation

If necessary, you can use the method `pop_back()` for vectors and
`string`.

Only recursive solutions are accepted.

Just send the function. The rest will be ignored.

## Input

An integer $n$ such that $0 \leq n \leq 20$ and a string of characters
$s = c_1 c_2 c_3 \dots c_k$ such that $k > 0$ and
$\forall c_i \in s, 'A' \leq c_i \leq 'F'$.

## Output

For each pair `n, s`, the obfuscation of `s` with respect to `n`.

## Author

PRO1

© Jutge.org, 2006--2025.

