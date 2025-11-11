#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;

    if (n == 0)
        std::cout << n;

    while (n)
    {
        std::cout << n % 10;
        n /= 10;
    }
    std::cout << std::endl;

    return 0;
}
