# List of activities

At the end of the problem statement you will find a half-implemented
program which you have to finish. In particular, two functions in the
program are incomplete. The following text explains the data with which
the functions work and what they do.

The program works with a data type `Activity`, which represents an
activity, including a name, the starting time (t1), and the ending time
(t2). To simplify, t1 and t2 are integer variables, and the program
always works with activites with correct times, t1$<$t2:

    struct Activity {
      string name;
      int t1,t2;
    };

The program also works with a data type `ListActivities`, which is a
list of activities:

    typedef vector<Activity> ListActivities;

The first function you will have to implement verifies that two
activities are compatible, that is, they do not overlap in time. In the
particular case that one activity ends exactly at the time when another
starts, they will be considered compatible.

    bool compatibleActivities(Activity a, Activity b)

The second function you have to implement receives two activities and
returns true if the first is less than the second, according to the
following criteria. An activity is less than another if it starts
strictly before the other, or it starts at the same time and ends
strictly before, or has the same start time and end time as the other
but its name is less than the name of the other in lexicographical
order.

    bool smallerActivity(Activity a, Activity b)

The previous function is used from another point in the program to sort
all activities.

Finish the following code to solve the problem:

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

## Input

The input consists of a list of commands to create activities, sort
them, write all of them, and check if two are compatible. There is no
need to worry about the input since the main function already calls the
appropriate functions to interpret the commands.

## Output

The output shows the results of the commands. There is no need to worry
about the output much since the main, which is given, already calls the
appropriate functions to produce the output.

## Author

PRO1

© Jutge.org, 2006--2025.

