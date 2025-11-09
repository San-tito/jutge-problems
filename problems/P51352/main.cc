#include <iostream>

int main(void)
{
    char a, b;
    std::cin >> a >> b;
    if (a == b)
        std::cout << '-';
    else if (((a != 'A' or b != 'V') and a < b) or (a == 'V' and b == 'A'))
        std::cout << '1';
    else
        std::cout << '2';

    std::cout << std::endl;
    return 0;
}
