#include <iostream>
using namespace std;
int main() {
    int n, x, time = 0; cin >> n;
    while (n--) {
        cin >> x;
        time += x;
    }
    int m, l, r; cin >> m;
    for (int i=0; i < m; ++i) {
        cin >> l >> r;
        if (r >= time) {
            {
                cout << (l > time ? l : time);
                exit(0);
            }
        }
    }
    cout << -1;
    return 0;
}