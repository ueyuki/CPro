#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > d) cout << '0' << endl;
  if (b < c) cout << '0' << endl;
  if (a >= c && a <= d) cout << d - a << endl;
  if (b >= c && b <= d) cout << b - c << endl;
  if (a < c && b > d) cout << d - c << endl;
  if (a > c && b < d) cout << b - a << endl;

  return 0;
}
