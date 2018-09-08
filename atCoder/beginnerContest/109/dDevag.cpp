#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  int bord[h+1][w+1];

  for (int k = 1; k < h+1; k++) {
    for (int l = 1; l < w+1; l++) {
      cin >> bord[k][l];
    }
  }

  for (int k = 1; k < h+1; k++) {
    for (int l = 1; l < w+1; l++) {
      if (bord[k][l] % 2 != 0) {
        if (l != w) {
          cout << k << ' ' << l << ' ' << k << ' ' << l+1 << endl;
          bord[k][l]--;
          bord[k][l+1]++;
        }
        else {
          if (k != h) {
            cout << k << ' ' << l << ' ' << k+1 << ' ' << l << endl;
            bord[k][l]--;
            bord[k+1][l]++;
          }
          else {
            cout << k << ' ' << l << ' ' << k-1 << ' ' << l << endl;
            bord[k][l]--;
            bord[k-1][l]++;
          }
        }
      }
    }
  }

  for (int k = 1; k < h+1; k++) {
    for (int l = 1; l < w+1; l++) {
      cout << bord[k][l] << ' ';
    }
    cout << endl;
  }
}
