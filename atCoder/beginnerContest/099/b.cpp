#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int west = 0, east = 0,ans;

  int k = 0;
  while (1) {
    k++;
    west += k;
    east = west + (k + 1);
    if ((west - a) == (east - b)) break;
  }

  cout << (west - a) << endl;
}
