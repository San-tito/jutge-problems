#include "heap.hh"
#include <queue>
#include <iostream>

using namespace std;
using namespace pro2;

int main(void)
{
    Heap<int> h;
    int       n;

    while (cin >> n)
        h.push(n);

    if (!h.empty())
    {
        cout << h.top();
        h.pop();

        while (!h.empty())
        {
            cout << " " << h.top();
            h.pop();
        }
    }
    cout << endl;

    return 0;
}
