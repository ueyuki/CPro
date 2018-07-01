#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int k = n;

  while (1) {
    if (k % 2 == 0 && k % n == 0) {
      cout << k << endl;
      return 0;
    }
    k++;
  }
}
