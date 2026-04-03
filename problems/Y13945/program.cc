#include <iostream>
#include "heap.hh"

using namespace std;
using namespace pro2;

int	read_int(void)
{
    int n;
    cin >> n;
    return n;
}

Heap<int> read_heap(void)
{
    int n;
    Heap<int> h;
    while (cin >> n)
	h.push(n);
    return h;
}

int main(void)
{
    int k = read_int();
    Heap<int> h = read_heap();
    if(k-- and !h.empty())
    {
	cout << h.top();
	h.pop();
	while(k-- and !h.empty())
	{
	    cout << ' ';
	    cout << h.top();
	    h.pop();
	}
    }
    cout << endl;
    return 0;
}


