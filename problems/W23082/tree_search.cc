#include "tree.hh"
using namespace pro2;
using namespace std;

/**
 * @brief Cerca un valor en un arbre.
 *
 * @param t Arbre.
 * @param x Valor a cercar.
 *
 * @returns Retorna `true` si `x` es troba en algun node de l'arbre `t`,
 *          `false` en cas contrari.
 */
bool tree_search(Tree<int> t, int x)
{
    if(t.empty())
	return false;
    if(t.value() == x)
	return true;
    int n = t.num_children();
    for(int i = 0; i < n; ++i)
    {
	if(tree_search(t.child(i),x))
	    return true;
    }
    return false;
}
