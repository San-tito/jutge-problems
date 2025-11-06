#include <iostream>

/*
 * @pre a and b are integers.
 * @post returns the smaller of a and b.
 */
int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << min(a, min(b, c)) << std::endl;
    return 0;
}
