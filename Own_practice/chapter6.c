#include<stdio.h>
int main()
{
//    char lower,upper;
//    lower=getchar();
//    upper=toupper(lower);
//    putchar(upper);

int i,x;
float sum=0,sumsq=0,sumsqrt=0;
scanf("%d",&x);
for(i=0;i<=x;i++){
    sum=i+sum;
    sumsq=i*i+sumsq;
    sumsqrt=sqrt(i)+sumsqrt;

}
    printf("sum  %lf\n",sum);
    printf("sumsq %lf\n",sumsq);
    printf("sumsqrt  %lf\n",sumsqrt);

    return 0;
}
