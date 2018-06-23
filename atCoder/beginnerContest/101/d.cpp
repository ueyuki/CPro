#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int k;
  cin >> k;
  long long int s = 0;
  long long int n = 9;

  while (k > 0) {
    vector<long long int> aans;
    aans.push_back(n);
    long long int tmp = n;
    long long int judge = n;
    while (tmp > 0) {
      s += (tmp % 10);
      tmp /= 10;
    }
    long long int line = n / s;
    while (1) {
      judge -= 1;
      s -= 1;
      if (s == 0) break;
      if ((judge / s) == line) {
        aans.push_back(judge);
      }
      else {
        break;
      }
    }

    sort(aans.begin(), aans.end());
    for (long long int l = 0; l < (long long int)aans.size(); l++) {
      cout << aans[l] << endl;
      k--;
      if (k == 0) return 0;
    }
    n += 10;
    s = 0;
  }
}
