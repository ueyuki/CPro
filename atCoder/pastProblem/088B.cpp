#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> a;

  cin >> n;
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    a.push_back(t);
  }

  sort(a.begin(), a.end(), greater<int>());

  int ans = 0;
  for (int k = 0; k < n; k++) {
    ans += (k % 2 == 0 ? a[k] : -a[k]);
  }

  cout << ans << endl;
}
