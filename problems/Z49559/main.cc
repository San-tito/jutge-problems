#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

map<string, set<string>> read_pairs(void)
{
    map<string, set<string>> pairs;

    string key, value;
    while (cin >> key >> value)
    {
        pairs[key].insert(value);
        pairs[value].insert(key);
    }

    return pairs;
}

int main(void)
{
    map<string, set<string>> friends_of = read_pairs();

    map<set<string>, vector<string>> same_friends;

    for (const auto &item : friends_of)
        same_friends[item.second].push_back(item.first);

    for (const auto &item : same_friends)
    {
        if (item.second.size() >= 2)
        {
            auto it = item.second.begin();
            cout << *it;
            ++it;
            for (; it != item.second.end(); ++it)
                cout << ' ' << *it;
            cout << endl;
        }
    }

    return 0;
}
