#include <algorithm>
#include <iostream>
#include <map>
#include <set>

using namespace std;

map<string, set<string>> read_elems(void)
{
    map<string, set<string>> elems;

    string word;

    while (cin >> word)
    {
        string key(word);
        sort(key.begin(), key.end());
        elems[key].insert(word);
    }

    return elems;
}

void print_elems(map<string, set<string>> &elems)
{
    for (const auto &e : elems)
    {
        cout << e.first << ':';
        for (const auto &s : e.second)
            cout << ' ' << s;
        cout << endl;
    }
}

int main(void)
{
    map<string, set<string>> elems = read_elems();
    print_elems(elems);
    return 0;
}
