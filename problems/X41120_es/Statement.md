# Vector montañoso

Podemos describir el perfil de desnivel de una excursión por la montaña
mediante las alturas (respecto del nivel del mar) de diferentes puntos
consecutivos del trayecto. Una forma de almacenar esta información y de
representar así el perfil montañoso es mediante un vector que guarde las
alturas de diferentes puntos del trayecto y, en particular, de las cimas
que atraviesa.

Por ejemplo, el vector
$$v = [0, 250, 515, 880, 430, 990, 1300, 1000, 700, 400, 0]$$ descrive
la ascención a dos montañas con punto de partida i de regreso a nivel
del mar. La primera cima del trayecto se encuentra a $880$m, y la
segunda a $1300$m.

Escribid un programa que, dado un perfil montañoso representado en un
vector, calcule el número de cimas que contiene y cuáles de ellas son
más altas que la última cima del perfil.

Vuestro programa tiene que implementar y utilizar la función siguiente:

  // PRE: $|v|\geq 3$

  // POST: devuelve un vector con la altura de todos las cimas de $v$
(en el mismo orden)

    vector<int> calcula_cimas(const vector<int>& v);

que, dado un vector $v$ que representa un perfil montañoso, devuelve un
vector $w$ (con $|w|<|v|$) con todas las cimas de $v$ en el mismo orden
en que aparecían. El vector devuelto solo contiene las cimas de $v$.

## Entrada

La entrada está formada por un natural $n\geq 3$ que indica el número de
puntos del perfil montañoso. A continuación se encuentran los $n$
registros de altura de los diferentes puntos del trayecto. Las alturas
son números enteros.

## Salida

Hay que indicar el número total de cimas que tiene el perfil montañoso
descrito en la entrada y la altura de dichas cimas. A continuación, la
altura de aquellas cimas que sean más altas que la última cima descrita
en el perfil. En caso que no haya ninguna cima en el perfil, o que no
haya cimas más altas que la última, hay que indicarlo convenientemente.

Seguid el formato especificado en los ejemplos. Vuestro código tiene que
seguir las normas de estilo, y debe estar debidamente comentado.

## Autor

Professorat de PRO1 (es: Maria Blesa)

© Jutge.org, 2006--2025.

