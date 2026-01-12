#include <iostream>
#include <vector>

int position(double x, const std::vector<double> &v, int left, int right)
{
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (v[mid] == x)
        return mid;
    else if (v[mid] < x)
        return position(x, v, mid + 1, right);
    else
        return position(x, v, left, mid - 1);
}

int main(void)
{
    int n;
    while (std::cin >> n)
    {
        std::vector<double> V(n);
        for (int i = 0; i < n; ++i)
            std::cin >> V[i];
        int t;
        std::cin >> t;
        while (t--)
        {
            double x;
            int    left, right;
            std::cin >> x >> left >> right;
            std::cout << position(x, V, left, right) << std::endl;
        }
    }
    return 0;
}
