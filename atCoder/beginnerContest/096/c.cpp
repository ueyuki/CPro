#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  string s[h];

  for (int k = 0; k < h; k++) {
    cin >> s[k];
  }

  for (int k = 0; k < h; k++) {
    for (int l = 0; l < w; l++) {
      if (s[k][l] == '#') {
        bool flag = false;
        if (k - 1 >= 0 && s[k-1][l] == '#') flag = true;
        if (l - 1 >= 0 && s[k][l-1] == '#') flag = true;
        if (l + 1 <= w && s[k][l+1] == '#') flag = true;
        if (k + 1 <= h && s[k+1][l] == '#') flag = true;
        if (flag == false) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
