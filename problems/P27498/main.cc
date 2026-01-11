#include <cassert>
#include <iostream>
#include <vector>

typedef std::vector<std::vector<int>> Matrix;

/*
 * @pre a and b refer to distinct objects
 * @post values of a and b are exchanged
 */
void swap(int &a, int &b)
{
    assert(&a != &b);

    a ^= b;
    b ^= a;
    a ^= b;
}

/*
 * @pre M is a non-empty square matrix
 * @post M is transposed in place
 */
void transpose(Matrix &M)
{
    const int size = M.size();
    assert(size > 0);

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
            swap(M[i][j], M[j][i]);
    }
}

int main(void)
{
    int n;
    while (std::cin >> n)
    {
        Matrix M(n, std::vector<int>(n));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cin >> M[i][j];
        }
        transpose(M);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                std::cout << M[i][j] << " ";
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
