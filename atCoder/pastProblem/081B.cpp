#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> A;
  int N, count = 0;

  scanf("%d", &N);
  for (int k = 0; k < N; k++)
  {
    int num;
    
    scanf("%d", &num);
    A.push_back(num);
  }

  while (1)
  {
    for (int k = 0; k < N; k++)
    {
      if (A[k] % 2 == 0) 
      {
        A[k] /= 2;
      }
      else
      {
        printf("%d\n", count);
        return 0;
      }
    }
    count++;
  }

}
