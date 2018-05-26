#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int sum, max = 0;
  string s;
  string x, y;
  cin >> n >> s;

  for (int k = 0; k < (int)s.size(); k++) {
    sum = 0;
    x = s.substr(0, k);
    y = s.substr(k, (int)s.size() - 1);
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    x.erase(unique(x.begin(), x.end()), x.end());
    y.erase(unique(y.begin(), y.end()), y.end());
    for (int l = 0; l < (int)x.size(); l++) {
      for (int m = 0; m < (int)y.size(); m++) {
        if (x[l] == y[m]) sum++;
      }
    }
    if (max < sum) max = sum;
  }
  cout << max << endl;
}
