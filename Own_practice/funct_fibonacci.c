#include<stdio.h>
int fibo(int n)
{
    int a=0,b=1,c,i;
    for(i=1;i<n;i++){
        c=a+b;
//                f(n)=f(n-2)+f(n-1)
        a=b;
        b=c;
    }
    if(n==0) return 0;
    if(n==1) return 1;
    else return c;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
        printf("Fibonacci(%d)=%d\n",n,fibo(n));
}
