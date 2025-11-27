#include <iostream>

#include <iostream>
#include <string>

/**
 * @pre  Input stream is valid and contains at least one "end".
 * @post Prints all words before the first "end", in reverse order.
 */
void print_reversed(void)
{
    std::string word;
    if (std::cin >> word and word != "end")
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
