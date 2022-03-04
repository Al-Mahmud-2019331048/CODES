#include<stdio.h>

int add(int par){
    par+=par;
    return par;
}

int add1(int p1,int p2){
    return p1+p2;
}
int main()
{
    int var=0;
    var=add1(add(2),add(4));
    var=add1(var,var);
    printf("%d",var);
    return 0;
}
