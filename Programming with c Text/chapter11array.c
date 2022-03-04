#include<stdio.h>
#include<string.h>
#define maxsize 50

int main()
{
    char str[maxsize];
    printf("enter a string of maximum %d character:",maxsize-1);
    scanf("%[^\n]",str);
    printf("the string is: %s\n",str);

    return 0;
}
