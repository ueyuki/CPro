#include <bits/stdc++.h>
using namespace std;

int main() {
  int num;
  cin >> num;
  string wword[num];

  for (int k = 0; k < num; k++) {
    cin >> wword[k];
  }

  for (int k = 0; k < num; k++) {
    for (int l = k+1; l < num; l++) {
      if (wword[k] == wword[l]) {
        cout << "No" << endl;
        return 0;
      } 
    }
  }
  for (int k = 0; k < num-1; k++) {
    if (wword[k].back() != wword[k+1].front()) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
