#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, P[10001];
    cin >> n >> m;
    for (int k = 1; k <= n; ++k) cin >> P[k];
    int l, r, x;
    for (int j = 0; j < m; ++j) {
        cin >> l >> r >> x;
        int Px = P[x];
        int cnt = 0;
        for (int k = l; k <= r; ++k) cnt+= P[k] < Px;
        cout << (Px == P[l+cnt] ? "Yes" : "No") << endl;
    }
    return 0;
}