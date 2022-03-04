#include<stdio.h>
#include<string.h>

int main()
{
    char c[10]=" ";
    int s;
    s=strlen(c);
    strcat(c,"MAHMUD");
    s+=strlen(c);
    printf("%d",s);
    return 0;
}
