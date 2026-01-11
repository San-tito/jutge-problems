#include <cassert>
#include <iostream>
#include <vector>

int position_maximum(const std::vector<double> &v, int m)
{
    assert(0 < m and m < v.size());

    int max = 0;

    for (int i = 1; i <= m; ++i)
    {
        if (v[i] > v[max])
            max = i;
    }

    return max;
}

int main(void)
{
    int m, n;
    while (std::cin >> m >> n)
    {
        std::vector<double> V(n);
        for (int i = 0; i < n; ++i)
            std::cin >> V[i];
        std::cout << position_maximum(V, m) << std::endl;
    }
    return 0;
}
