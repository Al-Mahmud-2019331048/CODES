#include<stdio.h>
void maximum(int x,int y)
{
    int z;
    z=(x>=y)?x:y;
    printf("the maximum value id %d\n",z);
    return;
}

int main()
{
    int a,b,max;
    printf("Enter the value of a & b respectively:");
    scanf("%d %d",&a,&b);
    maximum(a,b);

}

