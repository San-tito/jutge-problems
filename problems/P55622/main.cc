#include <cassert>
#include <iostream>

/*
 * @pre n ≥ 0.
 * @post returns the number of digits of n.
 */
int count_digits(int n)
{
    assert(n >= 0);

    int count = 1;
    while (n >= 10)
    {
        ++count;
        n /= 10;
    }
    return count;
}

int main(void)
{
    int n;
    std::cin >> n;
    int d = count_digits(n);
    std::cout << "The number of digits of " << n << " is " << d << "." << std::endl;
    return 0;
}
