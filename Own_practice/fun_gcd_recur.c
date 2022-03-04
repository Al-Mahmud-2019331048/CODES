#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    return gcd(b%a,a);
}
int main()
{
    int a,b;
//    while(~scanf("%d  %d",&a,&b))
    while(1){
        scanf("%d  %d",&a,&b);
        printf("gcd(%d , %d)=%d\n",a,b,gcd(a,b));
    }
    return 0;
}
