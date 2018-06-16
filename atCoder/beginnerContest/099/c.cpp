#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 100000;
  int six = 0, nine = 0;

  for (int k = 0; k <= n; k++) {
    int a = k;
    while (a > 0) {
      six += a % 6;
      a /= 6;
      cout << "six: " << six << endl;
    }
    int b = n - k;
    while (b > 0) {
      nine += b % 9;
      b /= 9;
      cout << "nine: " << nine << endl;
    }
    ans = min(ans, nine + six);
    cout << ans << endl;
    nine = 0;
    six = 0;
  }
  cout << ans << endl;
  return 0;
}
