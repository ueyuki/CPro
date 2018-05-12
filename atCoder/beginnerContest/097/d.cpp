#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  vector<int> p;
  int pair[m][m];

  cin >> n >> m;
  
  for (int k = 0; k < n; k++) {
    int t;
    cin >> t;
    p.push_back(t);
  }
  for (int k = 0; k < m; k++) {
    for (int l = 0; l < m; l++) {
      cin >> pair[k][l];
    }
  } 
}
