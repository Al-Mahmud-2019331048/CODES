#include<stdio.h>

int maximum(int x,int y)
{
    int z;
    z=(x>=y)? x:y;

    return z;
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
    d=maximum(a,b);

    printf("Maximum value is %d\n",maximum(c,d));

//    printf("Maximum value is %d\n",maximum(c,maximum(a,b)));
////    int one line
}
