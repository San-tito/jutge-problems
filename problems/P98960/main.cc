#include <iostream>

/*
 * @pre c is a character.
 * @post returns the lowercase equivalent of c.
 */
char tolower(char c)
{
    return c | 32;
}

/*
 * @pre c is a character.
 * @post returns the uppercase equivalent of c.
 */
char toupper(char c)
{
    return c & 95;
}

/*
 * @pre c is a character.
 * @post returns true if c is an uppercase letter.
 */
bool isupper(char c)
{
    return c - 'A' < 26;
}

int main(void)
{
    char c;
    std::cin >> c;

    if (isupper(c))
        std::cout << tolower(c);
    else
        std::cout << toupper(c);
    std::cout << std::endl;

    return 0;
}
