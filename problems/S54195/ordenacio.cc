#include <list>
using namespace std;

list<int>::iterator min_elem(list<int>::iterator first, list<int>::iterator last)
{
    if (first == last)
        return last;
 
    auto smallest = first;
 
    while (++first != last)
        if (*first < *smallest)
            smallest = first;
 
    return smallest;
}

void ordenacio_seleccio(list<int>::iterator begin, list<int>::iterator end)
{
    for(auto it = begin; it != end; ++it)
    {
	auto min_it = min_elem(it, end);
	swap(*it, *min_it);
    }
}
