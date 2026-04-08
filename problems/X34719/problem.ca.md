# Scraper Bots

L'empresa Digital Pond disposa del registre de visites a la seva web
(també anomenat el *log*) des de tots els ordinadors del món. El
registre és cronològic i té el següent format:

    72.91.13.24  /favicon.ico  11797
    62.55.11.182 /index.html   15244
    13.13.4.81   /js/main.js   17912
    171.82.6.28  /login        21892
    72.91.13.24  /index.html   29265
    171.82.6.28  /detail?id=13 54401
    ...

A cada línia del registre hi ha un accés a una pàgina del servidor web,
amb la IP (adreça d'internet numèrica de l'ordinador que inicia la
connexió), la ruta o *path* dins de la web (p.e. `/index.html`), i
finalment l'instant de temps de la connexió (que es mesura en
mil·lisegons des del moment d'iniciar el servidor web).

Digital Pond ens demana que fem un programa per detectar **scraper
bots**, que són programes que rastregen la web a molta velocitat,
descarregant totes les pàgines que van trobant. Aquests programes poden
ser ben intencionats(com el *Google Bot*), però també poden ser
utilitzats per a l'extracció de dades de la web sense permís.

Sigui $a_1, a_2, \ldots, a_n$ la seqüència d'accessos des d'una IP
donada, per exemple, `89.68.225.93`. Considerarem que aquesta IP és un
*bot* si la seqüència d'accessos conté una subseqüència de 20 accessos
consecutius $a_i, \ldots, a_{i+19}$ amb $1 \leq i \leq n-19$ tal que
$time(a_{k+1}) - time(a_{k}) < 100$, amb $i \leq k \leq i+18$, i a on
$time(a)$ és el temps de l'accés $a$. Un reguitzell d'accessos amb
diferències de temps tan petites és un ritme de visites impossible per a
un humà i per tant demostra que l'accés prové d'una màquina.

## Entrada

El llistat d'accessos a la web, un per línia: la IP, el *path* i un
temps en mil·lisegons, que representa el temps transcorregut des de
l'inici de l'execució del servidor.

## Sortida

Si no hi ha bots, una línia amb \"No bots\". En cas contrari, tantes
línies com *bots* s'hagin trobat, i en cadascuna la IP seguida de tots
els *paths* consultats pel bot (incloent els que estan fora de la
subseqüència que l'ha delatat), separats per un espai, i per ordre
lexicogràfic. Les diferents IPs també s'han desciure per ordre
lexicogràfic, malgrat les IPs siguin numèriques.(En ordre lexicogràfic,
la IP \"111.2.2.2\" és més petita que \"2.2.2.2\", perquè, si es miren
els dígits com lletres, el dígit `1` és més petit que el dígit `2`.)

## Informació del problema

Autoria: Pau Fernández

Generació: 2026-03-24T11:37:14.458Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
