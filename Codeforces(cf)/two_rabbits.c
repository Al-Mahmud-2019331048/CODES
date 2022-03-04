#include<stdio.h>
int main()
{
    int a,b,d,x,y,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x,&y,&a,&b);
        d=(y-x)/(a+b);
        if((y-x)%(a+b)==0)
        {printf("%d\n",d);}
        else
        printf("-1\n");
    }
    return 0;
}
