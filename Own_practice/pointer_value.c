#include<stdio.h>
int main()
{
    int u,v,*pu,*pv,*ab;
    u=3;
    pu=&u;
    v=*pu;
    pv=&v;
    v++;
    pu=&v;
    pu=pv;
    pv=&u;
    (*pv)--;
    ab=pu=&u;
    ++(*ab);--(*pu);++(*pv);
    pv=ab=pu;
    pu=&v;
    pv=pu;pu=ab;
    ab=&u;
    pu=&v;
    pv=&u;
    printf(" u=%d , &u=%d , v=%d , &v=%d\n",u,&u,v,&v);
    printf(" *pu=%d , pu=%d , *pv=%d , pv=%d\n",*pu,pu,*pv,pv);
    return 0;
}
