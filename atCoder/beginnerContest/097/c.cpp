#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int pos;
  cin >> s;
  cin >> pos;

  vector<string> t;

  for (int k = 0; k < (int)s.size(); k++) {
    for (int l = 0; l < 5; l++) {
      t.push_back(s.substr(k, l+1));
    }
  }
  sort(t.begin(), t.end());
  unique(t.begin(), t.end());
  cout << t[pos-1] << endl;
}
