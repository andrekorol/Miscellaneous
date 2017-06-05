#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long ul;
typedef vector<int> vi;
int main() {
    ul n, m;
    int l, r, x;
    cin >> n >> m;
    vi P (n);
    vi P_copy (n);
    for (int i = 0; i < n; ++i)
        cin >> P[i];
    for (int j = 0; j < m; ++j) {
        cin >> l >> r >> x;
        if (l > x || r < x)
            cout << "Yes" << endl;
        else {
            --x;
            P_copy = P;
            sort(P_copy.begin()+l-1, P_copy.begin()+r);
            cout << (P[x] == P_copy[x] ? "Yes" : "No") << endl;
        }
    }
    return 0;
}