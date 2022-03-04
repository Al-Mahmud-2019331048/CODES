#include<stdio.h>
#include<math.h>
#define true 1
#define false 0

int main()

{
    int flag=true,count=0;
    float guess,root,test,error;
    printf("initial guess:");
    scanf("%f",guess);
    while(flag){
        count++;
        if(count==50) flag=false;
        test=10.0-3.0*guess*guess;
        if(test>0){
            root=pow(test,0.2);
            printf("interation a number: %2d",count);
            printf(" x=%f",root);
            error=fabs(root-guess);
            if(error>0.00001)guess=root;
            else{
                flag=false;
                printf("root=%f",root);
                printf("no. of iterations = %d",count);
            }
        }
        else{
            flag=false;
            printf("number is out of range-try another initial guess");
        }
    }
    if((count==50) && (error>0.00001))
    printf("convergence not obtained after 50 iterations");
    return 0;

}
