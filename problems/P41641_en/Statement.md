# Mutations of viruses

Remember that the genetic code (see problem P36671) is a set of rules
that translates sequences of nucleotides to proteins. Working with DNA
instead of messenger RNA, the sequences of nucleotides change the base
\@U@ for the base \@T@.

Often, as a reaction of resistance against drugs, the viruses mutate
their ADN maintaining their functionality, that is, synthesizing the
same protein. For instance, if a virus had the sequence
$$\text{GCCAATGACTAAGGCCTAAAGA}$$ then would synthesize the protein
\@Thr-Lys-Ala@. If the virus mutates to
$$\text{GCCAATGACCAACGCCTAAAGA}$$ (the tenth base has changed from \@T@
to \@C@), it would still synthesize \@Thr-Lys-Ala@. In this case, we say
that one (or more) equivalent mutations have been produced.

However, if the virus mutated to $$\text{GCCAATGTCTAACGCCTAAAGA}$$ (the
eighth base has changed from \@A@ to \@T@ and the fourteenth base has
changed from \@G@ to \@A@), then would synthesize \@Ser-Lys-Leu@, fact
that is noticed indicating \@Thr-1-Ser,Ala-3-Leu@ (the number indicates
in which codon the mutation has been produced).

Write a program that prints if pairs of DNA sequences represent
equivalent mutations and, if not, prints which mutations have been
produced. The program must print also how many different bases there are
between the \@ATG@ codon and the Stop codon.

## Input

Input starts with a natural number $k$. After, come $k$ pairs of DNA
sequences of the same length. Each DNA sequence is formed by a strip of
characters '`A`', '`C`', '`T`' and '`G`' in a line without spaces. All
the DNA sequences have an \@ATG@ codon before a Stop codon. The \@ATG@
codon and the Stop codon never mutate in each pair of sequences nor any
mutation can introduce a new Stop codon. The pairs of sequences always
have the same length.

## Output

For each pair of DNA sequences of the input, print if are or are not
equivalent. In case that they are not equivalent, print the changes that
mutations have produced according to standard notation described
previously. The number of different bases must be written at the end of
the line, in brackets.

Follow the format of the example.

## Author

Salvador Roura (en: Carlos Molina)

© Jutge.org, 2006--2025.

