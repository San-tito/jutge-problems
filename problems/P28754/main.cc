#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    if (n == 0)
        std::cout << n;

    while (n)
    {
        std::cout << (n & 1);
        n >>= 1;
    }

    std::cout << std::endl;
    return 0;
}
