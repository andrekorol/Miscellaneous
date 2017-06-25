#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
typedef vector<int> vi;

int main() {
  int n;
  puts("Entre n:");
  cin >> n;
  vi m, x;
  int i, ncp = n;
  cout << "Entre as " << n << " massas" << endl;
  while(ncp--) {
    cin >> i;
    m.push_back(i);
  }
  ncp = n;
  cout << "Entre as " << n << " coordenadas" << endl;
  while(ncp--) {
    cin >> i;
    x.push_back(i);
  }
  float s = 0;
  for(i = 0; i < n; i++) 
    s += m[i] * x[i];
  cout << "Xcom = " << s / (float)accumulate(m.begin(), m.end(), 0) << "m" << endl;
  return 0;
}
