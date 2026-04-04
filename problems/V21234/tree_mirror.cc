#include "tree.hh"

using namespace pro2;
using namespace std;

/**
 * @brief Retorna un arbre que és el mirall de l'arbre `t`.
 * 
 * Un arbre és el mirall d'un altre si les seves branques esquerra i dreta
 * estan intercanviades recursivament en tots els nodes.
 * 
 * @param t L'arbre original.
 * 
 * @returns Un arbre que és el mirall de l'arbre `t`.
 */
Tree<int> tree_mirror(Tree<int> t)
{
    if(t.empty())
	return {};

    int n = t.num_children();
    vector<Tree<int>> children(n);

    for(int i = 0; i < n; ++i)
	children[n - 1 - i] = tree_mirror(t.child(i));

    return Tree<int>(t.value(), children);
}
