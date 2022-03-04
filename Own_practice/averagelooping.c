#include<stdio.h>
int main()
{
    int i=1,n;
    float x,average,sum=0;
    printf("how many numbers?");
    scanf("%d",&n);

    while(i<=n){
        printf("x=");
        scanf("%f",&x);
        sum+=x;
        i++;
    }

    average=sum/n;
    printf("the average is %.2f",average);


}
