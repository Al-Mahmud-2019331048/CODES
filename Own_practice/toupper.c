#include<stdio.h>
main()

{
    int n,i;
    char lower,upper;
    for(i=1;i!='z';i++)
    {
    lower=getchar();
    upper=toupper(lower);
    putchar(upper);
    }
}
