#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> aa;
  int count = 0;

  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    aa.push_back(t);
    while (t % 2 == 0 && t > 0) {
      count++;
      t /= 2;
    } 
  }
  cout << count << endl;
}
