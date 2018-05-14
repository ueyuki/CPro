#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int pos;
  cin >> s >> pos;

  vector<string> t;

  for (int k = 0; k < (int)s.size(); k++) {
    for (int l = 1; l <= 5; l++) {
      t.push_back(s.substr(k, l));
    }
  }
  sort(t.begin(), t.end());
  unique(t.begin(), t.end());
  cout << t[pos-1] << endl;
}
