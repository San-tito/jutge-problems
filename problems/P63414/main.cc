#include <cassert>
#include <iostream>
#include <vector>

int main(void)
{
    std::vector<int> frequences(1001, 0);

    int n, x;
    std::cin >> n;
    while (n--)
    {
        std::cin >> x;
        assert(x >= 1000000000);
        assert(x < 1000001000);
        ++frequences[x - 1000000000];
    }

    for (int i = 0; i < frequences.size(); ++i)
    {
        x = frequences[i];
        if (x)
            std::cout << (1000000000 + i) << " : " << x << std::endl;
    }
    return 0;
}
