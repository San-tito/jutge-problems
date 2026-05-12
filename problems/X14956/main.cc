#include <iostream>
#include <queue>
#include <map>
#include <set>

using namespace std;

struct Item
{
    int val, freq;

    bool operator<(const Item&other) const
    {
	if(freq != other.freq)
	    return freq < other.freq;
	return val > other.val;
    }
};


vector<int> read_elems(int N)
{
    vector<int> elems(100001, 0);

    int n;

    while(N-- and cin >> n)
	elems[n]++;

    return elems;
}

priority_queue<Item> setup_heap(vector<int> &elems)
{
    priority_queue<Item> items;

    for(int i = 0; i < elems.size(); ++i)
    {
	if(elems[i])
	    items.push({i, elems[i]});
    }

    return items;
}

int main(void)
{
    int N, K;

    while(cin >> N >> K)
    {
	vector<int> elems = read_elems(N);
	priority_queue<Item> heap = setup_heap(elems);

	while(!heap.empty() and K--)
	{
	    auto e = heap.top();
	    cout << e.val << endl;
	    heap.pop();
	}

	cout << "---" << endl;
     }
}
