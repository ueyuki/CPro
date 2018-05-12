#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (abs(c - a)<= d) {
    cout << "Yes" << endl;
    return 0;
  }
  if (abs(b - a) <= d && abs(c - b) <= d) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
  return 0;
}
