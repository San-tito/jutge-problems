#include <iostream>

/*
 * @pre c is a character.
 * @post returns true if c is a lowercase letter.
 */
bool islower(char c)
{
    return (unsigned) c - 'a' < 26;
}

/*
 * @pre c is a character.
 * @post returns the uppercase equivalent of c.
 */
char toupper(char c)
{
    return c & 95;
}

int main(void)
{
    char c;
    std::cin >> c;

    if (islower(c))
    {
        c = toupper(c);
        std::cout << "lowercase";
    }
    else
        std::cout << "uppercase";
    std::cout << std::endl;
    if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
        std::cout << "vowel";
    else
        std::cout << "consonant";
    std::cout << std::endl;
    return 0;
}
