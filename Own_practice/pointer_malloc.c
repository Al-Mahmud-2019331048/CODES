#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,i;
    p=(int *)malloc(sizeof(int)*10);
    *(p+5)=7;
    *(p+1)=72;
    *(p+3)=75;
    for(i=1;i<7;i+=2)
        printf("*(p+%d)=%d\n",i,*(p+i));

    return 0;
}
