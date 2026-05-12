#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

map<string, set<string>> read_elems(void)
{
    map<string, set<string>> elems;

    string name, year, city;

    while (cin >> name >> year >> city)
        elems[year + ' ' + city].insert(name);

    return elems;
}

void print_elems(map<string, set<string>> &elems)
{
    for (const auto &e : elems)
    {
        if (e.second.size() > 1)
        {
            cout << e.first << ':';
            for (const auto &n : e.second)
                cout << ' ' << n;
            cout << endl;
        }
    }
}

int main(void)
{
    map<string, set<string>> visits = read_elems();
    print_elems(visits);
    return 0;
}
