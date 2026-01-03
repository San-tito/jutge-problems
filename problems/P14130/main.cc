#include <iostream>
#include <vector>

int main(void)
{
    int n;
    std::cin >> n;

    std::vector<int> seq(n);
    while (n--)
        std::cin >> seq[n];

    const int last = seq[0];
    int       count = 0;
    for (int i = 1; i < seq.size(); ++i)
    {
        if (seq[i] == last)
            ++count;
    }

    std::cout << count << std::endl;

    return 0;
}
