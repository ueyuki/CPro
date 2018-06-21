#include <bits/stdc++.h>
using namespace std;

int main() {
  int d, n;
  cin >> d >> n;
  int hundred = 1;
  for (int k = 0; k < d; k++) {
    hundred *= 100;
  }

  int ans = hundred * n;
  cout << (n != 100 ? ans : ans + hundred) << endl;
}
