#include<stdio.h>
#include<string.h>

int main()
{
    int val;
    char ch1,ch2,ch3;

    ch1='A';
    ch2=ch1+2;
    ch3=ch1+ch2;
    printf("%c %c %c\n",ch1,ch2,ch3);
    printf("%d %d %d\n",ch1,ch2,ch3);

    ch1++;
    ch2--;
    printf("%c  %c\n",ch1,ch2);

    printf("%c\n",9);
    printf("%d\n",'a');

    printf("%c\n",ch1*ch2);
    printf("%d\n",ch1*ch2);

    return 0;
}
