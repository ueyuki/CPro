#include <bits/stdc++.h>
using namespace std;

int main () {
  int n;
  cin >> n;

  vector<int> aa(n);
  for (int k = 0; k < n; k++) {
    cin >> aa[k]; 
  }

  sort(aa.rbegin(), aa.rend());
  int endTriangle = n - 2;

  for (int k = 0; k < endTriangle; k++) {
    if (aa[k] <= aa[k+1] + aa[k+2]) {
      cout << aa[k] + aa[k+1] + aa[k+2] << endl;
      return 0;
    }
  }

  cout << "0" << endl;
  return 0;
}
