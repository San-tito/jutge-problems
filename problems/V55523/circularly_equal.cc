#include <cassert>
#include <list>
using namespace std;

/**
 * @pre  cierto
 * @post se devuelve si l1 y l2 son iguales de forma circular
 */
bool circularly_equal(const list<int> &L1, const list<int> &L2)
{
    if (L1.size() != L2.size())
        return false;

    if (L1.empty())
        return true;

    int  N = L1.size();
    auto elem = L1.front();

    for (auto it = L2.begin(); it != L2.end(); ++it)
    {
        if (*it == elem)
        {
            auto it1 = L1.begin();
            auto it2 = it;
            bool iguales = true;

            for (int i = 0; i < N and iguales; ++i)
            {
                if (*it2 != *it1)
                    iguales = false;
                ++it1;
                ++it2;
                if (it2 == L2.end())
                    it2 = L2.begin();
            }

            if (iguales)
                return iguales;
        }
    }

    return false;
}
