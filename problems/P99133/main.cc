#include <iostream>
#include <vector>

/*
 * @pre s is a valid string.
 * @post returns s reversed.
 */
std::string reverse(const std::string &s)
{
    const int   size = s.size();
    std::string rev(size, '\0');
    for (int i = 0; i < size; ++i)
        rev[i] = s[size - i - 1];
    return rev;
}

int main(void)
{
    int n;

    std::cin >> n;

    std::vector<std::string> words(n);

    while (n--)
        std::cin >> words[n];

    for (int i = 0; i < words.size(); ++i)
        std::cout << reverse(words[i]) << std::endl;

    return 0;
}
