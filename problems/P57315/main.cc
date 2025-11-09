#include <cassert>
#include <iostream>

/*
 * @pre a and b are valid integers.
 * @post swaps the values of a and b.
 */
void swap(int &a, int &b)
{
    a += b;
    b = a - b;
    a -= b;
}

/*
 * @pre ch ∈ {'A', 'B', 'C'}.
 * @post prints the corresponding integer: a for 'A', b for 'B', c for 'C'.
 */
void print(char ch, int a, int b, int c)
{
    assert(ch == 'A' or ch == 'B' or ch == 'C');

    if (ch == 'A')
        std::cout << a;
    else if (ch == 'B')
        std::cout << b;
    else
        std::cout << c;
}

int main(void)
{
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);

    char ch;
    std::cin >> ch;
    print(ch, a, b, c);
    std::cout << ' ';
    std::cin >> ch;
    print(ch, a, b, c);
    std::cout << ' ';
    std::cin >> ch;
    print(ch, a, b, c);
    std::cout << std::endl;
    return 0;
}
