#include <iostream>
using namespace std;

#include "bintree-inline.hh"
#include "bintree-io.hh"
#include "bintree.hh"
#include "vector-io.hh"
using namespace pro2;

void walk(BinTree<int> t, vector<int> &path)
{
    if (t.empty())
        return;

    path.push_back(t.value());

    vector<int> left_p, right_p;

    walk(t.left(), left_p);
    walk(t.right(), right_p);

    vector<int> res = (left_p.size() < right_p.size()) ? right_p : left_p;

    path.insert(path.end(), res.begin(), res.end());
}

/**
 * @brief Retorna els valors dels nodes del camí més llarg de l'arbre binari `t`.
 *
 * Un camí va des de l'arrel de l'arbre fins a una full (un node sense fills).
 * Si hi ha més d'un camí màxim, cal retornar el que va per les branques de més
 * a l'esquerra possible.
 *
 * @param t L'arbre binari.
 *
 * @returns Els valors dels nodes del camí més llarg de `t`.
 */
vector<int> longest_leftmost_path(BinTree<int> t)
{
    vector<int> path;
    walk(t, path);
    return path;
}
