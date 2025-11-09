#include <iostream>

int main(void)
{
    int n;
    std::cin >> n;

    std::cout << n / 3600 << ' ';
    std::cout << (n % 3600) / 60 << ' ';
    std::cout << n % 60 << std::endl;
    return 0;
}
