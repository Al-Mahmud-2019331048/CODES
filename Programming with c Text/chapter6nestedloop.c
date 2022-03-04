#include<stdio.h>
int main()
{
    int count,loop,loopcount,n;
    float x,avg,sum;

    printf("how many lists?");
    scanf("%d",&loop);

    for(loopcount=1;loopcount<=loop;loopcount++){

    sum=0;
    printf("list number %d\n how many numbers? ",loopcount);
    scanf("%d",&n);

    for(count=1;count<=n;count++){
    scanf("%f",&x);
    sum+=x;
    }
    avg=sum/n;
    printf("the avg is %f\n",avg);

    printf("x=");
    }
return 0;
}
