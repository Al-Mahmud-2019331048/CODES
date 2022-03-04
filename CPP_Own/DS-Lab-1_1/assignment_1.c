#include<stdio.h>

int main()
{
    int i,k[6];
    for(i=0;i<6;i++)
        k[i]=2*i;

    i=0;
    for(i=0;i<6;i++)
        i+=k[i];

    printf("%d",i);
    return 0;

}
