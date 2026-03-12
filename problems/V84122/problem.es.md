# Codificar en Base64 (1)

**Preliminares**

En base 2 tenemos 2 dígitos (`0` y `1`), en base 10 tenemos 10 (`0`,
`1`, `2`, \..., `9`), y en base 16 tenemos 16 (el hexadecimal, que
utiliza `0`, `1`, `2`, \..., `9`, `A`, `B`, `C`, `D`, `E`, y `F`).

La **base 64** es pues, simplemente, una base con muchos más dígitos.
Pero dado que necesitamos 64 símbolos diferentes para representar todos
los dígitos, es necesario usar todas las letras del código ASCII (26
mayúsculas y 26 minúsculas, en total 52), y todos los dígitos decimales
(0 a 9, en total 10). De hecho esto no es suficiente, porque nos da 62
símbolos en total. Para llegar a los 64, se eligieron el '`+`' para el
dígito 62 y '`/`' para el 63.

Las correspondencias exactas entre dígitos en base 64 y sus caracteres
respectivos son estas:

- Del 0 al 25, la correspondiente letra mayúscula,

- del 26 al 51, la correspondiente letra minúscula,

- del 52 al 61, el correspondiente dígito decimal,

- el 62 es el carácter '`+`'; y

- el 63 es el carácter '`/`'.

Así pues, si mostramos los caracteres ASCII utilizados, todos juntos y
en orden, en la codificación de base 64 (que, por cierto, es un
estándar), tenemos:

    ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/

**Objetivo**

Haz una **función** que, dado un valor en base 64 retorne su carácter
asociado. La función tiene la cabecera:

    /**
     * @brief Pasa un valor en base 64 a un carácter.
     * @pre Precondición: `d` >= 0 y `d` <= 63
     */
    char base64_to_char(int d);

## Observación

Este problema tiene como centros de interés la **corrección** y la
**legibilidad**. Solo hay que enviar la función solicitada; el programa
principal será ignorado. No se pueden utilizar las funciones `isupper`,
`islower` de la biblioteca estándar.

## Información del problema

Autoría: Pau Fernández

Generación: 2026-01-25T13:12:47.593Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
