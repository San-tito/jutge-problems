#include <iostream>
#include <map>
#include <string>

using namespace std;

void casino(map<string, int> &players)
{
    int    score;
    string name, event;

    while (cin >> name >> event)
    {
        auto it = players.find(name);

        if (event == "enters" and it == players.end())
            players[name] = 0;
        else if (event == "leaves" and it != players.end())
        {
            cout << name << " has won " << it->second << endl;
            players.erase(it);
        }
        else if (event == "wins")
        {
            cin >> score;
            if (it != players.end())
            {
                it->second += score;
            }
        }
    }
}

void results(const map<string, int> &players)
{
    for (const auto &p : players)
        cout << p.first << " is winning " << p.second << endl;
}

int main(void)
{
    map<string, int> players;
    casino(players);
    cout << endl;
    results(players);
    return 0;
}
