#include<stdio.h>

int maximum(int x,int y,int z)
{
    int a,max;
    a=(x>=y)? x:y;
    max=(a>=z)? a:z;
    return max;
}

int main()
{
    int a,b,c,d;
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    d=maximum(a,b,c);
    printf("Maximum value is %d\n",d);
}
