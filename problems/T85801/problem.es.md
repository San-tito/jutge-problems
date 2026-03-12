# Paquetes de Red

Escribe un programa que simule un rúter de red (*router*). El rúter
tiene un *buffer* interno implementado con una cola de prioridad de
capacidad $N$. Cada paquete de red tiene tres campos: una prioridad
(entero), una dirección IP de origen (string) y una dirección IP de
destino (string). Representamos un paquete con el struct siguiente:

    struct Paquet {
        int prioritat;
        string origen, desti;
    };

Para poder usar el `pro2::Heap` con el struct `Paquet`, hay que definir
el operador `>` de la siguiente manera:

    bool operator>(const Paquet& p1, const Paquet& p2) {
        return p1.prioritat > p2.prioritat;
    }

El rúter funciona así: mientras la cola de prioridad tiene menos de $N$
elementos, simplemente añade los paquetes entrantes a la cola. Cuando la
cola está llena (tiene $N$ elementos), antes de añadir el nuevo paquete,
el rúter saca el paquete con la prioridad más alta, lo escribe por el
canal de salida, y después añade el nuevo paquete a la cola. Cuando ya
no hay más paquetes de entrada, el rúter vacía la cola de prioridad
escribiendo los paquetes restantes en orden de prioridad (de más alta a
más baja).

## Entrada

La primera línea contiene un entero $N$ (la capacidad del buffer del
rúter). A continuación, una secuencia de paquetes, uno por línea, cada
uno con tres campos: prioridad (entero), dirección IP de origen (string)
y dirección IP de destino (string). Las direcciones IP tienen el formato
`aaa.bbb.ccc.ddd`.

## Salida

Cada paquete que el rúter envía se muestra en una línea con el formato:
prioridad, espacio, dirección de origen, espacio, dirección de destino.

## Observación

Envía `program.cc` incluyendo `"heap.hh"`. Descarga los ficheros
públicos (icono del gatito).

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-03-05T21:05:14.834Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
