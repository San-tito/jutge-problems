
#include <list>
#include <string>
using namespace std;

/*
 * @pre
 * @post
 */
list<string>::const_iterator paraula_mes_llarga(const list<string> &text)
{
    auto begin(text.begin());
    auto end(text.end());

    if (text.empty())
        return end;

    auto it(begin);
    ++begin;

    while (begin != end)
    {
        if (it->length() < begin->length())
            it = begin;
        ++begin;
    }

    return it;
}
