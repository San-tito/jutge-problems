#include "tree.hh"
using namespace pro2;
using namespace std;

/**
 * @brief Calcula l'alçada d'un arbre
 * @param t Un arbre.
 * @returns L'alçada de l'arbre, segons la definició anterior.
 */
int tree_height(Tree<int> t)
{
    if(t.empty())
	return 0;
    int h = 0;
    for(int i = 0; i < t.num_children(); ++i)
	h = max(tree_height(t.child(i)), h);
    return 1 + h;
}
