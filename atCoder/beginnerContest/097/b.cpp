#include <bits/stdc++.h>
using namespace std;

bool exp(int num) {
  int l = 1;
  for (int k = 2; k <= sqrt(num); k++) {
    while (1) {
      l *= k;
      if (l == num) return true;
      if (l > num) break;
    }
    l = 1;
  }
  return false;
}

int main() {
  int x;
  cin >> x;

  for (int k = x; k > 0; k--) {
    if (exp(k)) {
      cout << k << endl;
      return 0;
    }
  }

  cout << 1 << endl;
  return 0;
}
