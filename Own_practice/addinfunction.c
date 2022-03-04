#include<stdio.h>

double add(double num1,double num2)
{
    double sum=num1+num2;
    return sum;
}

main()
{
   double a,b,c;
   scanf("%lf %lf %lf",&a,&b);
   c=add(a,b);
   printf("the sum is: %.2lf",c);

   return 0;
}
