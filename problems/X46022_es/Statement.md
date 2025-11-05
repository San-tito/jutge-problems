# Cuantos partidos gana cada uno?

Con el ánimo de hacer un gesto en pro de la concordia y la solidaridad
entre los pueblos del mundo, y mostrar que hay mejores vias y más
inocuas de solucionar conflictos, una compañía multinacional ha decidido
organizar un torneo de ping-pong entre dos equipos, uno formado por
trabajadores de la compañía que son Rusos, y otro formado por
trabajadores de la compañía que son Estadounidenses.

Hay $n$ personas en cada equipo. Cada miembro de un equipo juega dos
partidas contra cada miembro del otro equipo. Por tanto, en total cada
persona habrá jugado $2n$ partidas de ping-pong.

En realidad, se puede anticipar cuantas partidas ganará cada uno, porque
se conoce el nivel de cada persona como jugador de ping-pong. Qualquier
persona siempre gana las dos partidas a qualquier otra que tenga un
nivel inferior. En cambio, cuando una persona juega con alguien del
mismo nivel, entonces ganará exactamente una de las dos partidas, y por
tanto perderá la otra.

Se trata de calcular cuantas partidas ganará cada persona en total.

## Entrada

La entrada tiene varios casos. Cada caso comienza con un natural
positivo $n$ en una primera línea. Después, hay una segunda línea con
una lista de $n$ parejas (string, natural) indicando el nombre y el
nivel de los jugadores Rusos. Después hay una tercera línea en el mismo
formato e indicando nombre y nivel de los jugadores Estadounidenses.
Finalmente hay una línea en blanco.

## Salida

Para cada caso, la salida tiene dos líneas. Una primera línea con una
lista de $n$ parejas (string, natural) indicando el nombre y el número
de partidos ganados por cada uno de los jugadores Rusos. Los nombres
deben aparecer en el mismo orden que en la entrada. Una segunda línea
tiene la misma información y en el mismo formato para los jugadores
Estadounidenses. Finalmente sigue una línea en blanco.

## Observación

Evaluación sobre 10 puntos:

- Solución lenta: 5 puntos.

- Solución rápida: 10 puntos.

Entendemos como solución rápida una que es correcta, de coste $n\log(n)$
y capaz de superar los juegos de pruebas públicos y privados. Entendemos
como solución lenta una que no es rápida, pero es correcta y capaz de
superar los juegos de pruebas públicos.

## Autor

PRO1

© Jutge.org, 2006--2025.

