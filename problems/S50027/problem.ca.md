# Morse

Fes una funció amb la capçalera:

       string to_morse(string s, const map<char,string>& M);

que rep una paraula (`s`) i la passa al codi Morse. En aquest codi, cada
lletra de la paraula es converteix en una seqüència de punts i ratlles.
Per exemple, en Morse la lletra `'w'` (un `char`) es tradueix com
`".--"` (un `string`).

## Entrada

La funció rep una frase (amb caracters qualssevol) i un `map` que conté
la correspondència entra cada caràcter Morse i la seqüència de punts i
ratlles que el codifica. El `map` només conté com a claus lletres
majúscules i dígits.

## Sortida

Cal treure el missatge sencer en un `string`, és a dir, la concatenació
de totes les traduccions a Morse de cada lletra, separats per un espai
(i sense espai al final). Si una lletra és minúscula, s'ha de passar a
majúscules abans de buscar-la al map. Si una lletra no es troba al
`map`, s'ha d'ignorar (un cas típic són els espais).

## Observació

**No** feu el programa principal. El Jutge utilitza el següent programa
principal:

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

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-18T09:27:06.960Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
