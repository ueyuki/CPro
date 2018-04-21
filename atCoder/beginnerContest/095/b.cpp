#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  scanf("%d %d", &N, &X);
  int ans = N, min = 1001, usePow = 0;

  for (int k = 0; k < N; k++) {
    int t;
    scanf("%d", &t);
    if (min > t) min = t;
    usePow += t;
  }

  ans += (X - usePow) / min;

  printf("%d\n", ans);

  return 0;
}
