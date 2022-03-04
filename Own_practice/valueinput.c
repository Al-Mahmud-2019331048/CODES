#include<stdio.h>
int main()
{

//    double x=10.5;
//    n=(int)x;
//    n=200;
//    printf("n=%d\n",n);
//    n=-7863;
//    printf("n=%d\n",n);
//    n=65678656;
//    printf("n=%d\n",n);
//    n=879677676576676;
//    printf("n=%d",n);



//    double a=9.5637, b=8.8736,sum;
//    sum=a+b;
//    printf("sum=%f",sum);



//int a , b,sum;
//printf("a=");
//scanf("%d",&a);
//printf("b=");
//scanf("%d",&b);
//sum=a+b;
//printf("%d+%d=%d",a,b,sum);


//char ch;
//printf("first letter:");
//scanf("%c",&ch);
//printf("first letter:%c",ch);

//printf("enter a letter:");
//ch=getchar();
//printf("the letter:%c",ch);


//int num1,num2;
//printf("num1:");
//scanf("%d",&num1);
//printf("num2:");
//scanf("%d",&num2);
//printf("%d+%d=%d\n",num1,num2,num1+num2);
//printf("%d-%d=%d\n",num1,num2,num1-num2);
//printf("%d*%d=%d\n",num1,num2,num1*num2);
//printf("%d/%d=%d\n",num1,num2,num1/num2);
//


int num1,num2,value;
char sign;
printf("num1:");
scanf("%d",&num1);
printf("num2:");
scanf("%d",&num2);
value=num1+num2;
sign='+';
printf("%d %c %d = %d\n",num1,sign,num2,value);
value=num1-num2;
sign='-';
printf("%d %c %d = %d\n",num1,sign,num2,value);
value=num1*num2;
sign='*';
printf("%d %c %d = %d\n",num1,sign,num2,value);
value=num1/num2;
sign='/';
printf("%d %c %d = %d",num1,sign,num2,value);



    return 0;
}
