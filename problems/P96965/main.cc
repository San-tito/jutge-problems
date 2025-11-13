#include <cassert>
#include <iostream>

/*
 * @pre x ≥ 0.
 * @post returns sum of digits of x.
 */
int sum_of_digits(int x)
{
    assert(x >= 0);
    if (x < 10)
        return x;
    return x % 10 + sum_of_digits(x / 10);
}

/*
 * @pre n ≥ 0.
 * @post returns digit reduction of n.
 */
int reduction_of_digits(int n)
{
    assert(n >= 0);
    int sum = sum_of_digits(n);
    if (sum < 10)
        return sum;
    return reduction_of_digits(sum);
}

int main(void)
{
    int n;
    while (std::cin >> n)
        std::cout << reduction_of_digits(n) << std::endl;
    return 0;
}
