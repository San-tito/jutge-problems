#include <cassert>
#include <iostream>

/*
 * @pre n ≥ 0 and base ≥ 2.
 * @post returns the number of digits of n when written in the given base.
 */
int count_digits(int n, int base)
{
    assert(n >= 0);
    assert(base >= 2);

    int count = 1;
    while (n >= base)
    {
        ++count;
        n /= base;
    }
    return count;
}

int main(void)
{
    int n;
    std::cin >> n;

    for (int base = 2; base <= 16; ++base)
        std::cout << "Base " << base << ": " << count_digits(n, base) << " cifras." << std::endl;

    return 0;
}
