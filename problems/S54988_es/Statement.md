# Suma Frutas

Haz un programa que lea una lista de frutas con cantidades y produzca
una lista *ordenada* por el nombre de la fruta con las cantidades
acumuladas para cada fruta.

Se trata de completar el siguiente programa, implementando el
subprograma `add_fruit`:

    #include <vector>
    #include <iostream>
    using namespace std;

    struct Fruit {
         string name;
         int amount;
    };

    // Hay que implementar esta función:
    void add_fruit(vector<Fruit>& fruits, const Fruit& fruit);

    int main() {
         vector<Fruit> fruits;
         Fruit f;
         while (cin >> f.name >> f.amount) {
              add_fruit(fruits, f);  
         }
         for (int i = 0; i < fruits.size(); i++) {
              cout << fruits[i].name << ' ' << fruits[i].amount << endl;
         }
         return 0;
    }

El subprograma `add_fruit` debe hacer dos cosas. Primero buscar la
fruta, por si ya está en el vector `fruits`, y si está, acumular la
cantidad leída al total. Por otro lado, si se trata del caso en el que
vemos cierta fruta por primera vez, hay que insertarla en el vector en
su lugar (para mantener el orden).

Ambas operaciones, en el caso óptimo, requerirían una búsqueda
dicotómica, pero en este problema se puede usar una búsqueda lineal, y
para la inserción se puede añadir la fruta al final del vector y
desplazarla hacia abajo mientras el nombre de la fruta anterior sea
mayor en el orden lexicográfico.

## Entrada

Una secuencia de pares de fruta (un `string`) y su cantidad (un entero).
Las frutas típicamente estarán repetidas. Se debe considerar que el
número de frutas posibles diferentes es muy grande (decenas de miles).

## Salida

Se debe producir una lista de las frutas ordenadas por nombre, con una
fruta en cada línea, donde cada fruta va acompañada de un entero que es
la suma de las cantidades leídas para esa fruta en la entrada.

## Observación

Sólo tenéis que enviar el procedimiento requerido; el programa principal
será ignorado.

## Autor

PRO1

© Jutge.org, 2006--2025.

