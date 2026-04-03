#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;

struct Elem {
    int valor;
    int index;

    bool operator>(const Elem& other) const {
	return valor > other.valor;
    }
};

void	process_window(int w)
{
    Heap<Elem> h;
    int v, i = 0;
    while(cin >> v)
    {
	h.push({v, i});
	while (h.top().index <= i - w) 
            h.pop();
	cout << h.top().valor << endl;
	++i;
    }
}

int main(void)
{
    int w;
    cin >> w;
    process_window(w);
    return 0;
}

