#include <iostream>

int main(void)
{
    int x, y;

    while (std::cin >> x >> y)
    {
        std::cout << "solutions for " << x << " and " << y << std::endl;
        bool none = true;
        for (int b = 2; b <= 16; ++b)
        {
            if (is_stable_product(x, y, b))
            {
                none = false;
                std::cout << "(base " << b << ')';
                std::cout << std::endl;
            }
        }
        if (none)
            std::cout << "none of them" << std::endl;
    }
    return 0;
}
