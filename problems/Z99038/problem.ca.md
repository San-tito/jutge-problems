# Rànking de tennis (1)

En el tennis professional, les classificacions de l'ATP i la WTA ordenen
els jugadors i jugadores pels punts acumulats durant la temporada. Cada
torneig atorga una certa quantitat de punts als participants, i la
classificació es calcula sumant tots els punts guanyats (o restant els
perduts) al llarg de l'any.

Feu un programa que, donada una llista de jugadors i una seqüència
d'actualitzacions de punts, mostri la classificació final ordenada de
més a menys punts.

Per facilitar la lectura de l'entrada, es disposa d'una funció
`llegeix_jugador` al fitxer `main.cc` descarregable, que llegeix una
línia de la primera part de l'entrada i retorna el codi i el nom del
jugador:

    // Llegeix un jugador de l'entrada.
    // Retorna cert si s'ha llegit correctament, fals si s'ha arribat a "---".
    bool llegeix_jugador(string& codi, string& nom);

## Observació

En aquest problema el centre d'interès és l'eficiència. Cal trobar una
forma intel·ligent d'emmagatzemar els jugadors per poder actualitzar els
seus punts sense fer cerques innecessàries.

Com que el problema és de tipus `G++17`, cal enviar un sol fitxer `.cc`
amb tot el programa. Es pot fer servir el `main.cc` proporcionat com a
base.

## Entrada

L'entrada té dues parts, separades per una línia amb `---`.

La primera part conté la llista de jugadors, un per línia. Cada línia té
un codi de 6 caràcters (lletres majúscules i dígits), seguit d'un espai
i el nom del jugador (que pot contenir espais) fins al final de línia.

La segona part conté una seqüència de parelles *codi punts*, una per
línia, on *codi* és el codi d'un jugador de la primera part i *punts* és
un enter amb signe (`+N` o `-N`) que indica els punts guanyats o
perduts. La seqüència acaba amb fi d'entrada.

## Sortida

La classificació final, amb un jugador per línia, en format:

    posició. Nom del Jugador - punts

ordenada de més a menys punts. Si un grup de jugadors té els mateixos
punts, s'ordenen per nom. La posició comença en 1.

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:36:20.496Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
