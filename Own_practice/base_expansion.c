#include<stdio.h>
int main()
{
    int n,b,i,q,a;
    printf("number,q=");
    scanf("%d",&q);
    printf("base,b=");
    scanf("%d",&b);
    for(i=0;i<5;i++){
        a=q%b;
        n=q/b;
        q=n;
        printf("%d ",a);
        i++;
    }

}
