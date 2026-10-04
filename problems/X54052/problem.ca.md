# Completant cadenes d'ADN

Una cadena d'ADN es pot veure com dues paraules de la mateixa longitud
formades amb els símbols `’A’`, `’C’`, `’G’`, `’T’` i posades una a
sobre de l'altra de manera que, per a qualsevol posició, es compleix
que:

- en una paraula hi apareix `’A’` si i només si en l'altra, en la
  mateixa posició, hi apareix `’T’`; i

- en una paraula hi apareix `’C’` si i només si en l'altra, en la
  mateixa posicio, hi apareix `’G’`.

Per exemple,

::: center
  --------- --
   `T` `C`  
   `A` `G`  
  --------- --
:::

seria una cadena d'ADN, mentre que

::: center
  --------- -- --
   `T` `A`     
   `A` `C`     
  --------- -- --
:::

::: center
  --------- --
   `T` `T`  
   `A` `C`  
  --------- --
:::

::: center
  --------- --
   `C` `G`  
   `A` `C`  
  --------- --
:::

no ho serien.

Imaginem-nos que ens donen una cadena d'ADN incompleta, en què alguns
dels símbols encara estan per determinar. De quines maneres es pot
completar perquè sigui una cadena d'ADN?

## Entrada

L'entrada consisteix en diversos casos. Cada cas comença amb un natural
$n$, la longitud de les paraules. A la línia següent vénen $n$ símbols
`’A’`, `’C’`, `’G’`, `’T’` o `’.’`, sense espais en blanc entremig,
corresponents a la primera paraula de la cadena d'ADN incompleta. A
continuació a la línia següent vénen $n$ símbols més `’A’`, `’C’`,
`’G’`, `’T’` o `’.’`, sense espais en blanc entremig, corresponents a la
segona paraula. Els punts '.' indiquen un símbol per determinar.

## Sortida

Per a cada cas, escriviu totes les cadenes d'ADN que es poden formar,
ordenades de manera que les primeres paraules de les cadenes segueixin
l'ordre lexicogràfic. Per a cada cadena, escriviu les dues paraules en
línies diferents, seguides d'una línia en blanc. Escriviu també una
línia amb 10 guions després de cada cas.

## Observació

Com es pot veure en els jocs de proves públics, és possible que algun
cas no admeti cap solució.

## Informació del problema

Autoria: Enric Rodriguez

Generació: 2026-01-25T16:52:06.400Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
