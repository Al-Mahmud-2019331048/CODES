#include<stdio.h>
int main()
{
    int number,remainder;
    printf( "enter a number:",number);
    scanf("%c", &number);
    remainder=number%2;
    if(remainder==0)
        { printf("even\n");}
        else {
        printf("odd");}
        }
