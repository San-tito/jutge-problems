#include <cassert>
#include <iostream>

/**
 * @pre  n >= 0.
 * @post Prints the last n words read, in reverse order.
 */
void print_reversed(int &n)
{
    assert(n >= 0);
    std::string word;
    if (std::cin >> word)
    {
        print_reversed(n);
        if (n)
        {
            --n;
            std::cout << word << std::endl;
        }
    }
}

int main(void)
{
    int n;
    std::cin >> n;
    print_reversed(n);
    return 0;
}
