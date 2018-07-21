#include <bits/stdc++.h>
using namespace std;

int abs(int x) {
  return (x < 0 ? -x : x);
}

int main() {
  long long int n;
  cin >> n;
  vector<long long int> aa;

  for (int k = 1; k <= n; k++) {
    long long int t;
    cin >> t;
    aa.push_back(t - k);
  }

  sort(aa.begin(), aa.end());
  long long int median = aa[n / 2];
  //int median = (n % 2 == 0 ? (aa[(n - 1) / 2] + aa[n / 2]) / 2 : aa[(n - 1) / 2]);

  long long int res = 0;
  for (long long int k = 0; k < n; k++) {
    res += abs(aa[k] - median);
  }
  cout << res << endl;
}
