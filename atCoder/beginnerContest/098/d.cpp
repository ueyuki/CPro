#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> a;
  cin >> n;
  int sum = 0, xor_sum = 0;
  int ans = n;

  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    a.push_back(t);
  }

  for (int k = 0; k < n; k++) {
    sum = a[k];
    xor_sum = a[k];
    for (int l = k+1; l < n; l++) {
      sum += a[l];
      xor_sum ^= a[l];
      if (sum == xor_sum) ans++;
      else break;
    }
  }

  cout << ans << endl;
}
