#include<stdio.h>
int main()
{int x,y;
printf("enter two number: ");
scanf("%d %d",&x,&y);
if(x>=0 && y>=0){
    printf("Q1"); }
    else if(x<=0 && y>=0){
        printf("Q2");
    }
    else if(x<=0 && y<=0){
        printf("Q3");
    }
    else if(x>=0 && y<=0) {
        printf("Q4");
    }
return 0;
}
