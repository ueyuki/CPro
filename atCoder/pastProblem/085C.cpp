#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, y, sum;
  int l = 0, m = 0, o = 0;

  scanf("%d %d", &n, &y);

  for (l = 0; l <= y / 10000; l++) {
    for (m = 0; m <= (y - (10000 * l)) / 5000; m++) {
      for (o = 0; o <= (y - (10000 * l + 5000 * m)) / 1000; o++) {
        sum = (10000 * l) + (5000 * m) + (1000 * o);
        if (sum == y && (l + m + o) == n) {
          printf("%d %d %d\n", l, m, o);
          return 0;
        }       
      }
    }
  }

  printf("-1 -1 -1\n");
  return 0;

}
