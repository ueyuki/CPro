#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int x, y, z;
  x = a + b;
  y = a - b;
  z = a * b;
  int max = x;
  if (max < y) max = y;
  if (max < z) max = z;

  cout << max << endl;
}
