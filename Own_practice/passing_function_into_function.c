#include<stdio.h>
int do_op(int (*)(int,int),int,int);
int add(int,int);
int sub(int,int);

int main()
{
    int a=20,b=10,c;
    c=do_op(sub,a,b);
    printf("c after calling sub: %d\n",c);
    c=do_op(add,a,b);
    printf("c after calling add: %d\n",c);
    return 0;
}
int do_op(int (*pf)(int,int),int p,int q)
{
    int c=(*pf)(p,q);
    return c+(*pf)(p,q);
}
int sub(int a,int b)
{
    return a-b;
}
int add(int a,int b)
{
    return a+b;
}
