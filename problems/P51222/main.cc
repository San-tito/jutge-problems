#include <cassert>
#include <iostream>

/*
 * @pre n ≥ 0.
 * @post returns the number of digits of n in base 10.
 */
int number_of_digits(int n)
{
    assert(n >= 0);

    if (n < 10)
        return 1;
    return number_of_digits(n / 10) + 1;
}

int main(void)
{
    int n;
    while (std::cin >> n)
        std::cout << number_of_digits(n) << std::endl;
    return 0;
}
