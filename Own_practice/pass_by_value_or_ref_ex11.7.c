#include<stdio.h>
void funct1(int u,int v);
void funct2(int *pu,int *pv);

void main()
{
    int u=1,v=3;
    printf("Before calling funct1: u=%d  v=%d\n",u,v);
    funct1(u,v);
    printf("After calling funct1: u=%d  v=%d\n",u,v);
    printf("Before calling funct2: u=%d  v=%d\n",u,v);
    funct2(&u,&v);
    printf("After calling funct2: u=%d  v=%d\n",u,v);
}
void funct1(int u,int v)
{
    u=0;v=0;
    printf("Within funct1: u=%d  v=%d\n",u,v);
    return;
}
void funct2(int *pu,int *pv)
{
    *pu=0;*pv=0;
    printf("Within funct2: *pu=%d  *pv=%d\n",*pu,*pv);
    return;
}
