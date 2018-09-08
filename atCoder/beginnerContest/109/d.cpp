#include <bits/stdc++.h>
using namespace std;

long long int bord[502][502];
long long int ans[100000][4];

int main() {
  long long int h, w;
  cin >> h >> w;

  for (long long int k = 1; k < h+1; k++) {
    for (long long int l = 1; l < w+1; l++) {
      cin >> bord[k][l];
    }
  }

  long long int count = 0;
  for (long long int k = 1; k < h+1; k++) {
    for (long long int l = 1; l < w+1; l++) {
      if (bord[k][l] % 2 != 0) {
        if (l != w) {
          ans[count][0] = k;
          ans[count][1] = l;
          ans[count][2] = k;
          ans[count][3] = l+1;
          bord[k][l]--;
          bord[k][l+1]++;
          count++;
        }
        else {
          if (h >= 2) {
            if (k != h) {
              ans[count][0] = k;
              ans[count][1] = l;
              ans[count][2] = k+1;
              ans[count][3] = l;
              bord[k][l]--;
              bord[k+1][l]++;
              count++;
            }
            else {
              ans[count][0] = k;
              ans[count][1] = l;
              ans[count][2] = k-1;
              ans[count][3] = l;
              bord[k][l]--;
              bord[k-1][l]++;
              count++;
            }
          }
        }
      }
    }
  }

  cout << count << endl;
  for (long long int k = 0; k < count; k++) {
    for (long long int l = 0; l < 4; l++) { 
      cout << ans[k][l];
      if (l != 3) cout << ' ';
    }
    cout << endl;
  } 
  return 0;
}
