#include <iostream>

int main(void)
{
    char c;
    int  count = 0;
    while (std::cin >> c && c != '.')
    {
        if (c == 'a')
            ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
