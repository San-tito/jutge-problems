#include <iostream>

int main(void)
{
    std::cout.setf(std::ios::fixed);
    std::cout.precision(4);
    int n;
    std::cin >> n;
    double h = 0;
    for (int i = 1; i <= n; ++i)
        h += 1.0 / i;
    std::cout << h << std::endl;
    return 0;
}
