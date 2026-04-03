#include "bintree.hh"
using namespace pro2;

bool cerca(const BinTree<int> &t, int &x)
{
    if (t.empty())
        return false;
    if (t.value() == x)
        return true;
    return cerca(t.left(), x) or cerca(t.right(), x);
}

/**
 * @brief Cerca un valor en un arbre binari.
 *
 * @param t Arbre binari.
 * @param x Valor a cercar.
 *
 * @returns Retorna `true` si `x` es troba en algun node de l'arbre `t`,
 *          `false` en cas contrari.
 */
bool cerca_valor(BinTree<int> t, int x)
{
    return cerca(t, x);
}
