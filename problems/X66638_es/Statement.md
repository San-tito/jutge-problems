# Primero dígitos impares (1,3,5,7,9), después dígitos pares positivos (2,4,6,8)

Implementad un programa que, para cada natural positivo `x` de entrada,
escriba dos naturales `y,z` separados por un espacio en blanco. El
natural `y` está formado por la subsecuencia de dígitos de `x` que son
pares (es decir, del conjunto `{1,3,5,7,9}`), seguida de la subsecuencia
de dígitos de `x` que son pares y positivos (es decir, del conjunto
`{2,4,6,8}`). El natural `z` es simplemente el doble de `y`, es decir,
`z == 2*y`.

Por ejemplo, si `x` es 250813126, entonces el programa ha de escribir en
primer lugar el natural 51312826, pues la subsecuencia de dígitos
impares de `x` és 5131, i la subsecuencia de dígitos pares y positivos
de `x` és 2826. En segundo lugar, el programa ha de escribir 102625652,
pues es el doble de 51312826.

## Entrada

La entrada consiste en varios casos de naturales positivos `x`, cada uno
en una linea.

## Salida

Para cada `x` de entrada, el programa escribe los correspondientes `y,z`
en una nueva linea, y separados per un espacio en blanco.

## Observación

Resolved este ejercicio utilizando sólo el tipo`int` y manipulando
enteros con operaciones básicas (`+,-,*,/,%`).

## Autor

PRO1

© Jutge.org, 2006--2025.

