#include "bintree.hh"
using namespace pro2;

BinTree<int> walk(const BinTree<int> &t, int &sum)
{
    if (t.empty())
    {
        sum = 0;
        return t;
    }
    int  left_sum = 0, right_sum = 0;
    auto left = walk(t.left(), left_sum);
    auto right = walk(t.right(), right_sum);
    sum = t.value() + left_sum + right_sum;
    return BinTree<int>(sum, left, right);
}

/**
 * @brief Retorna l'arbre de sumes de `t`.
 *
 * L'arbre de sumes és un arbre binari amb la mateixa forma de `t` però a on cada valor conté la
 * suma dels valors del subarbre que penja de la mateixa posició a `t`.
 *
 * @param t L'arbre binari original.
 *
 * @returns L'arbre de sumes de `t`.
 */
BinTree<int> tree_of_sums(BinTree<int> t)
{
    int sum = 0;
    return walk(t, sum);
}
