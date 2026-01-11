#include <iostream>
#include <vector>

int main(void)
{
    int n;

    while (std::cin >> n)
    {
        std::vector<int> seq(n);
        while (n--)
            std::cin >> seq[n];
        int sum = 0;
        for (int i = 0; i < seq.size(); ++i)
            sum += seq[i];
        bool found = false;
        for (int i = 0; i < seq.size(); ++i)
        {
            if (sum == seq[i] * 2)
            {
                found = true;
                break;
            }
        }
        std::cout << ((found) ? "YES" : "NO") << std::endl;
    }
    return 0;
}
