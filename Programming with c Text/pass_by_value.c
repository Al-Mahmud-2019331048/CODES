#include<stdio.h>

int foo(int x)
{
    printf("foo: &x=%d\n",&x);
    x+=10;
    return 2*x;
}
int main()
{
    int x=10,y;
    printf("main: &x=%d\n",&x);
    y=foo(x);
    printf("x=%d ,y=%d\n",x,y);

    return 0;
}
