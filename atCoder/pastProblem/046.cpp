#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  int ans = k;

  for (int m = 0; m < (n - 1); m++) {
    ans *= (k - 1);
  }

  cout << ans << endl;
}
