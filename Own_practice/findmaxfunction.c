#include<stdio.h>

int maximun(int x, int y)
{
   int z;
   z=(x>=y)?x:y;
   printf("\n maximum value: %d",z);
   return z;
}

int main()
{
    int a,b,max;
    scanf("%d  %d",&a,&b);
    max=maximum(a,b);
    printf("maximum value  %d",max);
    return 0;
}
