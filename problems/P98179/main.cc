#include <cassert>
#include <iostream>
#include <vector>

void insert(std::vector<double> &v)
{
    const int size = v.size();
    assert(size > 0);

    const int i = size - 1;
    double    key = v[i];
    int       j;
    for (j = i; j and v[j - 1] > key; --j)
        v[j] = v[j - 1];
    v[j] = key;
}

int main(void)
{
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(4);
    int n;
    while (std::cin >> n)
    {
        std::vector<double> V(n);
        for (int i = 0; i < n; ++i)
            std::cin >> V[i];
        insert(V);
        for (int i = 0; i < n; ++i)
            std::cout << " " << V[i];
        std::cout << std::endl;
    }
    return 0;
}
