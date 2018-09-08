#include <bits/stdc++.h>
using namespace std;

int abs(int num) {
  if (num < 0) return -num;
  else return num;
}

int main() {
  int n, start;
  cin >> n >> start;
  int xx[n];
  int distance[n];

  for (int k = 0; k < n; k++) {
    cin >> xx[k];
    distance[k] = abs(start - xx[k]);
  }
  sort(xx, xx + n);
  sort(distance, distance + n);

  int ans = distance[0];
  int rep = 2;
  for (int k = 1; k < n; k++) {
    if (abs(start - xx[k]) % ans != 0) {
      ans = abs(start - xx[0]);
      ans /= rep;
      rep++;
      k = 0;
    } 
  }
  cout << ans << endl;
}
