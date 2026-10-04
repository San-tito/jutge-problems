#include <iostream>
#include <vector>
using namespace std;


int rightmost(double x, const vector<double>& v);


int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            cin >> x;
            cout << rightmost(x, V) << endl;
        }
    }
}
