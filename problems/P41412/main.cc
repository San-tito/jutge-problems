#include <iostream>
#include <vector>

void insertion_sort(std::vector<double> &v)
{
    const int size = v.size();

    for (int i = 1; i < size; ++i)
    {
        const double value = v[i];
        int          j;
        for (j = i; j and v[j - 1] > value; --j)
            v[j] = v[j - 1];
        v[j] = value;
    }
}

int main(void)
{
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    std::cout.precision(4);
    int n;
    while (std::cin >> n)
    {
        std::vector<double> V(n);
        for (int i = 0; i < n; ++i)
            std::cin >> V[i];
        insertion_sort(V);
        for (int i = 0; i < n; ++i)
        {
            std::cout << " " << V[i];
        }
        std::cout << std::endl;
    }
    return 0;
}
