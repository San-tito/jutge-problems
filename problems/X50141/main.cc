#include <cassert>
#include <iostream>

/*
 * @pre a and b are integers.
 * @post returns the larger of a and b.
 */
int max(int a, int b)
{
    return (a > b) ? a : b;
}

/*
 * @pre 0 < x < 1'000'000'000.
 * @post returns the fattened value of x.
 */
int fatten(int x)
{
    assert(0 < x and x < 1'000'000'000);

    if (x < 10)
        return x;
    int pre = fatten(x / 10);
    return pre * 10 + max(pre % 10, x % 10);
}

int main(void)
{
    int x;
    while (std::cin >> x)
        std::cout << fatten(x) << std::endl;
    return 0;
}
