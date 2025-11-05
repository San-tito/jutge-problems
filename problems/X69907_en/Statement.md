# Progress in a cycling race

At the end of this problem you will find an incomplete program and your
job is to finish it. In particular, there are two functions which have
to be implemented. The following explanation gives you the details about
data types and the job of those two functions.

The program will work with a data type called `Cyclist`, which
represents a cyclist participating in a race, and includes the cyclist's
name, his current position and his current velocity. To make it simple,
we will use integer values instead of real numbers.

    struct Cyclist {
      string name;
      int position;
      int velocity;
    };

The program also works with another data type `ListCyclists`, which
represents a list of cyclists:

    typedef vector<Cyclist> ListCyclists;

You'll have to implement a function which receives a list of cyclists
and an elapsed time, and it has to update the position of all cyclists
adding their current velocity multiplied by the elapsed time. If you
want to think in terms of units, you could say that position is in
meters, time in seconds, and velocity in meters per second.

    void progressCyclists(int time, ListCyclists &listcyclists);

Additionally, you will have to implement a function which receives two
cyclists and returns true if the first is less than the second, using
the following criteria. A cyclist is less than another if its position
is strictly less than the other's position, or if he has the same
position as the other and his velocity is less than the other's
velocity, or he has the same position and velocity as the other but his
name is less than the name of the other in lexicographical order.

    bool smallerCyclist(Cyclist c1, Cyclist c2);

This function is used in another part of the program to sort the list of
cyclists.

Complete, then, the following code to solve the exercise:

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

## Input

The input consists of a list of commands to update the speed of a
cyclist, to sort all cyclists, and to move their positions. You don't
have to worry too much about the input since the main function already
takes care of reading commands and calling the appropriate functions.

## Output

The output shows the results of applying the commands. You don't have to
worry too much about the output since the main function already takes
care of producing it by calling the appropriate functions.

## Author

PRO1

© Jutge.org, 2006--2025.

