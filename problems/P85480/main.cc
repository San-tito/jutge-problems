#include <cassert>
#include <iostream>
#include <vector>

/*
 * @pre count > 0
 * @post returns a vector with exactly count integers read from std::cin
 */
std::vector<int> read_vector(int count)
{
    assert(count > 0);

    std::vector<int> values(count);
    while (count--)
        std::cin >> values[count];

    return values;
}

/*
 * @pre n >= 0
 * @post returns true if n is a prime number
 */
bool is_prime(int n)
{
    assert(n >= 0);

    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

/*
 * @pre seq is not empty
 * @post returns true if any pair of distinct elements sums to a prime
 */
bool has_prime_sum(const std::vector<int> &seq)
{
    const int size = seq.size();
    assert(size > 0);

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (is_prime(seq[i] + seq[j]))
                return true;
        }
    }
    return false;
}

int main(void)
{
    int n;

    while (std::cin >> n)
    {
        std::vector<int> seq = read_vector(n);
        bool             found = has_prime_sum(seq);
        std::cout << ((found) ? "yes" : "no") << std::endl;
    }
}
