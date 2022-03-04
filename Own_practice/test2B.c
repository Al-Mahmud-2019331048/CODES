#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d", &x);
    n=x;
    int z = 0;
    if(!n)
        z=1;
    else
    {
        while(n)
        {
            if(n%10 == 0)
                z++;
            n/=10;
        }
    }
    int soln = 1;
    while(z--)
        soln *= 2;
    printf("%d\n", x-soln);
    return 0;
}
