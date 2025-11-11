#include <iostream>

int main(void)
{
    int a, b;
    std::cin >> a >> b;
    while (a < b)
        std::cout << a++ << ',';

    if (a == b)
        std::cout << b;

    std::cout << std::endl;
    return 0;
}
