#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int m, int n) {
  if ((0 == m) || (0 == n)) return 0;

  while(m != n) {
    if (m > n) m = m - n;
    else       n = n - m;
  }
  return m;
}

int lcm(int m, int n) {
  if ((0 == m) || (0 == n)) return 0;

  return ((m / gcd(m, n)) * n);
}

int main() {
  int n;
  cin >> n;
  vector<int> aa;
  int lcmn = 1;

  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    aa.push_back(t);
  }
  sort(aa.begin(), aa.end());
  for (int k = 0; k < n; k++) {
    lcmn = lcm(lcmn, aa[k]);
  }

  int ans = 0;
  for (int k = 0; k < n; k++) {
    ans += (lcmn - 1) % aa[k];
  }
  cout << ans << endl;
}
