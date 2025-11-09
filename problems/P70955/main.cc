#include <iostream>

int main(void)
{
    int y, d, h, m, s;
    std::cin >> y >> d >> h >> m >> s;
    std::cout << (s + 60 * m + 3600 * h + 86400 * d + 31536000 * y) << std::endl;
    return 0;
}
