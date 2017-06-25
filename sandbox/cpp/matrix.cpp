#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#if __cplusplus >= 201103L
typedef unsigned long long ul;
typedef vector<ul> vl;
typedef vector<vl> vvl;
auto maxim = ULLONG_MAX;
#else
typedef unsigned long ul;
typedef vector<ul> vl;
typedef vector<vl> vvl;
auto maxim = ULONG_MAX;
#endif
#ifdef DEBUG
const string s = "Debug mode ON";
#else
const string s = "Debug mode OFF";
#endif

int main(int argc, const char* argv[]) {
#ifdef DEBUG
    printf("Executing as \"%s\"\n", argv[0]);
#endif
    ul n; cout << "Enter a number to be used as the number of rows and columns of the matrix:" << endl; cin >> n;
    cout << maxim << endl << s << endl;
    vvl mat;
    for (ul i = 0; i < n; ++i) {
        vl vec;
        for (ul j = 1; j <= n; ++j) vec.push_back(j);
        mat.push_back(vec);
    }
    for (ul k = 0; k < n; ++k) {
        for (ul i = 0; i < n; ++i) cout << mat[k][i] << '\t';
        cout << endl;
    }
    return 0;
}