#include<stdio.h>
int main()
{
    int n,count=1;
    float x,avarage=0,sum=0;
    printf("how many numbers?");
    scanf("%d",&n);
    while(count<=n){
        printf("x=");
        scanf("%f",&x);
        sum=sum+x;
        ++count;
        }
        avarage=sum/n;
        printf("avg %.2f",avarage);
}
