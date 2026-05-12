#include "bintree.hh"
using namespace pro2;

using namespace std;

BinTree<int> height_diffs(BinTree<int> t, int &height)
{
    if(t.empty())
    {
	height = 0;
	return BinTree<int>();
    }

    int left_h, right_h;
    auto left = height_diffs(t.left(), left_h);
    auto right = height_diffs(t.right(), right_h);
    height = 1 + max(left_h, right_h);
    return BinTree<int>(left_h - right_h, left, right);
}

/**
 * @brief Retorna l'arbre de graus de desequilibri de `t`.
 *
 * @param t L'arbre binari original.
 * @returns L'arbre de graus de desequilibri de `t`.
 */
BinTree<int> bintree_of_height_diffs(BinTree<int> t)
{
    int height = 0;
    return height_diffs(t, height);
}
