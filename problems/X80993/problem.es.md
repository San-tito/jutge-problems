# Ok Cupid

El sistema *online* "`okcupid.com`" de citas a ciegas tiene una base de
datos donde cada persona registrada tiene asociado un número entero $t$.
Este número cumple $-10^6 \leq t \leq 10^6$ i permite clasificar a la
persona a grandes rasgos. El número de cada persona está diseñado de tal
manera que cuando dos personas son compatibles la suma de sus números
$t$ es 0.

Haz un programa que lea los datos de los usuarios de `okcupid.com` y
genere una lista de las personas compatibles con cada usuario.

## Entrada

Una secuencia de parejas nombre-número, posiblemente vacía. El nombre
esun solo `string` (el nombre de usuario, que contiene letras y dígitos)
y el número es el entero $t$ asociado.

## Salida

La salida consiste un una línea para cada usuario, por orden alfabético.
La línea para el usuario $A$ comienza con su nombre y sigue con una
secuencia de los nombre de los usuarios compatibles con $A$. Está claro
que entre los usuarios compatibles con $A$ no puede estar $A$ mismo.
Además, entre cada pareja de nombres solo hay un espacio.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-01-25T16:36:15.991Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
