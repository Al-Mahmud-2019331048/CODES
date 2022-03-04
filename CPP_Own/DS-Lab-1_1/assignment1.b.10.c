//Write the output after running the programme below. [Where adress of M[0][0][0] is 60fc38]
#include<stdio.h>

int main()
{
    int u=2,v,u1,u2,x,y;
    int *pu,*pv;
    int M[4][5][10];
    pu=&u;
    v=*pu;
    pv=&v;
    u1=(v+2);
    u2=(*pu+3);
    x=*pu-- + ++u1;
    y=++x+*pv;
    printf("%d %d %d %d %d %d\n",*pu,*pv,u1,u2,x,y);
    printf("%x %x",*((*M)+3),&M[0][0][1],*((*M+3)+4)+10) ;
    return 0;

}
