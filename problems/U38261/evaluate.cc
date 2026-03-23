#include "bintree.hh"
using namespace pro2;

/**
 * @brief Poda les branques amb valor `x` d'un arbre binari.
 *
 * Cerca en un arbre binari totes les branques amb valor `x` i les elimina, retornant un nou arbre.
 *
 * @param t Arbre binari.
 * @param x Valor de les branques a podar.
 *
 * @return Retorna una parella (`std::pair`) amb l'arbre podat i un booleà que és `true` si s'ha
 *         podat alguna branca i `false` si l'arbre resultat és igual que `t`.
 */
std::pair<BinTree<int>, bool> prune_tree(BinTree<int> t, int x)
{
    if (t.empty())
        return {t, false};
    auto left = prune_tree(t.left(), x);
    auto right = prune_tree(t.right(), x);
    if (t.value() == x)
        return {BinTree<int>(), true};
    return {BinTree<int>(t.value(), left.first, right.first),
            left.second or right.second};
}
