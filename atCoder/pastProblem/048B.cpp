#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int a, b, x;
  cin >> a >> b >> x;
  long long int ans = (a == 0 ? (b / x + 1) : (b / x + 1) - ((a - 1) / x + 1));

  cout << ans << endl;
}
