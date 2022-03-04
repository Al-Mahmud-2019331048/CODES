#include<stdio.h>
int main()

{
    int n,i,nonzero=0;
          /*non negative n=n*/
    float x,sum=0,avg;
    printf("how many numbers?");
    scanf("%d",&n);
     for(i=1;i<=n;i++){
        printf("x= ");
        scanf("%f",&x);
        if(x<0) continue;
        sum+=x;
       ++ nonzero;
     }
     avg=sum/nonzero;
     printf("average is  %f",avg);
     return 0;
}
