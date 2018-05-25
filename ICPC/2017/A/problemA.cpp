#include <bits/stdc++.h>
using namespace std;

int main() {

  while (1) {
    int n, m;
    vector<int> aa;
    int max = 0;
    cin >> n >> m;

    if (n == 0 && m == 0) break;
    for (int k = 0; k < n; k++) {
      int t;
      cin >> t;
      aa.push_back(t);
    }
    for (int k = 0; k < n-1; k++) {
      for (int l = k+1; l < n; l++) {
        int sum;
        sum = aa[k] + aa[l];
        if (max < sum && m >= sum) max = sum;
      }
    }

    if (max != 0) cout << max << endl;
    else cout << "NONE" << endl;
  }
  return 0;
}
