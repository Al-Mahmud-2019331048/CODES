#include<stdio.h>
#include<math.h>
int main()

{
    int i;
    double sum=0,sumsq=0,sumsqrt=0,n;
    scanf("%lf",&n);
    for(i=1;i<=(int)n;i++)
    {
        sum+=i;
        sumsq+=pow(i,2);
        sumsqrt+=sqrt(i);
    }
    printf("%lf\n%lf\n%lf\n",sum,sumsq,sumsqrt);
    return 0;
}
