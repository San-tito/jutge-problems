# Juntar palabras

Haz una función con la cabecera:

    string join(vector<string>::iterator begin, 
                vector<string>::iterator end,
                string separador);

que recibe una secuencia de `string`s y los concatena usando el
separador `sep`.

## Entrada

La función recibe dos iteradores `begin` y `end` y un `string` que es un
separador.

## Salida

La función retorna un solo `string` que es la concatenación de los
`string`s entre `begin` y `end` (incluyendo `begin` pero excluyendo
`end`) y poniendo el separador `sep` entre cada par de `string`s.

## Observación

En los archivos públicos (icono del gatito) encontrarás: `main.cc` y
`join.cc` (donde debes implementar la función). También hay un
`Makefile` y el directorio `.vscode` que tiene la configuración para
compilar y depurar con VSCode.

Debes implementar la función `join` en el archivo `join.cc`, compilar
(está preparado para poder compilar y depurar con VSCode), y finalmente
**enviar solo el archivo `join.cc`**. No es necesario hacer un `.tar`.

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:46:35.183Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
