#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int aa[n];
  int max = 0;

  for (int k = 0; k < n; k++) cin >> aa[k];
 
  for (int k = 0; k < n; k++) {
    for (int l = k; l < n; l++) {
      int diff = (aa[k] > aa[l] ? aa[k] - aa[l] : aa[l] - aa[k]);
      if (max < diff) max = diff;
    }
  }

  cout << max << endl;
}
