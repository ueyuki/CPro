#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;
  int ans = 0;

  cin >> n >> a >> b;
  for (int k = n; k > 0; k--) {
    int sum = 0, t = k;
    while (t > 0) {
      sum += t % 10;
      t /= 10;
    }
    if (sum >= a && sum <= b) ans += k;
  }

  cout << ans << endl;
}
