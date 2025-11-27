#include <cassert>
#include <iostream>

/*
 * @pre n ≥ 0.
 * @post returns true if n is a prime number.
 */
bool is_prime(int n, int i = 2)
{
    assert(n >= 0);

    if (n <= 1)
        return false;
    if (i * i > n)
        return true;
    if (n % i == 0)
        return false;
    return is_prime(n, i + 1);
}

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
 * @post returns true if n is a perfect prime.
 */
bool is_perfect_prime(int n)
{
    assert(n >= 0);

    if (n < 10)
        return is_prime(n);
    int sum = sum_of_digits(n);
    return is_prime(n) and is_perfect_prime(sum);
}

int main(void)
{
    int n;
    while (std::cin >> n)
        std::cout << (is_perfect_prime(n) ? "true" : "false") << std::endl;
    return 0;
}
