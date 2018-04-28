#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int pos = 0;

  while (1) {
    if (pos >= (int)s.length()) break;
    printf("%d", pos);
    if ((int)s.find("dreamer", pos) == pos) {
      pos += 7; 
      continue;
    }
    if ((int)s.find("dream", pos) == pos) {
      pos += 5; continue;
    }
    if ((int)s.find("eraser", pos) == pos) { 
      pos += 6; continue;
    }
    if ((int)s.find("erase", pos) == pos) {
      pos += 5; continue;
    }
    break;
  }

  if (pos == (int)s.length()) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
