#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    string a, b;
    cin >> a;
    if (a == ".") break;
    cin >> b;
    int miss = 0;
    bool flag = false;

    if (a == b) {
      cout << "IDENTICAL" << endl;
      continue;
    }

    int k = 0, l = 0;

    while (k < (int)a.size() || l < (int)b.size()) {
      if (a[k] != b[l]) {
        cout << "DIFFERENT" << endl;
        flag = true;
        break;
      }
      if (a[k] == '\"') {
        k++;
        l++;
        int kk = k;
        int ll = l;
        while (1) {
          if (a[k] == '\"' && b[l] == '\"') break;
          if (a[k] != '\"') k++;
          if (b[l] != '\"') l++;
        }
        string aa = a.substr(kk, k - kk);
        string bb = b.substr(ll, l - ll);
        if (aa != bb) miss++;
      }
      k++;
      l++;
    } 
    if (flag == true) continue;
    cout << (miss < 2 ? "CLOSE" : "DIFFERENT") << endl;
  }
}
