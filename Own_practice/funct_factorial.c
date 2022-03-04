#include<stdio.h>
int factorial(int n)
{
    int i;
    long int val=1;
    if(n>1)
        for(i=2;i<=n;i++){
            val*=i;
        }
    return val;
}
int main()
{
    int n;
    long int fact;
    printf("Enter a value of n:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The factorial of %d is %d\n",n,fact);
}
