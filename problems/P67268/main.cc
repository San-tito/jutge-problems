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
        for (int i = 0; i < seq.size(); ++i)
        {
            if (i)
                std::cout << ' ';
            std::cout << seq[i];
        }
        std::cout << std::endl;
    }
    return 0;
}
