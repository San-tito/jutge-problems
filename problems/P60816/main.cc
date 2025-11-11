#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;
    if (n == 0)
        std::cout << n;

    while (n)
    {
        int digit = n & 15;
        if (digit < 10)
            std::cout << digit;
        else
            std::cout << char('A' + digit - 10);

        n >>= 4;
    }
    std::cout << std::endl;
    return 0;
}
