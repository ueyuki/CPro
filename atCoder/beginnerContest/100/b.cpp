#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int d, n;
  cin >> d >> n;
  long long int handred = 1;
  for (int k = 0; k < d; k++) {
    handred *= 100;
  }
  long long int ans = handred * n;
  if (n == 100 && d == 0) cout << ans + 1 << endl;
  else if (n == 100 && d == 1) cout << ans + 100 << endl;
  else if (n == 100 && d == 2) cout << ans + 10000 << endl;
  else cout << ans << endl;
}
