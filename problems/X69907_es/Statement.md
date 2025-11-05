# Progreso en una carrera ciclista

Al final de este enunciado podréis encontrar un programa a medio acabar
que deberéis completar. Concretamente, hay dos funciones que estan
pendientes de implementar. A continuación os explicamos con qué datos
trabaja el programa y qué tienen que hacer las funciones.

El programa trabaja con un tipo de dato `Cyclist`, que representa un
ciclista que participa en una carrera. Se incluye el nombre del
ciclista, su posición actual y su velocidad actual. Para simplificar,
utilizaremos variables enteras en vez de reales.

    struct Cyclist {
      string name;
      int position;
      int velocity;
    };

El programa también trabaja con un tipo de datos `ListCyclists`, que
representa una lista de ciclistas:

    typedef vector<Cyclist> ListCyclists;

Tendréis que implementar una función que recibe una lista de ciclistas y
un tiempo transcurrido, y tiene que actualizar la posición de todos los
ciclistas añadiendo su velocidad actual multiplicada por el tiempo
transcurrido. Si se desea pensar en términos de unidades concretas, se
puede pensar en la posición en metros, el tiempo en segundos, y la
velocidad en metros por segundo.

    void progressCyclists(int time, ListCyclists &listcyclists);

Además, habrá que implementar una función que recibe dos ciclistas y
devuelve cierto si el primer ciclista es menor que el segundo de acuerdo
con el criterio que se describe a continuación. Un ciclista es menor que
otro cuando está en una posición estrictamente menor que la del otro, o
está en la misma posición que el otro pero tiene una velocidad
estrictamente menor, o bien está en la misma posición con la misma
velocidad que el otro pero su nombre es menor que el nombre del otro en
orden lexicográfico.

    bool smallerCyclist(Cyclist c1, Cyclist c2);

La función anterior se utiliza desde otro sitio del programa para
ordenar todos los ciclistas.

Completad, entonces, el siguiente código para resolver el problema:

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    // Here you can add more includes if you wish.
    // ...

    using namespace std;

    struct Cyclist {
      string name;
      int position;
      int velocity;
    };

    typedef vector<Cyclist> ListCyclists;

    // Auxiliary functions (you can add more functions if you wish)

    // Pre:  
    // Post: Prints all cyclists from first to last, one per line, and with the format:
    //       name position velocity
    void printCyclists(const ListCyclists &listcyclists)
    {
      for (int i = 0; i < int(listcyclists.size()); i++) {
        const Cyclist &c = listcyclists[i];
        cout << c.name << " " << c.position << " " << c.velocity << endl;
      }
    }

    // Pre:  variable 'time' is strictly positive and represents a time elapsed.
    // Post: All positions of cyclists in listcyclists have been updated
    //       according to the given time elapsed and their corresponding velocity.
    void progressCyclists(int time, ListCyclists &listcyclists)
    {
      // Implement this function.
      //...
    }

    // Pre:  c1, c2 represent correct cyclists.
    // Post: Returns true iff one of the following conditions holds:
    //         - position of c1 is strictly smaller than position of c2.
    //         - c1 and c2 have same position but velocity of c1 is strictly smaller than velocity of c2.
    //         - c1 and c2 coincide in position and velocity, but c1 has smaller name than c2.
    bool smallerCyclist(Cyclist c1, Cyclist c2)
    {
      // Implement this function.
      //...
    }

    int main()
    {
      int n;
      cin >> n;
      ListCyclists listcyclists(n);
      for (int i = 0; i < n; i++) {
        Cyclist &c = listcyclists[i];
        cin >> c.name;
        c.position = 0;
        c.velocity = 0;
      }
      string command;
      while (cin >> command) {
        if (command == "UPDATEVELOCITY") {
          int i, velocity;
          cin >> i >> velocity;
          listcyclists[i].velocity = velocity;
        } else if (command == "SORT") {
          sort(listcyclists.begin(), listcyclists.end(), smallerCyclist);
        } else if (command == "PRINT") {
          cout << "Current list cyclists:" << endl;
          printCyclists(listcyclists);
          cout << endl;
        } else if (command == "PROGRESSCYCLISTS") {
          int time;
          cin >> time;
          progressCyclists(time, listcyclists);
        }
      }
    }

## Entrada

La entrada consiste en una lista de comandos para actualizar la
velocidad de un ciclista, ordenarlos o escribirlos todos, y hacer
progresar a todos los ciclistas. No os tiene que preocupar la entrada
porque el main que se da hecho ya se encarga de leer los comandos y
llamar a las correspondientes funciones.

## Salida

La salida muestra los resultados de los comandos. No hay que preocuparse
demasiado de la salida ya que el main que se da hecho se encarga de
producirla usando las funciones correspondientes.

## Autor

PRO1

© Jutge.org, 2006--2025.

