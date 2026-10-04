#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> heap;

    char op;
    int  x, n;

    while (cin >> op)
    {
        switch (op)
        {
        case 'S':
            cin >> x;
            heap.push(x);
            break;

        case 'A':
            if (heap.empty())
                cout << "error!" << endl;
            else
                cout << heap.top() << endl;
            break;

        case 'R':
            if (heap.empty())
                cout << "error!" << endl;
            else
                heap.pop();
            break;

        case 'I':
            cin >> x;
            if (heap.empty())
            {
                cout << "error!" << endl;
            }
            else
            {
                n = heap.top();
                heap.pop();
                heap.push(n + x);
            }
            break;

        case 'D':
            cin >> x;
            if (heap.empty())
            {
                cout << "error!" << endl;
            }
            else
            {
                n = heap.top();
                heap.pop();
                heap.push(n - x);
            }
            break;
        }
    }
}
