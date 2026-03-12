#include "bintree.hh"
using namespace pro2;

void walk(BinTree<int> t, int &sum)
{
    if (t.empty())
        return;
    sum += t.value();
    walk(t.left(), sum);
    walk(t.right(), sum);
}

/**
 * @brief Suma els valors d'un arbre binari.
 *
 * Si un node de l'arbre és buit, el seu valor és 0.
 *
 * @param t Arbre binari.
 *
 * @returns La suma dels valors dels nodes de l'arbre `t`.
 */
int suma_valors(BinTree<int> t)
{
    int sum = 0;
    walk(t, sum);
    return sum;
}
