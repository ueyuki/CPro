#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> aa;

  for (int l = 0; l < n; l++) {
    int t;
    cin >> t;
    aa.push_back(t);
  }

  int ans = 0;
  while (1) {
    if (n <= 0) {
      cout << ans << endl;
      return 0;
    }
    if (ans == 0) {
      ans++;
      n -= k;
    }
    else {
      ans++;
      n -= (k - 1);
    }
  }
}
