#include<stdio.h>

int main()
{
    int a[]={45,32,12,-9,7,5},b;
    int i,*x,*y,*z,n=6;
    x=a+5;
    y=x-3;
    z=&b;
    *z=9;
    x--;
    (*y)++;
    z=x;
    for(i=0;i<n;i++)
        printf("a[%d]= %d ,&->%d%c",i,*(a+i),a+i,":\n"[n==i+1]);
    printf("x = %d :*->%d\n",x,*x);
    printf("y = %d :*->%d\n",y,*y);
    printf("z = %d :*->%d\n",z,*z);
    printf("b = %d :*->%d\n",b,&b);

    return 0;
}
