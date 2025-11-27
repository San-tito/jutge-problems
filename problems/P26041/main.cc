#include <iostream>

/**
 * @pre ...
 * @post Prints the words read so far in reverse order.
 */
void print_reversed(void)
{
    std::string word;
    if (std::cin >> word)
    {
        print_reversed();
        std::cout << word << std::endl;
    }
}

int main(void)
{
    print_reversed();
    return 0;
}
