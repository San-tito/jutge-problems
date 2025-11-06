#include <iostream>

/*
 * @pre c is a character.
 * @post returns true if c is a digit.
 */
bool isdigit(char c)
{
    return c - '0' < 10;
}

/*
 * @pre c is a character.
 * @post returns true if c is an uppercase letter.
 */
bool isupper(char c)
{
    return c - 'A' < 26;
}

/*
 * @pre c is a character.
 * @post returns true if c is a lowercase letter.
 */
bool islower(char c)
{
    return c - 'a' < 26;
}

int main(void)
{
    char c;
    std::cin >> c;

    if (isdigit(c))
        std::cout << "Number";
    else if (isupper(c))
        std::cout << "Uppercase letter";
    else if (islower(c))
        std::cout << "Lowercase letter";

    std::cout << std::endl;

    return 0;
}
