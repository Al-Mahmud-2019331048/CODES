#include<stdio.h>
int main()
{
    int u=3,v;
    int *pu,*pv;
    pu=&u;
    v=*pu;
    pv=&v;
    printf("u= %d: &-> %d \t v= %d : &-> %d\n",u,&u,v,&v);
    printf("pu= %d: *-> %d \t pv= %d : *-> %d",pu,*pu,pv,*pv);
    return 0;
}
