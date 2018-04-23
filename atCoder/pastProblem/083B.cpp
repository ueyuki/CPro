#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b, ans = 0;
  scanf("%d %d %d", &n, &a, &b);

  for (int k = 1; k <= n; k++) {
    string num = to_string(k);
    int sum = 0;
    for (int l = 0; l < num.size(); l++) {
      sum += int(num[l] - '0');
    }
    if (sum >= a && sum <= b) ans += k;
  }

  printf("%d\n", ans);
  return 0;
}
