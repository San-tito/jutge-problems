#include <string>
#include <vector>
using namespace std;

#include "player.hh"

/*
   Implementa la funció `winners` i envia només aquest fitxer al Jutge.
*/
vector<string> winners(vector<Player>::iterator begin, vector<Player>::iterator end)
{
    int max(begin->score);

    auto it(begin + 1);

    for (; it != end; ++it)
    {
        if (it->score > max)
            max = it->score;
    }

    vector<string> v;
    for (it = begin; it != end; ++it)
    {
        if (it->score == max)
            v.push_back(it->name);
    }
    return v;
}
