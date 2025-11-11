#include <cassert>
#include <iostream>

/*
 * @pre a > 0 and b > 0.
 * @post returns the greatest common divisor of a and b.
 */
int gcd(int a, int b)
{
    assert(a > 0);
    assert(b > 0);

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int main(void)
{
    int a, b;
    std::cin >> a >> b;
    std::cout << "The gcd of " << a << " and " << b << " is " << gcd(a, b) << '.' << std::endl;
    return 0;
}
