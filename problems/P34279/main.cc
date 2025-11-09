#include <iostream>

int main(void)
{
    int h, m, s;
    std::cin >> h >> m >> s;

    if (++s == 60)
    {
        s = 0;
        m += 1;
        if (m == 60)
        {
            m = 0;
            h += 1;
        }
        if (h == 24)
            h = 0;
    }
    std::cout << ((h < 10) ? "0" : "") << h << ':';
    std::cout << ((m < 10) ? "0" : "") << m << ':';
    std::cout << ((s < 10) ? "0" : "") << s << std::endl;
    return 0;
}
