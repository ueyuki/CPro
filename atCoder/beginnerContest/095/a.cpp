#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int ans = 700;
  cin >> S;

  for (int k = 0; k < 3; k++) {
    if (S[k] == 'o') ans += 100;
  }

  printf("%d", ans);
  return 0;
}
