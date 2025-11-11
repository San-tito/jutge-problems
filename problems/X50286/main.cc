#include <iostream>

int main(void)
{
    std::string word;
    int         count;
    for (count = 0; std::cin >> word; count += (word == "hello"))
        ;
    std::cout << count << std::endl;
    return 0;
}
