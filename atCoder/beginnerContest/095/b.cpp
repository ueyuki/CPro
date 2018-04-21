#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  scanf("%d %d", &N, &X);
  vector<int> m;
  int ans = N, min, usePow = 0;

  for (int k = 0; k < N; k++) {
    int t;
    scanf("%d", &t);
    m.push_back(t);
    usePow += t;
  }

  min = m[0];

  for (int k = 1; k < m.size(); k++) {
    if (min > m[k]) min = m[k];
  }

  while (1) {
    usePow += min;
    if (usePow < X) ans++;
    else break;
  }

  printf("%d %d\n", ans, usePow);

  return 0;
}
