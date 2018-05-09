#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long int ans = 1;
  long long int w = 10;
  for (int k = 0; k < 8; k++) w *= 10;
  w += 7;


  for (int k = 1; k <= n; k++) {
    ans *= k;
    ans = ans % w;
  }

  cout << ans << endl;
}
