using namespace std;
#include "bintree.hh"
using namespace pro2;

int height_(const BinTree<int>& t) {
    if (t.empty()) return 0;
    return 1 + max(height_(t.left()), height_(t.right()));
}

/**
 * @brief Calcula l'alçada d'un arbre binari
 * @param t Un arbre binari.
 * @returns L'alçada de l'arbre, segons la definició anterior.
 */
int height(BinTree<int> t)
{
    return height_(t);
}
