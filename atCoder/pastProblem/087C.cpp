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
  up_sum -= uup[0];
  int ans = uup[0];

  ddown.push_back(0);
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    down_sum += t;
    ddown.push_back(t);
  }
  down_sum -= ddown[(ddown.size() - 1)];

  bool flag = false;
  for (int k = 1; k < n; k++) {
    if (down_sum > up_sum) flag = true; 
    if (flag) ans += ddown[k];
    if (!flag) ans += uup[k];
    up_sum -= uup[k];
    down_sum -= ddown[k];
  }
  ans += ddown[(ddown.size() - 1)];

  cout << ans << endl;
  return 0;
}
