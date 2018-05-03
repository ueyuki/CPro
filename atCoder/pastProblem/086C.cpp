#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> tt, xx, yy;
  tt.push_back(0);
  xx.push_back(0);
  yy.push_back(0);

  for (int k = 0; k < n; k++) {
    int t, x, y;
    scanf("%d %d %d", &t, &x, &y);
    tt.push_back(t);
    xx.push_back(x);
    yy.push_back(y);
    t = tt[k+1] - tt[k];
    x = xx[k+1] - xx[k];
    y = yy[k+1] - yy[k];
    if (t < x + y || (t - (x + y)) % 2 == 1) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
