#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0;
  int six = 46656, nine = 59049;

  while (n != 0) {
    while (1) {
      if (six <= n) {
        break;
      }
      six /= 6;
    } 
    while (1) {
      if (nine <= n) {
        break;
      }
      nine /= 9;
    } 
    if (n > 11 && n < 15) n -= six;
    else if (nine >= six) n -= nine;
    else n -= six;
    count++;
  }

  cout << count << endl;
}
