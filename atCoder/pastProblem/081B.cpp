#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int ans = 0;
  vector<int> a;

  cin >> n;
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    a.push_back(t);
  }


  while (1) {
    for (int k = 0; k < n; k++) {
      if (a[k] % 2 == 1) {
        cout << ans << endl;
        return 0;
      }
      a[k] /= 2;
    }
    ans++;
  }
}
