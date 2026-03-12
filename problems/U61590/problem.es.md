# Palabra más larga

Haz una función con la cabecera:

    list<string>::const_iterator paraula_mes_llarga(const list<string>& L);

que devuelva un iterador constante a la palabra más larga que hay en la
lista `L`.

## Entrada

La función recibe una lista constante, de tamaño arbitrario.

## Salida

La función ha de retornar un iterador constante a la palabra más larga
de la lista. Si la lista está vacía, hay que devolver `L.end()`. Si hay
más de una palabra de la máxima longitud, hay que devolver un iterador a
la primera que se ha encontrado.

## Observación

En los archivos públicos (icono del gatito) encontrarás: `main.cc` y
`paraula_mes_llarga.cc` (donde debes implementar la función). También
hay un `Makefile` y el directorio `.vscode` que tiene la configuración
para compilar y depurar con VSCode.

Debes implementar `paraula_mes_llarga` en el archivo
`paraula_mes_llarga.cc`, compilar (está preparado para poder compilar y
depurar con VSCode), y enviar solo el archivo `paraula_mes_llarga.cc`.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:46:44.013Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
