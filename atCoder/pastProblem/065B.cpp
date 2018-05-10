#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int ans = 1;
  vector<int> aa;
  aa.push_back(0);

  cin >> n;
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    aa.push_back(t);
  }

  int t = aa[1];

  while (1) {
    if (t == 2) break;
    if (ans > n) {
      ans = -1;
      break;
    }
    t = aa[t];
    ans++;
  }

  cout << ans << endl;
}
