#include "heap.hh"
#include <iostream>

using namespace std;
using namespace pro2;

struct Paquet
{
    int    prioritat;
    string origen, desti;

    bool operator>(const Paquet &other) const
    {
        return prioritat > other.prioritat;
    }
};

istream &operator>>(istream &is, Paquet &p)
{
    return is >> p.prioritat >> p.origen >> p.desti;
}

ostream &operator<<(ostream &os, const Paquet &p)
{
    return os << p.prioritat << ' ' << p.origen << ' ' << p.desti << endl;
}

void process_buffer(int buffer_size)
{
    Heap<Paquet> h;
    Paquet       p;

    while (cin >> p)
    {
        if (h.size() >= buffer_size)
        {
            cout << h.top();
            h.pop();
        }
        h.push(p);
    }

    while (!h.empty())
    {
        cout << h.top();
        h.pop();
    }
}

int main(void)
{
    int buffer_size;
    if (cin >> buffer_size)
        process_buffer(buffer_size);

    return 0;
}
