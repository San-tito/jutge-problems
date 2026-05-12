#include <iostream>
#include <queue>
#include <set>

using namespace std;

queue<string> remove_repeats(queue<string> &entrada)
{
    queue<string> salida;
    if (entrada.empty())
        return salida;

    string item = entrada.front();
    salida.push(item);
    entrada.pop();

    while(!entrada.empty())
    {
	if(item != entrada.front())
	{
	    item = entrada.front();
	    salida.push(item);
	}
	entrada.pop();
    }

    return salida;
}
