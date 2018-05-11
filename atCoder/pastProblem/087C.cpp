#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> uup;
  vector<int> ddown;
  int up_sum = 0;
  int down_sum = 0;

  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    up_sum += t;
    uup.push_back(t);
  }
  long long int ans = uup[0];

  ddown.push_back(0);
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    down_sum += t;
    ddown.push_back(t);
  }

  int diff;
  int max_diff = -99;
  int max_pos = 0;
  for (int k = 1; k < n; k++) {
    up_sum += uup[k];
    down_sum += ddown[k];
    diff = up_sum - down_sum;
    if (diff > max_diff) {
      max_diff = diff;
      max_pos = k;
    }
  }

  for (int k = 1; k < n; k++) {
    if (max_pos < k) ans += ddown[k];
    else ans += uup[k];
  }
  ans += ddown[(ddown.size()-1)];
  cout << ans << endl;

  return 0;
}
