#include <cassert>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> read_matrix(int n, int m)
{
    assert(n > 0);
    assert(m > 0);

    std::vector<std::vector<int>> mat(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            std::cin >> mat[i][j];
    }

    return mat;
}

void print_row(const std::vector<std::vector<int>> &mat, int row)
{
    std::cout << "row " << row << ": ";
    for (int i = 0; i < mat[row - 1].size(); ++i)
        std::cout << ((i) ? " " : "") << mat[row - 1][i];
    std::cout << std::endl;
}

void print_column(const std::vector<std::vector<int>> &mat, int column)
{
    std::cout << "column " << column << ": ";
    for (int i = 0; i < mat.size(); ++i)
        std::cout << ((i) ? " " : "") << mat[i][column - 1];
    std::cout << std::endl;
}

void print_element(const std::vector<std::vector<int>> &mat, int x, int y)
{
    std::cout << "element " << x << ' ' << y << ": ";
    std::cout << mat[x - 1][y - 1];
    std::cout << std::endl;
}

int main(void)
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> mat = read_matrix(n, m);

    std::string question;

    while (std::cin >> question)
    {
        std::cin >> n;
        if (question == "row")
            print_row(mat, n);
        else if (question == "column")
            print_column(mat, n);
        else
        {
            std::cin >> m;
            print_element(mat, n, m);
        }
    }

    return 0;
}
