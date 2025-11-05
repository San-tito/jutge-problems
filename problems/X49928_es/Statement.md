# Cuántas frases hay después de una pregunta i con más a's que b's

Las entradas de este ejercicio son varias frases no-vacías formadas por
**`a`**'s y **`b`**'s y acabadas en un signo de puntuación, que puede
ser **`.`** o **`?`** o **`!`**. Cada frase va en una línea diferente
para hacer más clara la presentación. Por ejemplo, esta sería una
posible entrada del ejercicio:

    bbb?
    aabba.
    b.
    bbbba?
    abbaa?
    aaabbb!
    babbabb.
    bbabb!
    aa!

Las frases acabadas en **`.`** se llaman sentencias.

Las frases acabadas en **`?`** se llaman preguntas.

Las frases acabadas en **`!`** se llaman exclamaciones.

Implementad un programa que lea estas entradas y diga cuantas frases hay
que aparezcan inmediatamente después de una pregunta y que tengan
estrictamente más **`a`**'s que **`b`**'s.

En el ejemplo anterior, la respuesta sería 2. Fijaos en que después de
la pregunta **`bbb?`** aparece la frase **`aabba.`**, que tiene
estrictamente más **`a`**'s que **`b`**'s. Además, después de la
pregunta **`bbbba?`** aparece la frase **`abbaa?`**, que tiene
estrictamente más **`a`**'s que **`b`**'s. Por tanto, sumamos 2. También
tenemos que después de la pregunta **`abbaa?`** aparece la frase
**`aaabbb!`**, pero esta no tiene estrictamente más **`a`**'s que
**`b`**'s.

## Entrada

La entrada tiene un número arbitrario de líneas. Cada línea tiene uno o
más caracteres **`a`** o **`b`** finalizados por un signo de puntuación
**`.`** o **`?`** o **`!`**.

## Salida

Para cada línea de la entrada, hay que escribir un natural, el número
total de frases que vienen inmediatamente a continuación de preguntas, y
que tienen estrictamente más **`a`**'s que **`b`**'s.

## Observación

No se puede utilizar ningún método de almacenamiento masivo de datos, ni
siquiera `string`. Lee y trata la secuencia caracter a caracter. En
particular, usar `getline` o similar está prohibido, y el motivo es
obvio: en condiciones normales, las frases no vendrían separadas por
saltos de línea. De hecho, que la entrada separe las frases con saltos
de línea es solo por motivos de claridad en la presentación del
ejercicio. Por ejemplo, si se van leyendo caracteres com `cin `$>>$` c`,
es irrelevante si hay saltos de línea o no, porque la lectura con `cin`
ignora los saltos de línea.

Evaluación sobre 10 puntos:

- Solución lenta: 5 puntos.

- Solución rápida: 10 puntos.

Entendemos por solución rápida una que es correcta, de coste lineal y
capaz de superar los juegos de pruebas públicos y privados. Entendemos
como solución lenta una que no es rápida, pero es correcta y capaz de
superar los juegos de prueba públicos.

## Autor

PRO1

© Jutge.org, 2006--2025.

