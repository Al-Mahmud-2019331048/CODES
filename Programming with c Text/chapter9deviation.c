#include<stdio.h>
//int main()

//{
//    int n,i;
//    float x,avg,dev,sum=0;
//    float list[100];
//
//    printf("how many number will be averaged?\n");
//    scanf("%d",&n);
//
//    for(i=0;i<n;i++){
//        printf("i=%d  x=",i+1);
//        scanf("%f",&list[i]);
//        sum+=list[i];
//    }
//    avg=sum/n;
//
//    printf("the average is:%f\n",avg);
//    for(i=0;i<n;i++){
//        dev=list[i]-avg;
//        printf("i=%d  x=%f  deviation=%5.2f\n",i+1,list[i],dev);
//    }
//    return 0;
//}

int n=5;
float list[]={3,-2,12,4.4,3.5};
int main()

{
    int i;
    float avg,dev,sum=0;
    for(i=0;i<n;i++){
        sum+=list[i];
    }
    avg=sum/n;
    printf("average is %4.2f\n",avg);

    for(i=0;i<n;i++){
        dev=list[i]-avg;
        printf("i=%3d  x=%6.2f  deviation=%6.2f\n",i+1,list[i],dev);
    }

    return 0;

}
