#include <cassert>
#include <iostream>

/*
 * @pre n ≥ 0.
 * @post prints n in binary.
 */
void print_bin(int n)
{
    assert(n >= 0);
    if (n >= 2)
        print_bin(n >> 1);
    std::cout << (n & 1);
    if (n == 0)
        return;
}

/*
 * @pre n ≥ 0.
 * @post prints n in octal.
 */
void print_octal(int n)
{
    assert(n >= 0);
    if (n >= 8)
        print_octal(n >> 3);
    std::cout << (n & 7);
    if (n == 0)
        return;
}

/*
 * @pre n ≥ 0.
 * @post prints n in hexadecimal (uppercase).
 */
void print_hex(int n)
{
    assert(n >= 0);
    if (n >= 16)
        print_hex(n >> 4);

    int digit = n & 15;
    if (digit < 10)
        std::cout << digit;
    else
        std::cout << char('A' + digit - 10);
    if (n == 0)
        return;
}

int main(void)
{
    int n;
    while (std::cin >> n)
    {
        std::cout << n << " = ";
        print_bin(n);
        std::cout << ", ";
        print_octal(n);
        std::cout << ", ";
        print_hex(n);
        std::cout << std::endl;
    }

    return 0;
}
