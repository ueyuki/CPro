#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (a > d) cout << '0' << endl;
  else if (b < c) cout << '0' << endl;
  else if (a >= c && a <= d && b >= d) cout << d - a << endl;
  else if (b >= c && b <= d && a <= c) cout << b - c << endl;
  else if (a < c && b > d) cout << d - c << endl;
  else if (a > c && b < d) cout << b - a << endl;

  return 0;
}
