#include <iostream>

/*
 * @pre a and b are valid integers.
 * @post swaps the values of a and b.
 */
void swap(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

int main(void)
{
    int x, y;
    std::cin >> x >> y;
    if (x > y)
        swap(x, y);
    while (y >= x)
        std::cout << y-- << std::endl;
    return 0;
}
