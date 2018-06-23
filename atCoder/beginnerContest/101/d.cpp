#include <bits/stdc++.h>
using namespace std;

long long f(long long n) {
  long long res = 0;
  while (n > 0) {
    res += n % 10;
    n /= 10;
  }
  return res;
}

double g(long long n) {
  return (double)(n)/f(n);
}

int main() {
  vector<long long> res;
  long long base = 1;

  // まずは候補を (1〜150)99999 的なやつを全列挙
  for (int k = 0; k < 15; k++) {
    for (int l = 1; l < 150; l++) {
      res.push_back(base * (l + 1) - 1);
    }
    base *= 10;
  }
  sort(res.begin(), res.end());
  res.erase(unique(res.begin(), res.end()), res.end());

  // ダメなやつを除く
  for (long long k = 0; k < res.size(); k++) {
    for (long long l = k + 1; l < res.size(); l++) {
      if (g(res[k]) > g(res[l])) {
        res.erase(res.begin() + k--);
        break;
      }
    }
  }

  long long num;
  cin >> num;
  for (long long k = 0; k < num; k++) {
    cout << res[k] << endl;
  }
}
