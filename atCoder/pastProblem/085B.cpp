#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  vector<int> d;

  cin >> n;
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    d.push_back(t);
  }

  sort(d.begin(), d.end());
  d.erase(unique(d.begin(), d.end()), d.end());
  cout << d.size() << endl;
}
