# include <stdio.h>
# include <math.h>
int cnt1,cnt2;
void primeFactors(int n)
{
    while (n%2 == 0)
    {
        n = n/2;
        ++cnt1;
    }
    if(cnt1!=0)
    {
        printf("%d^%d",2,cnt1);
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {

        while (n%i == 0)
        {
            n = n/i;
            ++cnt2;
        }
        if(cnt2!=0)
        {
            printf("%d^%d  ",i,cnt2);
            cnt2=0;
        }
    }
    if (n > 2)
        printf ("%d^1", n);
}
int main()
{
    long long int n;
    printf("Enter a number:");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}
