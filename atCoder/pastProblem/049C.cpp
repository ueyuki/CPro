#include <bits/stdc++.h>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string s;
  cin >> s;
  int pos = 0;

  reverse(s.begin(), s.end());
  for (int k = 0; k < 4; k++) reverse(divide[k].begin(), divide[k].end());

  while (pos < (int)s.length()) {
    bool flag = false;
    for (int k = 0; k < 4; k++) {
      string d = divide[k];
      if ((int)s.find(d, pos) == pos) {
        pos += d.length();
        flag = true;
      }
    }
    if (flag != true) break;
  }

  if (pos == (int)s.length()) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
