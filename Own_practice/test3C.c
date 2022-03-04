#include<stdio.h>
int main()
{
    for(int i=0; i<4; i++)
    {
        int n;
        char c;
        scanf("%d%c", &n, &c);
        char B[]="00000000";
        for(int j = 7; j>=0 && n; j--)
        {
            if(n%2)
               B[j] = '1';
            n/=2;
        }
        printf("%s%c", B, " \n"[i==3]);
    }
    unsigned int mask;
    scanf("%d", &mask);
    unsigned int total = 0;
    if(mask)
        total = ~((1<<(32-mask))-1);
    int ans[4]={0};
    for(int i=0; i<4; i++)
    {
        unsigned int exponent = 1;
        for(int j=0; j<8; j++)
        {
            if(total%2)
                ans[i] += exponent;
            exponent <<=1;
            total = total>>1;
        }
    }
    for(int i=3; i>=0; i--)
        printf("%d%c", ans[i], ".\n"[i==0]);
    return 0;
}
