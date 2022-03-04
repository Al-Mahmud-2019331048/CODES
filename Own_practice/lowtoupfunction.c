#include<stdio.h>
char lower_to_upper(char c1)
{
    char c2;
    c2=(c1>='a' && c1<='z')?('A'+c1-'a'):c1;
    return c2;
}

int main()
{
 char lower ,upper;
 printf("Enter a lowercase character:");
 scanf("%c",&lower);
 upper=lower_to_upper(lower);
 printf("\n The uppercase character is:%c",upper);
 return 0;
}
