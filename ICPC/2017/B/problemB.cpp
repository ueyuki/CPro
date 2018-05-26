#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a;
  cin >> b;

  if (a == b) {
    cout << "IDENTICAL" << endl;
    return 0;
  }
  int k = 0, l = 0;
  while (1) {
    if (a[k] != b[l]) {
      cout << "CLOSE" << endl;
      return 0;
    }
    if (a[k] == '\"') {
      k++;
      while (a[k] != '\"') {
        k++;
      }
    } 
    if (b[l] == '\"') {
      l++;
      while (b[l] != '\"') {
        l++;
      }
    }
    k++;
    l++;
  } 
  cout << "DIFFERENT" << endl;
}
