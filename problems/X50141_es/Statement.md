# Función para engrosar números

En este problema, dado cualquier número natural $x$ con $n$ dígitos
$x_1 \dots x_n$, diremos que $y = y_1 \dots y_n$ es el resultado de
engrosar $x$ si, para todo $i$ entre 1 y $n$,
$y_i = \max\{x_1, \dots, x_i\}$. Por ejemplo, si engrosamos 7 obtenemos
7, si engrosamos 32064781 obtenemos 33366788, y si engrosamos 9000000
obtenemos 9999999.

Escribid una función

        int engrosa(int x);

que devuelva el resultado de engrosar \@x@.

No podéis utilizar vectores en vuestro código. Os sugerimos que penseis
una implementación recursiva. Si lo consideráis conveniente, podéis
implementar y usar procedimientos auxiliares.

Vuestro código debe seguir las normas de estilo y contener los
comentarios que consideréis oportunos.

## Precondición

Se cumple $0 <$ \@x@ $< 10^9$.

## Observación

Sólo tenéis que enviar el procedimiento requerido; el programa principal
será ignorado.

## Autor

Jordi Cortadella (es: Maria Serna)

© Jutge.org, 2006--2025.

