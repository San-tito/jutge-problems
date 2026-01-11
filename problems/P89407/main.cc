#include <cassert>
#include <iostream>
#include <vector>

/*
 * @pre n >= 0, 2 <= base <= 16
 * @post appends representation of n in given base
 */
void to_base_str(std::string &str, int n, int base)
{
    assert(n >= 0);
    assert(2 <= base and base <= 16);

    if (n >= base)
        to_base_str(str, n / base, base);

    int d = n % base;
    str += (d < 10) ? char('0' + d) : char('A' + d - 10);
}

/*
 * @pre s contains digits [0-9A-F]
 * @post fills freq with digit frequencies of s
 */
void digit_freq(const std::string &s, std::vector<int> &freq)
{
    for (int i = 0; i < s.size(); ++i)
    {
        int d = (s[i] <= '9') ? s[i] - '0' : s[i] - 'A' + 10;
        ++freq[d];
    }
}

/*
 * @pre x, y, p are base representations using digits [0-9A-F]
 * @post returns true if digits(x) + digits(y) == digits(p)
 */
bool is_stable(const std::string &x, const std::string &y, const std::string &p)
{
    std::vector<int> lhs(16, 0);
    std::vector<int> rhs(16, 0);

    digit_freq(x, lhs);
    digit_freq(y, lhs);
    digit_freq(p, rhs);

    return lhs == rhs;
}

int main(void)
{
    int x, y;

    while (std::cin >> x >> y)
    {
        std::cout << "solutions for " << x << " and " << y << std::endl;
        bool none = true;
        for (int b = 2; b <= 16; ++b)
        {
            std::string xs;
            to_base_str(xs, x, b);
            std::string ys;
            to_base_str(ys, y, b);
            std::string ps;
            to_base_str(ps, x * y, b);

            if (is_stable(xs, ys, ps))
            {
                none = false;
                std::cout << xs;
                std::cout << " * ";
                std::cout << ys;
                std::cout << " = ";
                std::cout << ps;
                std::cout << " (base " << b << ')';
                std::cout << std::endl;
            }
        }
        if (none)
            std::cout << "none of them" << std::endl;
        std::cout << std::endl;
    }
    return 0;
}
