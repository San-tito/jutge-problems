# Lista de actividades

Al final de este enunciado podeis encontrar un programa a medio hacer
que hay que completar. Concretamente, hay dos funciones que estan
pendientes de implementar. A continuación se explica con qué datos
trabaja el programa y qué tienen que hacer las funciones.

El programa trabaja con un tipo de datos `Activity`, que representa una
actividad, que incluye el nombre de la actividad (name), el instante de
tiempo de inicio de la actividad (t1), y el instante de tiempo de
finalización dela actividad (t2). Para simplificar, t1 y t2 son
variables enteras, y el programa siempre trabaja con actividades
correctamente definidas cumpliendo t1$<$t2:

    struct Activity {
      string name;
      int t1, t2;
    }

El programa también trabaja con un tipo de dato `ListActivities`, que
representa una lista de actividades:

    typedef vector<Activity> ListActivities;

Hay que implementar una función para verificar que dos actividades son
compatibles en tiempo, es decir, que no se solapan. En el caso
particular de que una de las actividades acaba exactamente cuando la
otra empieza, se consideran compatibles.

    bool compatibleActivities(Activity a, Activity b);

Además, hay que implementar otra función que recibe dos actividades y
retorna cierto si la primera es menor que la segunda según el criterio
que se describe a continuación. Una actividad es menor que otra si
comienza estrictamente antes que la otra, o comienza a la vez que la
otra i acaba estrictamente antes, o comienza y acaba a la vez que la
otra pero su nombre es menor que el nombre de la otra en orden
lexicográfico.

    bool smallerActivity(Activity a, Activity b);

La función anterior se utiliza desde otro sitio del programa para
ordenar todas las actividades.

Completad, entonces, el siguiente código inacabado para solucionar el
ejercicio:

    #include <iostream>
    #include <string>
    #include <vector>
    #include <algorithm>

    // Here you can add more includes if you wish.

    using namespace std;

    struct Activity {
      string name;
      int t1, t2; // t1<t2 must be satisfied for a correct activity
    };

    typedef vector<Activity> ListActivities;

    // Auxiliary functions (you can add more functions if you wish)

    // Pre:  The input contains a description of an activity with the format:
    //
    //       name t1 t2
    //
    //       where name is a non-empty string with lowercase letters and t1<t2
    // Post: Returns the activity read from the input adapted to the format of struct Activity.
    Activity readActivity()
    {
      Activity a;
      cin >> a.name >> a.t1 >> a.t2;
      return a;
    }

    // Pre:  listactivities represents a list of correct activities
    // Post: Prints all activities from first to last, one per line, and with the format:
    //
    //       name t1 t2
    void printActivities(const ListActivities &listactivities)
    {
      for (int i = 0; i < int(listactivities.size()); i++) {
        const Activity &a = listactivities[i];
        cout << a.name << " " << a.t1 << " " << a.t2 << endl;
      }
    }

    // Pre:  a, b represent correct activities.
    // Post: Returns true iff the activities have a compatible timeline,
    //       i.e. they do not overlap in time.
    //       Note: if one of them finishes exactly when the other starts, then they are compatible.
    bool compatibleActivities(Activity a, Activity b)
    {
      // Implement this function.
      // ...
    }

    // Pre:  a, b represent correct activities.
    // Post: Returns true iff one of the following conditions holds:
    //         - a starts strictly before b.
    //         - a and b start at the same time but a finishes before b.
    //         - a and b coincide in start and end time, but a has lexicographically-smaller name than b.
    bool smallerActivity(Activity a, Activity b)
    {
      // Implement this function.
      // ...
    }

    int main()
    {
      ListActivities listactivities;
      string command;
      while (cin >> command) {
        if (command == "NEW") {
          listactivities.push_back(readActivity());
        } else if (command == "SORT") {
          sort(listactivities.begin(), listactivities.end(), smallerActivity);
        } else if (command == "PRINT") {
          cout << "Current list activities:" << endl;
          printActivities(listactivities);
          cout << endl;
        } else if (command == "CHECKCOMPATIBLE") {
          int i, j;
          cin >> i >> j;
          string namei = listactivities[i].name;
          string namej = listactivities[j].name;
          if (compatibleActivities(listactivities[i], listactivities[j]))
            cout << "Activities " << namei << " and " << namej << " are compatible" << endl;
          else
            cout << "Activities " << namei << " and " << namej << " are incompatible" << endl;
          cout << endl;
        }
      }
    }

## Entrada

La entrada consiste en una lista de comandos para crear nuevas
actividades, ordenarlas, escribirlas todas, y comprobar si dos de ellas
son compatibles. No hay que preocuparse mucho por el main ya que se da
hecho y se encarga de llamar a las funciones para gestionar los
comandos.

## Salida

La salida muestra los resultados de los comandos. No hay que preocuparse
sobre la salida porque el main que se da hecho ya se encarga de llamar a
las correspondientes funciones para producir la salida.

## Autor

PRO1

© Jutge.org, 2006--2025.

