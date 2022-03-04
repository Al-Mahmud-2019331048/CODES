#include<stdio.h>
int linecount(void)
{
    char line[100];
    int count=0;
    while((line[count]=getchar())!='\n')
        count++;
    return(count);
}
int main()
{
    int n,count=0,sum=0;
    float avg;
    printf("Enter text below:\n");
    while((n=linecount())>0){
        sum+=n;
        count++;
    }
    avg=sum/count;
    printf("\nAverage number of character per line is: %4.2f",avg);
}
