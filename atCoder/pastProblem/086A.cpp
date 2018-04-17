#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  cout << (a * b % 2 == 0 ? "Even" : "Odd") << endl;

  return 0;
}
