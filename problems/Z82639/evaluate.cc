#include "eval.hh"
#include <iostream>

using namespace std;
using namespace pro2;

/**
 * @brief Avalua un arbre no buit que representa una expressió Booleana.
 *
 * L'expressió és sobre l'1 (true) i el 0 (fals) i els operadors
 * 'and', 'or', i 'not'.
 *
 * @pre L'arbre és no buit i l'expressió és correcta, és a dir, els operands
 * 'and' i 'or' tenen més d'un operand, i l'operador 'not' en té només 1.
 *
 * @param t Arbre que representa l'expressió.
 * @return Resultat de l'avaluació de l'expressió.
 */
bool evaluate(Tree<string> t)
{
    const string &val = t.value();
    if (val == "0" || val == "1")
        return val == "1";

    int n = t.num_children();

    if (val == "and")
    {
        for (int i = 0; i < n; ++i)
            if (!evaluate(t.child(i)))
                return false;
        return true;
    }

    if (val == "or")
    {
        for (int i = 0; i < n; ++i)
            if (evaluate(t.child(i)))
                return true;
        return false;
    }

    return !evaluate(t.child(0));
}
