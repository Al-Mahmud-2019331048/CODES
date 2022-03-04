#include<stdio.h>
int main()
{
    int u=3,v;
    int *pu,*pv,*ab;
    pu=&u;
    v=*pu;
    pv=&v;
    v++;
    pu=&v;
    pu=pv;
    pv=&u;
    (*pv)--;
    ab=pu=&u;
    ++(*ab);
    --(*pu);
    ++(*pv);
    pv=ab=pu;
    pu=&v;
    printf("u= %d: &-> %d \t v= %d : &-> %d\n",u,&u,v,&v);
    printf("pu= %d: *-> %d \t pv= %d : *-> %d",pu,*pu,pv,*pv);
    return 0;
}
