#include <iostream>

/*
 * @pre a and b are integers.
 * @post returns the smaller of a and b.
 */
int min(int a, int b)
{
    return (a < b) ? a : b;
}

/*
 * @pre a and b are integers.
 * @post returns the larger of a and b.
 */
int max(int a, int b)
{
    return (a > b) ? a : b;
}

void digit_maxim_i_minim(int n, int &maxim, int &minim)
{
    if (n < 10)
    {
        maxim = minim = n;
        return;
    }
    digit_maxim_i_minim(n / 10, maxim, minim);
    maxim = max(n % 10, maxim);
    minim = min(n % 10, minim);
}

int main(void)
{
    int x;
    while (std::cin >> x)
    {
        int a, b;
        digit_maxim_i_minim(x, a, b);
        std::cout << x << ' ' << a << ' ' << b << std::endl;
    }
    return 0;
}
