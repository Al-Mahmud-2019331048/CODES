#include<stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("n=");
    while(~scanf("%d",&n))
    printf("\nn!=%ld\n",factorial(n));

}
long int factorial(int n)
{
    int i;
    long int fact=1;
    if(n>1)
        for(i=2;i<=n;i++){
            fact*=i;
        }
    return fact;
}
