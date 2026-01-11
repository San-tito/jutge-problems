#include <cassert>
#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> Matrix;

/*
 * @pre A and B are non-empty square matrices of the same size
 * @post returns C = A × B
 */
Matrix product(const Matrix &A, const Matrix &B)
{
    const int size = A.size();
    assert(B.size() == size);

    Matrix C(size, std::vector<int>(size, 0));

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            for (int k = 0; k < size; ++k)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    return C;
}

int main(void)
{
    int n;
    while (std::cin >> n)
    {
        Matrix A(n, std::vector<int>(n));
        Matrix B(n, std::vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cin >> A[i][j];
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cin >> B[i][j];
        }
        Matrix C = product(A, B);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cout << C[i][j] << " ";
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
