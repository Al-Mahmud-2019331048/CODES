#include<stdio.h>
int main()

{
    int n=10,i,j,sum=0;
    for(j=1;j<=500;j++){
        for(i=1;i<=20;i++){
//                sum+=i;
            printf("%d * %d = %d\n",j,i,i*j);
        }
        printf("----------------------\n");
    }
    return 0;
}
