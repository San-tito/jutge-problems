# Con muchos paréntesis

Implementad una función **recursiva** que, dado un `string` $s$ y un
número natural $n$, devuelva $s$ delimitado por paréntesis $n$ veces, y
también alternando el tipo de paréntesis. Hay que alternar entre
paréntesis \"`()`\" y corchetes \"`[]`\", y la primera vez (es decir,
con $n = 1$) utilizar paréntesis.

La cabecera es la siguiente:

    string parenthesize(string s, int n);

*Pista*: es conveniente utilitzar el operador `+` que en el caso de los
`string`s produce la concatenació de sus valores. Por ejemplo, en el
siguiente código

    string a = "ae", b = "iou";
    string c = a + b;

la variable `c` tendrá el valor `"aeiou"`.

## Observación

Sólo tenéis que enviar el procedimiento requerido; el programa principal
será ignorado.

## Observación

Hay que fijarse en que se pida una solución **recursiva**. Soluciones no
recursivas se invalidarán en la evaluación.

## Autor

PRO1

© Jutge.org, 2006--2025.

