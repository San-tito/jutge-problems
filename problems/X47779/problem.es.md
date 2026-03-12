# Morse

Haz una función con la cabecera:

       string to_morse(string s, const map<char,string>& M);

que recibe una frase (`s`) y la pasa al código Morse. En este código,
cada letra de la frase se convierte a una secuencia de puntos i rayas.
Por ejemplo, en Morse la letra `'w'` (un `char`) se traduce como `".--"`
(un `string`).

## Entrada

La función recibe una frase (con cualquier caracter) y un `map` que
contiene la correspondencia entre cada caracter Morse y la secuencia de
puntos y rallas que lo codifica. El `map` solo contiene como llaves
letras mayúsculas i dígitos.

## Salida

Hay que devolver el mensaje entero en un `string`, es decir, la
concatenación de todas las traducciones a Morse de cada letra en la
frase, separadas por un espacio (y sin espacios al final). Si una letra
es minúscula, hay que pasarla a mayúsculas antes de buscarla en el
`map`. Si una letra no está en el `map`, hay que ignorarla (un caso
típico son los espacios).

## Observación

**No** hay que hacer el programa principal. El Jutge utilitza el
siguiente:

       map<char, string> M;
       M['A'] = ".-";   M['B'] = "-..."; M['C'] = "-.-."; M['D'] = "-..";
       M['E'] = ".";    M['F'] = "..-."; M['G'] = "--.";  M['H'] = "....";
       M['I'] = "..";   M['J'] = ".---"; M['K'] = "-.-";  M['L'] = ".-..";
       M['M'] = "--";   M['N'] = "-.";   M['O'] = "---";  M['P'] = ".--.";
       M['Q'] = "--.-"; M['R'] = ".-.";  M['S'] = "...";  M['T'] = "-";
       M['U'] = "..-";  M['V'] = "...-"; M['W'] = ".--";  M['X'] = "-..-";
       M['Y'] = "-.--"; M['Z'] = "--..";
       M['0'] = "------"; M['1'] = ".-----"; M['2'] = "..---"; M['3'] = "...--";
       M['4'] = "....-";  M['5'] = ".....";  M['6'] = "-...."; M['7'] = "--...";
       M['8'] = "---..";  M['9'] = "----.";

       string s;
       getline(cin, s);
       cout << '"' << to_morse(s, M) << '"' << endl;

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-01-25T16:28:52.841Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
