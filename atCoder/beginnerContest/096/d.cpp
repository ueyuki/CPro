#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
  int n;
  cin >> n;

  for (int k = 11; k <= 55555; k += 10) {
    if (isPrime(k)) {
      cout << k;
      n--;
      if (n == 0) break;
      cout << ' ';
    }
  }
  cout << endl;
  return 0;
}
