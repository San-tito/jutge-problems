#include <cassert>
#include <iostream>

/*
 * @pre 0 ≤ n ≤ 12.
 * @post returns n! (the factorial of n).
 */
int factorial(int n)
{
    assert(n >= 0 && n <= 12);

    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main(void)
{
    int x;

    while (std::cin >> x)
    {
        std::cout << factorial(x) << std::endl;
    }
    return 0;
}
