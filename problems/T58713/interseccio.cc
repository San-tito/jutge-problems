#include <list>
#include <string>
#include "persona.hh"
using namespace std;

list<Persona> interseccio_ordenada(const list<Persona>& a, const list<Persona>& b)
{
    list<Persona> l;

    auto a_it = a.begin();
    auto b_it = b.begin();

    while(a_it != a.end() and b_it != b.end())
    {
	if(a_it->dni() == b_it->dni())
	{
	    l.push_back(*a_it);
	    ++a_it;
	    ++b_it;
	}
	else if(a_it->dni() > b_it->dni())
	    ++b_it;
	else
	    ++a_it;
    }

    return l;
}
