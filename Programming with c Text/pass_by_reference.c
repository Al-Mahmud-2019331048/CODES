#include<stdio.h>

int foo(int *x,int z[])
{
    printf("foo: &x=%d\n",&x);
    printf("foo: &z[0]=%d , z[1]=%d\n",&z[0],&z[1]);
    *x+=10;
    z[0]--;
    z[1]++;
    return 3*(*x)+(z[0]--*++z[1]);
}
int main()
{
    int x=10,y,z[2]={4,3};
    printf("main: &x=%d\n",&x);
    printf("main: &z[0]=%d , z[1]=%d\n",&z[0],&z[1]);
    y=foo(&x,z);
      //&x dewar karon e pass by reference hbe!
      //so,adress pass hbe
    printf("x=%d ,y=%d\n",x,y);
    printf("z[0]=%d ,z[1]=%d\n",z[0],z[1]);

    return 0;
}
