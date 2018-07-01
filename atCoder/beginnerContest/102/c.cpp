#include <bits/stdc++.h>
using namespace std;

int abs(int x) {
  return (x < 0 ? -x : x);
}

int main() {
  int n;
  cin >> n;
  vector<int> aa;
  int min = 1000000000;

  for (int k = 1; k <= n; k++) {
    int t;
    cin >> t;
    aa.push_back(t - k);
  }

  int ave = accumulate(aa.begin(), aa.end(), 0) / n;
  
  for (int k = ave - 5; k < ave + 5; k++) {
    int res = 0;
    for (int l = 0; l < n; l++) {
      res += abs(aa[l] - k);
    }
    if (min > res) min = res;
  }

  cout << min << endl;
}
