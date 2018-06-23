#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int s = 0, tmp = n;

  while (tmp > 0) {
    s += tmp % 10;
    tmp /= 10;
  }
  cout << (n % s == 0 ? "Yes" : "No") << endl;
}
