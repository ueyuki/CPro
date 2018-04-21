#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, ans = 0;
  double x, y;
  cin >> a >> b >> c >> x >> y;

  if ((a / 2 + b / 2) > c) {
    if (a > (c * 2) && b > (c * 2)) {
      while (1) {
        if (x <= 0 && y <= 0) break;
        x -= 0.5;
        y -= 0.5;
        ans += c;
      }
    }
    else if (a > (c * 2)) {
      while (1) {
        if (x <= 0) break;
        x -= 0.5;
        y -= 0.5;
        ans += c;
      }
    }
    else if (b > (c * 2)) {
      while (1) {
        if (y <= 0) break;
        x -= 0.5;
        y -= 0.5;
        ans += c;
      }
    }
    else {
      while (1) {
        if (x <= 0 || y <= 0) break;
        x -= 0.5;
        y -= 0.5;
        ans += c;
      }
    }
  }

  while (1) {
    if (x <= 0) break;
    x -= 1;
    ans += a;
  }

  while (1) {
    if (y <= 0) break;
    y -= 1;
    ans += b;
  }

  printf("%d\n", ans);

  return 0;
}
