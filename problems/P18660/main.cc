#include <cassert>
#include <iostream>
#include <vector>

typedef std::vector<std::vector<char>> matrix;

/*
 * @pre c is any character
 * @post returns uppercase version if c is lowercase
 */
char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
        return char(c + 'A' - 'a');
    return c;
}

/*
 * @pre c is any character
 * @post returns lowercase version if c is uppercase
 */
char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return char(c + 'a' - 'A');
    return c;
}

/*
 * @pre x > 0, std::cin contains x words
 * @post returns vector of x words
 */
std::vector<std::string> read_words(int x)
{
    assert(x > 0);

    std::vector<std::string> words(x);
    for (int i = 0; i < x; ++i)
        std::cin >> words[i];

    return words;
}

/*
 * @pre n > 0, m > 0, std::cin contains n*m characters
 * @post returns n by m matrix
 */
matrix read_matrix(int n, int m)
{
    assert(n > 0 && m > 0);

    matrix mat(n, std::vector<char>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            std::cin >> mat[i][j];

    return mat;
}

/*
 * @pre mat is non-empty rectangular matrix
 * @post prints matrix to std::cout
 */
void print_matrix(const matrix &mat)
{
    const int n = mat.size();
    assert(n > 0);

    const int m = mat[0].size();
    assert(m > 0);

    for (int i = 0; i < n; ++i)
    {
        assert(mat[i].size() == m);
        for (int j = 0; j < m; ++j)
            std::cout << (j ? " " : "") << mat[i][j];
        std::cout << std::endl;
    }
}

/*
 * @pre (i,j) is a valid start, direction (di,dj) >= 0
 * @post uppercases letters if word matches in that direction
 */
void check(matrix &mat, const std::string &word, int i, int j, int di, int dj)
{
    const int n = mat.size();
    const int m = mat[0].size();
    const int len = word.size();

    assert(len > 0);

    int k = 0;
    while (k < len and i + k * di < n and j + k * dj < m and word[k] == to_lower(mat[i + k * di][j + k * dj]))
        ++k;

    if (k == len)
    {
        for (k = 0; k < len; ++k)
            mat[i + k * di][j + k * dj] = to_upper(mat[i + k * di][j + k * dj]);
    }
}

/*
 * @pre mat non-empty, words non-empty
 * @post marks all word occurrences in mat
 */
void solve(matrix &mat, const std::vector<std::string> &words)
{
    const int n = mat.size();
    assert(n > 0);

    const int m = mat[0].size();
    assert(m > 0);

    const int w = words.size();
    assert(w > 0);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            for (int k = 0; k < w; ++k)
            {
                check(mat, words[k], i, j, 0, 1);
                check(mat, words[k], i, j, 1, 0);
                check(mat, words[k], i, j, 1, 1);
            }
        }
    }
}

int main(void)
{
    bool space = false;
    int  x, m, n;
    while (std::cin >> x >> n >> m)
    {
        if (space)
            std::cout << std::endl;
        space = true;

        std::vector<std::string> words = read_words(x);
        matrix                   mat = read_matrix(n, m);
        solve(mat, words);
        print_matrix(mat);
    }
    return 0;
}
