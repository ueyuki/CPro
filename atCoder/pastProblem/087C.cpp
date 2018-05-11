#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> uup;
  vector<int> ddown;
  int sum = 0;

  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    uup.push_back(t);
  }
  sum = uup[0];
  int max_sum = sum;

  ddown.push_back(0);
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    ddown.push_back(t);
  }

  for (int k = 1; k < n; k++) {
    for (int l = 1; l < n; l++) {
      if (l >= k) sum += ddown[l];
      else sum += uup[l];
    }
    if (max_sum < sum) max_sum = sum;
    sum = uup[0];
  }
  max_sum += ddown[(ddown.size()-1)];

  cout << max_sum << endl;

  return 0;
}
