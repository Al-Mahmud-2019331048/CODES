#include<stdio.h>
int gcd(int a,int b)
{
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
main()
{
    int x,y;
    printf("Enter the value of x & y respectively:");
    while(~scanf("%d %d",&x,&y))
    printf("gcd(%d,%d)=%d\n",x,y,gcd(x,y));
}
