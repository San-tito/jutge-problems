#include <cassert>
#include <iostream>

/*
 * @pre n ≥ 0.
 * @post returns true if the digits of n are in increasing order.
 */
bool is_increasing(int n)
{
    assert(n >= 0);

    if (n < 10)
        return true;
    return (n % 100 / 10) <= (n % 10) && is_increasing(n / 10);
}

int main(void)
{
    int n;
    while (std::cin >> n)
        std::cout << (is_increasing(n) ? "true" : "false") << std::endl;
    return 0;
}
