#include "bintree.hh"
using namespace pro2;

BinTree<int> walk(const BinTree<int> &t, int &level)
{
    if (t.empty())
    {
        level = 0;
        return t;
    }
    int  l_left, l_right;
    auto left = walk(t.left(), l_left);
    auto right = walk(t.right(), l_right);
    level = 1 + l_left + l_right;
    return BinTree<int>(level, left, right);
}

/**
 * @brief Retorna l'arbre de mides de `t`.
 *
 * L'arbre de mides és un arbre binari amb la mateixa forma que `t` però a on cada valor conté la
 * quantitat total de nodes del subarbre que penja de la mateixa posició a `t`.
 *
 * @param t L'arbre binari original.
 *
 * @returns L'arbre de mides de `t`.
 */
BinTree<int> tree_of_sizes(BinTree<int> t)
{
    int level;
    return walk(t, level);
}
