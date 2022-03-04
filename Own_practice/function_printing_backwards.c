#include<stdio.h>
#define ELON '\n'
void reverse()
{
    char c;
    if((c=getchar())!= ELON)
        reverse();
    putchar(c);
    return;
}
main()
{
    printf("Enter a line:\n");
    reverse();

}
