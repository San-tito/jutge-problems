# Fusión de listas ordenadas

Escribe la siguiente función, que fusiona dos listas de frutas en
**orden descendente**. Las listas pueden contener frutas con nombres
repetidos, posiblemente con precios diferentes.

    /**
     * @brief Fusiona dos listas ordenadas preservando el orden.
     * 
     * @param a Lista en orden descendente (puede contener nombres repetidos).
     * @param b Lista en orden descendente (puede contener nombres repetidos).
     * 
     * @return Lista en orden descendente con los elementos de a y b.
     */
    list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b);

Una fruta va antes que otra cuando su precio es mayor, y si el precio es
el mismo, cuando el nombre es lexicográficamente anterior. La
comparación entre dos frutas la implementa ya el método
`is_greater_than` que aparece a continuación. La declaración completa de
la clase `Fruit` es la siguiente:

    class Fruit {
     public:
           Fruit(string name, int price); // Construye una fruta

    string name()  const; // devuelve el nombre
       int price() const; // devuelve el precio

        // Determina si una fruta tiene un precio mayor o si con el mismo 
        // precio, el nombre es anterior a `other`
      bool is_greater_than(const Fruit& other) const; 
    };    

## Observación

Debes implementar la función `fusio_ordenada` en el fichero `fusio.cc`,
compilar (está preparado para poder compilar y depurar con VSCode), y
finalmente **enviar únicamente el fichero `fusio.cc`**.

Los ficheros públicos (icono del gatito) contienen:

  ------------ ----------------------------------------------------
  `main.cc`    el programa principal, con la entrada/salida hecha
  `fruit.hh`   la clase `Fruit`, con los métodos mencionados
  `Makefile`   para compilar con `make` cómodamente
  `.vscode`    carpeta para compilar y depurar con VSCode
  ------------ ----------------------------------------------------

## Entrada

La función recibe dos listas de frutas no modificables, ordenadas
descendentemente. Las listas pueden contener frutas con nombres
repetidos, posiblemente con precios diferentes. (De la lectura de las
listas, que están separadas por una línea vacía, ya se encarga el
programa principal.)

## Salida

La función devuelve la lista resultante de fusionar las dos listas
preservando el orden original. (De la escritura de la lista resultante
también se encarga el programa principal.)

## Información del problema

Autoría: Unknown\
Traducción: Pau Fernández

Generación: 2026-02-25T09:47:25.162Z

© *Jutge.org*, 2006--2026.\
<https://jutge.org>
