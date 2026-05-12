#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
using namespace pro2;

BinTree<int> sum_at_depth(BinTree<int> t, int depth, int &sum)
{
    if (t.empty())
    {
        sum = 0;
        return BinTree<int>();
    }

    int  left_sum, right_sum;
    auto left = sum_at_depth(t.left(), depth + 1, left_sum);
    auto right = sum_at_depth(t.right(), depth + 1, right_sum);

    sum = t.value() + left_sum + right_sum;

    int value = (depth % 2 == 0) ? sum : t.value();

    return BinTree<int>(value, left, right);
}

/**
 * @brief Retorna l'arbre `t` reemplaçant els valors dels nodes a profunditat parell per la suma per sota
 *
 * @param t L'arbre binari original.
 *
 * @returns Un arbre binari R amb la mateixa estructura que t.
 * Per a cada posició p de t i R, si p és a profunditat senar,
 * llavors t i R tenen el mateix valor a posició p.
 * En canvi, si p es a profunditat parell, llavors el valor de R a posició
 * p és la suma de tots els valors que es troben a t a posició p i per sota.
 */
BinTree<int> sum_below_at_even_depth(BinTree<int> t)
{
    int sum = 0;
    return sum_at_depth(t, 0, sum);
}
