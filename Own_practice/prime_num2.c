#include<stdio.h>

int prime_number(int n)
{
    int i;
    if(n<2){
        return 0;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    while(1){
        printf("Please enter a number(enter 0 to exit):");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        if(1==prime_number(n)){
            printf("%d is a prime number\n",n);
            }
            else if(0==prime_number(n)){
                printf("%d is not a prime number\n",n);
            }
        }
        return 0;
}