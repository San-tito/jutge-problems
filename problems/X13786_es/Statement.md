# Pareces más joven

Escrivid un programa que lea lineas. En cada linea de entrada, alguien
dice que edad tiene. Como respuesta, el programa tiene que decir que
este alguien parece más joven e indicar una edad menor.

Para edades entre 10 y 19 años, el programa indicará exactamente 1 año
menos.

Para edades entre 20 y 29 años, el programa indicará exactamente 2 años
menos.

Para edades entre 30 y 39 años, el programa indicará exactamente 3 años
menos.

Y así sucesivamente.

Seguid el formato de los ejemplos.

## Entrada

Cada linea de la entrada es de la forma:

    My name is NAME and I am N years old.

Donde `NAME` es un string no vacío sin espacios y N es un natural mayor
o igual a 10.

## Salida

Para cada caso de entrada, la salida contiene una linea de la forma:

    NAME, you look younger. I thought you were M years old.

Donde `NAME` es el mismo string de la entrada, i `M` se obtiene a partir
de `N` restando un número, que será 1 si `N` está entre 10 i 19, o 2 si
`N` está entre 20 i 29, o 3 si `N` está entre 30 i 39, i así
sucesivamente.

## Autor

PRO1

© Jutge.org, 2006--2025.

