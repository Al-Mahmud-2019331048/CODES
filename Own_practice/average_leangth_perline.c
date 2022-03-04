#include<stdio.h>
int sum=0;
int lines=0;

int linecount()
{
    char line[80];
    int count=0;
    while((line[count]=getchar())!='\n')
        count++;
    return count;
}
main()
{
    int n;
    float avg;
    printf("Enter some line below:\n");
    while((n=linecount())>0){
        sum+=n;
        lines++;
    }
    avg=(float)sum/lines;
    printf("\nAverage number of characters per line:%5.6f",avg);
}
