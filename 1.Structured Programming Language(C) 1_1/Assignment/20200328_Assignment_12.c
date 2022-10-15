#include<stdio.h>

int GetPrime(int n)
{
    int i,j,count=0,flag;
    for(i=2;;i++)
    {
        flag=0;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            count++;
        }
        if(count==n)
        {
            printf("%dth Prime Number is: %d\n",n,i);
            break;
        }
    }
}

int lucas(int n)
{
    int a = 0, b = 1, c, i;
    if( n==1)
        printf("%dth Lucas Number is: 2\n",n);
    if(n==2)
        printf("%dth Lucas Number is: 1\n",n);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%dth Lucas Number is: %d\n",n,b);
}

int fib(int n)
{
    int a = 0, b = 1, c, i;
    if( n==1)
        printf("%dth Fibonacci Number is: 0\n",n);
    if(n==2)
        printf("%dth Fibonacci Number is: 1\n",n);
    for (i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%dth Fibonacci Number is: %d\n",n,b);
}

int fact(int n)
{
    if(n==0)
        printf("Factorial of %d is: 1\n",n);
    long long int res=1,i;
    for(i=1; i<=n; i++)
    {
        res*=i;
    }
    printf("Factorial of %d is: %lld\n",n,res);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    GetPrime(n);
    lucas(n);
    fib(n);
    fact(n);
    return 0;
}
