#include<stdio.h>
/** 0    1    2     3   4   5
a->|45  |32  |12+1 |-9 | 7 | 5 |
x->&a[0+5]=&a[5]  ,y->&a[5-3]=&a[2] ,z-> &b  ,b=9
    =&a[5-1]=&a[4]                   z->&a[4]
*/
int main()
{
    int a[]={45,32,12,-9,7,5},b,i,n=6;
    int *x,*y,*z;
    x=a+5;
    y=x-3;
    z=&b;
    *z=9;
    x--;
    (*y)++;
    z=x;
    for(i=0;i<n;i++)
        printf("a[%d]=%d , &->%d%c",i,*(a+i),a+i,":\n"[n==i+1]);
    printf("x=%d , *x=%d\n",x,*x);
    printf("y=%d , *y=%d\n",y,*y);
    printf("z=%d , *z=%d\n",z,*z);
    printf("b=%d , *b=%d\n",b,&b);

    return 0;
}
