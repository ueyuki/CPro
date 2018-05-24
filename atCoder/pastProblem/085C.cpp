#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum;
  int x = 0, y = 0, z = 0;

  cin >> x >> y >> z;

  for (x = 0; x <= sum / 10000; x++) {
    for (y = 0; y <= (sum - (10000 * x)) / 5000; y++) {
      z = (sum - (10000 * x + 5000 * y)) / 1000;
      if ((x + y + z) == n) {
        cout << x << y << z;
        return 0;
      } 
    }
  }

  printf("-1 -1 -1\n");
  return 0;

}
