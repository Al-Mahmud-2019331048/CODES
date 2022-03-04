#include<stdio.h>
int main()
{
    int n,i,leader=0;
    scanf("%d",&n);
    for (i=1; i<=n/2 ; i++)
    {
        if (n%i==0)
         leader++;
    }
    printf("%d\n",leader);
    return 0;
}
