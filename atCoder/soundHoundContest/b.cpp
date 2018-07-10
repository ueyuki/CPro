#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int w;
  cin >> s;
  cin >> w;

  vector<char> ans;

  for (int k = 0; k < (int)s.size(); k += w) {
    cout << s[k];
  }
  cout << endl;
}
