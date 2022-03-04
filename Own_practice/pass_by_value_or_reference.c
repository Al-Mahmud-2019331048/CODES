#include<stdio.h>

int foo(int x,int z[])
{
    printf("foo->&x=%d\n",&x);
    printf("foo->&z[0]=%d , &z[1]=%d\n",&z[0],&z[1]);
    x+=10;
    z[0]--;
    z[1]++;
    return x*3+(z[0]--*++z[1]);
}
int main()
{
    int x=10,y,z[2]={5,6};
    printf("main->&x=%d\n",&x);
    printf("main->&z[0]=%d , &z[1]=%d\n",&z[0],&z[1]);
    y=foo(x,z);
    printf("x=%d , y=%d\n",x,y);
    printf("z[0]=%d , z[1]=%d\n",z[0],z[1]);
    return 0;
}
