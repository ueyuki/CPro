#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int ans = 0;

  for (int k = 0; k < (int)s.size(); k++) {
    if (s[k] == '+') ans++;
    else ans--;
  }
  cout << ans << endl;
}
