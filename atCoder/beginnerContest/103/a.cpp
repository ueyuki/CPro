#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> aa;
  for (int k = 0; k < 3; k++) {
    int t;
    cin >> t;
    aa.push_back(t);
  }
  sort(aa.begin(), aa.end());
  int ans = 0;
  for (int k = 0; k < 2; k++) {
    ans += aa[k+1] - aa[k];
  }
  cout << ans << endl;

}
