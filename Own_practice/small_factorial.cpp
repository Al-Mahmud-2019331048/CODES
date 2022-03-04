#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact=1;
    if (n==0) return 1;
    else
        for(int i=n;i>0;i--)
    {
        fact*=i;
    }
    return fact;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);

        printf("%d\n", factorial(n));
    }
    return 0;
}
