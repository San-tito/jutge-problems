#include <string>
using namespace std;

#include "bintree.hh"
using namespace pro2;

/**
 * @brief Concatena tots els valors d'un arbre binari de strings en inordre
 *
 * @param t L'arbre binari de strings.
 * @returns La concatenació de tots els valors de l'arbre en inordre.
 */
string tree_join(BinTree<string> t)
{
    if (t.empty())
        return "";
    string str;
    str += tree_join(t.left());
    str += t.value();
    str += tree_join(t.right());
    return str;
}
