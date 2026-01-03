#include <iostream>

bool is_palindrome(const std::string &s)
{
    for (int i = 0; i < s.size() / 2; ++i)
    {
        if (s[i] != s[s.size() - i - 1])
            return false;
    }

    return true;
}

int main(void)
{
    std::string s;
    while (std::cin >> s)
    {
        std::cout << is_palindrome(s) << std::endl;
        int n = s.size();
        if (n > 100)
        {
            char c = s[0];
            s[0] = 'a';
            for (int rep = 1000; rep > 0; --rep)
                std::cout << is_palindrome(s) << std::endl;
            s[0] = c;

            c = s[1];
            s[1] = 'a';
            for (int rep = 1000; rep > 0; --rep)
                std::cout << is_palindrome(s) << std::endl;
            s[1] = c;

            c = s[3];
            s[3] = 'a';
            for (int rep = 1000; rep > 0; --rep)
                std::cout << is_palindrome(s) << std::endl;
            s[3] = c;

            c = s[n - 1];
            s[n - 1] = 'a';
            for (int rep = 1000; rep > 0; --rep)
                std::cout << is_palindrome(s) << std::endl;
            s[n - 1] = c;

            c = s[n - 2];
            s[n - 2] = 'a';
            for (int rep = 1000; rep > 0; --rep)
                std::cout << is_palindrome(s) << std::endl;
            s[n - 2] = c;

            c = s[n - 7];
            s[n - 7] = 'a';
            for (int rep = 1000; rep > 0; --rep)
                std::cout << is_palindrome(s) << std::endl;
            s[n - 7] = c;
        }
    }
    return 0;
}
