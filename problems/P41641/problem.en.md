# Virus Mutations

Recall that the genetic code (see problem P36671) is a set of rules that
translates nucleotide sequences into proteins. When working with DNA
instead of messenger RNA, nucleotide sequences change the base `U` to
the base `T`.

Often, as a resistance mechanism against drugs, viruses mutate their DNA
while maintaining their functionality, i.e., synthesizing the same
protein. For example, if a virus had the sequence

::: center
\(1\) `GCCAATGACTAAGGCCTAAAGA`
:::

it would then synthesize the protein *Thr--Lys--Ala*. If the virus
mutated to sequence (2)

::: center
\(1\) `GCCAATGAC`*`T`*`AAGGCCTAAAGA`\
(2) `GCCAATGAC`**`C`**`AACGCCTAAAGA`
:::

(only the tenth base has changed), it would continue to synthesize
*Thr--Lys--Ala*. In this case, we say that one (or more) equivalent
mutations have occurred.

On the other hand, if the virus mutated to sequence (3)

::: center
\(1\) `GCCAATG`*`A`*`CTAAG`*`G`*`CCTAAAGA`\
(3) `GCCAATG`**`T`**`CTAAG`**`A`**`CCTAAAGA`
:::

(only the eighth and fourteenth bases), it would then synthesize
*Ser--Lys--Thr*, which is noted by indicating `Thr-1-Ser,Ala-3-Thr` (the
number indicates which codon the mutation occurred in).

Write a program that indicates whether pairs of DNA sequences represent
equivalent mutations and, if not, indicates which mutations have
occurred. The program should also state how many bases are different
between the `ATG` codon and the *Stop* codon.

## Input

The input begins with an integer $k$. Then, $k$ pairs of DNA sequences
of the same length follow. Each DNA sequence consists of a string of
characters '`A`', '`C`', '`T`', and '`G`' on a single line without
spaces.

All DNA sequences have an `ATG` codon before a *Stop* codon. The `ATG`
codon and the *Stop* codon never mutate in any pair of sequences, and no
mutation can introduce a new *Stop* codon. Pairs of sequences always
have the same length.

## Output

For each pair of DNA sequences in the input, indicate whether they are
equivalent or not. If they are not equivalent, indicate all the changes
produced by the mutations according to the standard notation described
above. The number of different bases should be written at the end of the
line, in parentheses.

Follow the format of the example.

## Problem information

Author: Unknown\
Translator: Jordi Petit

Generation: 2026-01-25T11:06:13.113Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
