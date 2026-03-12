# Operaciones sobre una secuencia

Escribe un programa que mantenga una secuencia de enteros i una posición
dentro de la secuencia. Inicialmente, la secuencia está vacía y la
posición está al final (es decir, detrás del último elemento, no se
encuentra sobre ningún elemento).

El programa debe leer y ejecutar una secuencia de comandos. Los comandos
posibles son:

- `ins x`: Inserta el entero $x$ justo delante de la posición actual.
  Después, la posición apunta al nuevo elemento insertado.

- `del`: Si la secuencia está vacía o la posición está al final, no hace
  nada. En caso contrario, borra el elemento apuntado por la posición y
  la posición pasa a apuntar al que era el siguiente elemento (o al
  final, si el elemento borrado era el último).

- `++`: Si la posición no está al final, avanza al siguiente elemento.
  En caso contrario, no hace nada.

- `--`: Si la secuencia está vacía o la posición está en el primer
  elemento, no hace nada. En caso contrario, retrocede al elemento
  anterior.

Por ejemplo, partiendo de la secuencia vacía, `ins 3` inserta el 3 y la
posición lo apunta. Luego, `ins 1` inserta el 1 justo delante del 3 y la
posición apunta al 1. Con `++` la posición avanza hasta el 3.
Finalmente, `ins 2` inserta el 2 justo delante del 3 y la posición lo
apunta. La secuencia resultante es `1 [2] 3` (los corchetes indican la
posición).

Después de ejecutar todos los comandos, el programa debe escribir la
secuencia resultante con la posición marcada.

## Observación

La eficiencia del programa es importante: hay que elegir el contenedor
adecuado para que las operaciones de inserción y borrado se hagan en
tiempo constante. De lo contrario, el programa no pasará los juegos de
pruebas de eficiencia.

## Entrada

La entrada consiste en una secuencia de comandos, uno por línea. Cada
comando puede ser `ins` (seguido de un espacio y un entero), `del`, `++`
o `--`.

## Salida

La salida es una línea con los elementos de la secuencia separados por
espacios. El elemento apuntado por la posición se muestra entre
corchetes (por ejemplo, `[5]`). Si la posición está al final, se escribe
`[]` al final (con un espacio de separación si la secuencia no está
vacía). Si la secuencia está vacía, se escribe únicamente `[]`.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:47:40.781Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
