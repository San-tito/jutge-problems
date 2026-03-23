#include "bintree.hh"
#include "util.hh"
#include <map>
using namespace pro2;

/**
 * @brief Avalua una expressió binària amb variables
 *
 * L'expressió és sobre els naturals i els operadors `+`, `-`, i `*`.
 * A més, hi ha un diccionari `env` que emmagatzema els valors d'un
 * conjunt de variables que poden aparèixer a l'arbre.
 *
 * @pre `t` és no buit. Totes les variables que apareixen a `t`
 *       estan definides a `env`. Les opercions expressades per
 *       l'arbre no produeixen errors d'_overflow_
 *
 * @param t Arbre amb l'expressió binària.
 * @param env Diccionari amb parelles (nom de variable, valor). Aquest
 *            diccionari no es pot modificar.
 */
int tree_eval_env(BinTree<std::string> t, const std::map<std::string, int> &env)
{
    if (is_number(t.value()))
        return string_to_int(t.value());

    if (is_var_name(t.value()))
        return env.at(t.value());

    int left = tree_eval_env(t.left(), env);
    int right = tree_eval_env(t.right(), env);

    switch (t.value()[0])
    {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    }
    return 0;
}
