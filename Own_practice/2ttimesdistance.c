#include<stdio.h>
int main()
{
 float v,t,s;
 int i,n;
 printf("How many times?");
 scanf("%d",&n);

 for(i=1;i<=n;i++){
    printf("enter the valocity and time:");
    scanf("%f\n %f\n",&v,&t);

    s=2*v*t;

    printf("%.2f\n",s);
 }

 return 0;

}
