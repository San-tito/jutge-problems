#include <cassert>
#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> matrix;

matrix read_matrix(int n, int m)
{
    matrix mat(n, std::vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; ++j)
            std::cin >> mat[i][j];
    }

    return mat;
}

int main(void)
{
    int n, m, count;

    while (std::cin >> n >> m)
    {
        count = 0;
        matrix mat = read_matrix(n, m);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (mat[i][j] and ((i + 1 == n) or mat[i + 1][j] == 0) and ((j + 1 == m) or mat[i][j + 1] == 0))
                    ++count;
            }
        }
        std::cout << count << std::endl;
    }
    return 0;
}
