#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  string t1, t2;

  for (int k = 0; k < (int)s.size(); k++) {
    if (s == t) {
      cout << "Yes" << endl;
      return 0;
    }
    t1 = s[(int)s.size() - 1];
    t2 = s.substr(0, (int)s.size() - 1);
    s = t1 + t2;
  }
  cout << "No" << endl;
}
