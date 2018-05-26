#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;

  cin >> n >> s;
  int sum;
  string x, y;
  int w = 0, e = 0;

  for (int k = 1; k < (int)s.size(); k++) {
    if (s[k] == 'E') e++;
  }
  int min = e;
  for (int k = 1; k < (int)s.size(); k++) {
    if (s[k-1] == 'W') {
      w++;
    }
    if (s[k] == 'E') {
      e--;
    }
    sum = w + e;
    if (min > sum) min = sum;
  }
  cout << min << endl;
}
