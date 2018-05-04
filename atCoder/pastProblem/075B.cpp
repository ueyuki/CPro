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
      if (s[k][l] == '.') {
        int count = 0;
        for (int m = -1; m < 2; m++) {
          for (int n = -1; n < 2; n++) {
            if (k + m >= 0 && k + m <= h &&
                l + n >= 0 && l + n <= w &&
                s[k + m][l + n] == '#') count++;
            s[k][l] = '0' + count;
          }
        }
      }
      cout << s[k][l];
    }
    cout << endl;
  }


  return 0;
}
