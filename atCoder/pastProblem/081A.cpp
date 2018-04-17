#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  int count;
  cin >> s;

  for (int k; k < s.size(); k++)
  {
    if (s[k] == '1') count++; 
  }
  printf("%d\n", count);
  return 0;
}
