#include <cassert>
#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> matrix;

struct pos
{
    int x;
    int y;
};

/*
 * @pre n,m > 0
 * @post read matrix from standard input and return it
 */
matrix read_matrix(int n, int m)
{
    assert(n > 0);
    assert(m > 0);

    matrix mat(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            std::cin >> mat[i][j];
    }

    return mat;
}

/*
 * @pre mat is not empty, p is a valid mat position
 * @post return true if  p to
 */
bool check(const matrix &mat, pos p, int dx, int dy)
{
    const int n = mat.size();
    assert(p.x < n);

    const int m = mat[0].size();
    assert(p.y < m);

    for(int i = 0; p.x + i < n and p.y + i < m; ++i)
    {
	std::cout << mat[p.x + i][p.y + i] << " ";
    }

    return true;
}

int main(void)
{
    int n, m;
    while (std::cin >> n >> m)
    {
        matrix mat = read_matrix(n, m);
        pos    p;
        std::cin >> p.x >> p.y;
        bool is = check(mat, p, 1, 1);
        std::cout << is << std::endl;
    }
    return 0;
}
