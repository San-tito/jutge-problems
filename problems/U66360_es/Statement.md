# Amenazas alienígenas

Los científicos han descubierto unas **zonas espaciales** (representadas
por matrices bidimensional) en las que se han detectado alienígenas. Las
celdas de cada matriz contienen un valor entero que indica la densidad
de alienígenas en esa posición específica. Los científicos necesitan
identificar ciertas zonas críticas que podrían indicar mayor amenaza
para los humanos.

## Entrada

Una secuencia de **zonas espaciales**, terminada con un cero. Cada zona
viene indicada por:

- Un entero n que representa el número de filas de la matriz
  ($1 \leq n \leq 100$).

- Un entero m que representa el número de columnas de la matriz
  ($1 \leq m \leq 100$).

- Una matriz de tamaño $n \times m$ que contiene enteros no negativos
  que representan la densidad de alienígenas en cada celda de la matriz.

- Un entero k que representa el tamaño del \"cuadrado de análisis\"
  ($1 \leq k \leq min(n, m)$). Este cuadrado es una submatriz de tamaño
  $k \times k$ que se utilizará para analizar zonas críticas.

## Salida

Hay que mostrar 3 informaciones:

- Por cada zona espacial de la secuencia, la posición (índice de fila y
  columna) del vértice superior izquierdo del subcuadrado $k \times k$
  que contiene la mayor densidad total de alienígenas. Si hay empate
  entre varios subcuadrados, escribir la posición del subcuadrado con la
  posición de la fila más pequeña.

- La suma total de las densidades de alienígenas dentro de ese
  subcuadrado.

- El valor máximo de densidad dentro de ese subcuadrado.

## Observación

Es obligatorio hacer, como mínimo, un subprograma que lea una **zona
espacial** entera. El subprograma recibe una matriz por referencia y la
llena con valores leídos de la entrada. Sin embargo, probablemente es
conveniente hacer más subprogramas para este problema.

## Autor

Unknown

© Jutge.org, 2006--2025.

