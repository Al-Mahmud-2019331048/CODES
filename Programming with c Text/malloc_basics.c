#include<stdio.h>

int main()
{
    int *p;
    p=(int *)malloc(sizeof(int)*10);
    double *q=(double *)malloc(sizeof(double)*10);
    *(p+1)=6;
    *(p+3)=24;
    *(p+5)=35;
    for(int i=1;i<7;i+=2)
        printf("*(p+%d)=%d\n",i,*(p+i));
    return 0;
}
