#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> Matrix;

/*
 * @pre A and B are non-empty square matrices
 * @post returns C = A × B
 */
Matrix product(const Matrix &A, const Matrix &B)
{
    const int n = A.size();
    const int m = B[0].size();

    Matrix C(n, std::vector<int>(m, 0));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            for (int k = 0; k < B.size(); ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    return C;
}

int main(void)
{
    int p, q, r;
    while (std::cin >> p >> q >> r)
    {
        Matrix A(p, std::vector<int>(q));
        Matrix B(q, std::vector<int>(r));
        for (int i = 0; i < p; ++i)
        {
            for (int j = 0; j < q; ++j)
            {
                std::cin >> A[i][j];
            }
        }
        for (int i = 0; i < q; ++i)
        {
            for (int j = 0; j < r; ++j)
            {
                std::cin >> B[i][j];
            }
        }
        Matrix C = product(A, B);
        for (int i = 0; i < p; ++i)
        {
            for (int j = 0; j < r; ++j)
            {
                std::cout << C[i][j] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
