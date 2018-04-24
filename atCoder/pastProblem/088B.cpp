#include <bits/stdc++.h>
using namespace std;

int main() {
  int alice = 0, bob = 0;
  int n;
  vector<int> num;

  scanf("%d", &n);

  for (int k = 0; k < n; k++) {
    int t;
    scanf("%d", &t);
    num.push_back(t);
  }

  sort(num.begin(), num.end(), greater<int>());

  for (int k = 0; k < n; k++) {
    k % 2 == 0 ? alice += num[k] : bob += num[k];
  }
  int ans = alice - bob;
  printf("%d\n", ans);
}
