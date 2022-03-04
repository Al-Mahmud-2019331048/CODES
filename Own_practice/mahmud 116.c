#include<stdio.h>
#include<math.h>
int main()
{
    int num1, num2;
    printf("enter a number");
    scanf("%d\n",&num1);
    printf("enter anothet number");
    scanf("%d",&num2);
    printf("%d+%d=%d\n", num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);
    return 0;
    }
