#include <list>
#include <string>
#include "fruit.hh"
using namespace std;

list<Fruit> fusio_ordenada(const list<Fruit>& a, const list<Fruit>& b)
{
    list<Fruit> l;
    auto it_a = a.begin();
    auto it_b = b.begin();

    while(it_a != a.end() and it_b != b.end())
    {
	if(it_a->is_greater_than(*it_b))
	{
	    l.push_back(*it_a);
	    ++it_a;
	}
	else
	{
	    l.push_back(*it_b);
	    ++it_b;
	}
    }

    l.insert(l.end(), it_a, a.end());
    l.insert(l.end(), it_b, b.end());

    return l;
}
