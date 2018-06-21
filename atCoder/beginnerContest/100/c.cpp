#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, count = 0;
  cin >> n;

  for (int k = 0; k < n; k++) {
    cin >> t;
    while (t % 2 == 0 && t > 0) {
      count++;
      t /= 2;
    } 
  }
  cout << count << endl;
}
