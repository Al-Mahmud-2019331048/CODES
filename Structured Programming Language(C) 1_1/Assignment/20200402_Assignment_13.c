#include <stdio.h>

int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    int ret = fibo(n-1) + fibo(n-2);
    return ret;
}

int main()
{
    int n;
    long long int a,count=0;
    while(~scanf("%d",&n))
    {
        a=fibo(n);
        if(n<=2)
        {
            printf("Number of times function has been called: 1\n");
            continue;
        }
        count=(2*a)-1;
        printf("Number of times function has been called: %lld\n",count);
    }
    return 0;
}
