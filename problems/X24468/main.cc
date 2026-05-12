#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string, vector<int>> read_elems(void)
{
    int                      index = 1;
    string                   word;
    map<string, vector<int>> elems;

    while (cin >> word)
        elems[word].push_back(index++);

    return elems;
}

void print_elems(map<string, vector<int>> &elems)
{
    for (auto it = elems.begin(); it != elems.end(); ++it)
    {
        auto vec = it->second;
        cout << it->first << ':';
        for (auto vit = vec.begin(); vit != vec.end(); ++vit)
            cout << ' ' << *vit;
        cout << endl;
    }
}

int main(void)
{
    map<string, vector<int>> elems = read_elems();
    print_elems(elems);
    return 0;
}
