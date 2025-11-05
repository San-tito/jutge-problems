# Add Fruits

Write a program that reads a list of fruits with quantities and produces
a list *sorted* by the name of the fruit with the accumulated quantities
for each fruit.

The task is to complete the following program by implementing the
subprogram `add_fruit`:

    #include <vector>
    #include <iostream>
    using namespace std;

    struct Fruit {
         string name;
         int amount;
    };

    // You must implement this function:
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

The subprogram `add_fruit` should do two things. First, search for the
fruit to see if it is already in the `fruits` vector, and if it is,
accumulate the read quantity to the total. On the other hand, if it is
the case that we see a certain fruit for the first time, it should be
inserted into the vector in its place (to maintain order).

Both operations, in the optimal case, would require a binary search, but
in this problem, a linear search can be used, and for insertion, the
fruit can be added at the end of the vector and moved down while the
name of the previous fruit is greater in lexicographic order.

## Input

A sequence of pairs of a fruit (a `string`) and its quantity (an
integer). The fruits will typically be repeated. It should be expected
that the number of different possible fruits is very large (tens of
thousands).

## Output

A list of fruits sorted by name should be produced, with one fruit per
line, where each fruit is accompanied by an integer which is the sum of
the quantities read for that fruit in the input.

## Observation

You only need to submit the required procedure; your main program will
be ignored.

## Author

PRO1

© Jutge.org, 2006--2025.

