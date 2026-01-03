#include <cassert>
#include <iostream>
#include <vector>

double scalar_product(const std::vector<double> &u, const std::vector<double> &v)
{
    assert(u.size() == v.size());
    double prod = 0;

    for (int i = 0; i < v.size(); ++i)
        prod += u[i] * v[i];
    return prod;
}

int main(void)
{
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(4);

    int n;
    while (std::cin >> n)
    {
        std::vector<double> u(n);
        std::vector<double> v(n);
        for (int i = 0; i < n; ++i)
            std::cin >> u[i];
        for (int i = 0; i < n; ++i)
            std::cin >> v[i];
        std::cout << scalar_product(u, v) << std::endl;
    }
    return 0;
}
