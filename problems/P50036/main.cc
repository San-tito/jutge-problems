#include <iostream>
#include <vector>

int evaluate(const std::vector<int> &P, int x)
{
    int sum = 0;
    for (int i = P.size() - 1; i >= 0; --i)
        sum = x * sum + P[i];

    return sum;
}

int main(void)
{
    int n;

    while (std::cin >> n)
    {
        std::vector<int> P(n);
        for (int i = 0; i < n; ++i)
            std::cin >> P[i];
        int x;
        std::cin >> x;
        std::cout << evaluate(P, x) << std::endl;
    }
    return 0;
}
