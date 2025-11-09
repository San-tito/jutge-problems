#include <iostream>

int main(void)
{
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;

    if (a1 == a2 and b1 == b2)
        std::cout << '=';
    else if (a1 >= a2 and b1 <= b2)
        std::cout << 1;
    else if (a2 >= a1 and b2 <= b1)
        std::cout << 2;
    else
        std::cout << '?';
    std::cout << std::endl;

    return 0;
}
