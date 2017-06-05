#include <bits/stdc++.h>
using namespace std;
typedef unsigned long ul;
typedef vector<int> vi;
int main() {
    ul n;
    int l, r, x, i, y, m;
    cin >> n >> m;
    vi P (n);
    for (int k = 0; k < n; ++k)
        cin >> P[k];
    for (int j = 0; j < m; ++j) {
        cin >> l >> r >> x;
        y = 0;
        for (i = l - 1; i < r; ++i) y+= P[i] < P[x];
        // cout << "y = " << y << ", x = " << x << ", l + y = " << l+y << endl;
        cout << (l + y == x ? "Yes" : "No") << endl;
    }
    return 0;
}