#include<stdio.h>
int cube(int x)
{
    int y=x;
    y*=x*x;
//    printf("cube of x %d\n",&x);
//        showing memory adress
    return y;
}
int printcube(int x)
{
    printf("x^3=%d\n",x*x*x);
}
int powint(int x,int y)
{
    int par=1,i;
    for(i=0;i<y;i++){
        par*=x;
    }
return par;
}
int main()
{   int x;
    printcube(3);
    printcube(3*2+4);
    x=cube(5+2)+powint(5,2+2);
    printf("%d\n",x);
}
