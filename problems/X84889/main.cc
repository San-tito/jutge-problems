#include <iostream>
#include <vector>

#include "player.hh"

std::vector<std::string> winners(std::vector<Player>::iterator ini, std::vector<Player>::iterator fin);

int main()
{
    Player              p;
    std::vector<Player> v;
    while (std::cin >> p.name >> p.score)
        v.push_back(p);
    std::vector<std::string> w = winners(v.begin(), v.end());
    for (int i = 0; i < w.size(); i++)
        std::cout << (i == 0 ? "" : " ") << w[i];
    std::cout << std::endl;
    return 0;
}
