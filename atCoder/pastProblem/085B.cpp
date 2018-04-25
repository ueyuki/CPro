#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  vector<int> d;

  scanf("%d", &n);

  for (int k = 0; k < n; k++) {
    int t;
    scanf("%d", &t);
    if (find(d.begin(), d.end(), t) == d.end()) {
      d.push_back(t);
      ans++;
    }
  }

  printf("%d\n", ans);
}
