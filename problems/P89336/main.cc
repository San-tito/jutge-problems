#include <cassert>
#include <iostream>

/**
 * @pre  total >= 0, depth >= 0
 * @post Prints half words of the input sequence, in reverse order.
 */
void print_half(int &total, int depth = 0)
{
    assert(total >= 0);
    assert(depth >= 0);

    std::string word;
    if (std::cin >> word)
    {
        ++total;
        print_half(total, depth + 1);
        if (depth < total / 2)
            std::cout << word << std::endl;
    }
}

int main(void)
{
    int total = 0;
    print_half(total);
    return 0;
}
