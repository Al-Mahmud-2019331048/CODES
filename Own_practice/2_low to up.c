#include<stdio.h>

char low_to_upper(char c1)
{
    char c2;
    if(c1>='a' && c1<='z'){
        c2='A'+c1-'a';
    }
    else{
        c2=c1;
    }

    return c2;
}

int main()
{
    char lower,upper;
    printf("please enter a char:");
    scanf("%c",&lower);
    upper=low_to_upper(lower);
    printf("the uppercase equivalent is %c",upper);
    return 0;
}
