#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  int k, sum = 0;
  cin >> a >> b >> c;
  cin >> k;

  vector<int> v;
  int max_pos = 0;

  v.push_back(a);
  v.push_back(b);
  v.push_back(c);

  for (int l = 0; l < 3; l++) {
    if (v[max_pos] < v[l]) {
      max_pos = l;
    }
  }


  for (int l = 0; l < k; l++) {
    v[max_pos] *= 2;
  }

  for (int x: v) sum += x;

  cout << sum << endl;
  return 0;
}
