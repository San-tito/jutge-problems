#include <iostream>

/*
 * @pre a and b are integers.
 * @post returns the smaller of a and b.
 */
int min(int a, int b)
{
    return (a < b) ? a : b;
}

/*
 * @pre a and b are integers.
 * @post returns the larger of a and b.
 */
int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main(void)
{
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    int a3 = max(a1, a2);
    int b3 = min(b1, b2);
    std::cout << '[';
    if (not(a3 > b3))
    {
        std::cout << a3 << ',' << b3;
    }
    std::cout << ']' << std::endl;
    return 0;
}
