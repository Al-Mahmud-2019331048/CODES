#include<iostream>
#include<vector>

using namespace std;

const int N = 40;

inline void sum(int*p, int n, vector<int> v)
{

  int i;

  *p = 0;

  for(i = 0; i < n; ++i)
    *p = *p + v[i];

}

int main()

{

   int i;

   int accum = 0;

   vector<int> v(N);

   for(i = 0; i < N; ++i)

      v[i] = i;

    sum(&accum, N, v);

    printf("sum is %d\n", accum); 

    return 0;

}