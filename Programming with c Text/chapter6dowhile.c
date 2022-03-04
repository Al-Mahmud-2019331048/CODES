#include<stdio.h>
int main()
{
//    int i=0;
//    do {
//    printf("%d\n",i++);
//    }
//    while(i<=9);

int i=1,n;
float x,sum=0,avg;
printf("how many numbers:");
scanf("%d",&n);
do{
    printf("x=");
    scanf("%f",&x);
    sum+=x;
    i++;
}
while(i<=n);
avg=sum/n;
printf("avg is  %.2f\n",avg);

    return 0;

}
