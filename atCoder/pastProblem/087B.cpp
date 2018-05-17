#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, x;
  int ans = 0;
  cin >> a >> b >> c >> x;

  for (int k = 0; k <= a; k++) {
    for (int l = 0; l <= b; l++) {
      int t;
      t = x - (500 * k + 100 * l);
      if (t < 0) continue;
      if (c >= (t / 50)) ans++;
    }
  }

  cout << ans << endl;
}
