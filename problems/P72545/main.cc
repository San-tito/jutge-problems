#include <iostream>
#include <vector>
using namespace std;


int select(int k, const vector<int>& v1, const vector<int>& v2);


int main() {
    int n;
    while (cin >> n) {
        vector<int> A(n);
        for (int i = 0; i < n; ++i) cin >> A[i];
        int m;
        cin >> m;
        vector<int> B(m);
        for (int i = 0; i < m; ++i) cin >> B[i];

        int t;
        cin >> t;
        while (t--) {
            int k;
            cin >> k;
            cout << select(k, A, B) << endl;
        }
    }
    return 0;
}
