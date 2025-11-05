# Easter Sundays

Easter Sunday is a mobile holiday corresponding to the first Sunday
after the first full moon of the spring. Write a program to compute the
day $D$ and the month $M$ of the Easter Sunday of every given year $Y$.

Below, `:=` indicates assignment, `div` indicates integer division, and
`mod` indicates the remainder of the integer division. To solve this
problem, use the Gauss method:

- Compute

  1.  $k := Y~\text{div}~100$

  2.  $x := Y ~\text{mod}~ 19$

  3.  $b := Y ~\text{mod}~ 4$

  4.  $c := Y ~\text{mod}~ 7$

  5.  $q := k~\text{div}~4$

  6.  $p := (13+8k)~\text{div}~25$

  7.  $y := (15-p+k-q) ~\text{mod}~ 30$

  8.  $z := (19x+y) ~\text{mod}~ 30$

  9.  $n := (4+k-q) ~\text{mod}~ 7$

  10. $e := (2b+4c+6z+n) ~\text{mod}~7$

- If $z+e \le 9$, then $D := 22+z+e$ and $M := 3$.

- Otherwise, if $z=29$ and $e=6$, then $D := 19$ and $M := 4$.

- Otherwise, if $z=28$ and $e=6$ and $x>10$, then $D := 18$ and
  $M := 4$.

- Otherwise, $D := z+e-9$ and $M := 4$.

## Input

Input consists of several natural numbers between 1800 and 9999.

## Output

Print the day and the month of the Easter Sunday of each year.

## Author

Jordi Petit (en: Carlos Molina)

© Jutge.org, 2006--2025.

