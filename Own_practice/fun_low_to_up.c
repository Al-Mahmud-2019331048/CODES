#include<stdio.h>
char lower_to_upper(char c1)
{
    char c2;
    if(c1>='a' && c1<='z'){
    c2='A'+c1-'a';
    }
    else{
        c2=c1;
    }
    return(c2);
    }

int main()
{
    char lower,upper;
    printf("Enter a lowercase power:");
    scanf("%c",&lower);
    upper=lower_to_upper(lower);
    printf("The equivalent uppercase is %c \n",upper);
}
