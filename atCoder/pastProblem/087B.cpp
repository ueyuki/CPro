#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, x;
  int s = 0, ans = 0;

  scanf("%d %d %d %d", &a, &b, &c, &x);

  for (int k = 0; k <= a; k++)
  {
    for (int i = 0; i <= b; i++)
    {
      for (int t = 0; t <= c; t++)
      {
        s = k * 500 + i * 100 + t * 50;
        if (s == x)
        {
          ans++;
        }
      }
    }
  }

  printf("%d\n", ans);
  return 0;
}
