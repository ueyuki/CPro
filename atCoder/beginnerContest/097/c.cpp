#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int pos;
  cin >> s >> pos;

  vector<string> a;

  for (int k = 0; k < (int)s.size(); k++) {
    for (int l = 1; l <= 5; l++) {
      a.push_back(s.substr(k, l));
    }
  }
  sort(a.begin(), a.end());
  unique(a.begin(), a.end());

  cout << a[pos-1] << endl;

  return 0;
}
