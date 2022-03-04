#include<stdio.h>
int main()
{
    int i;
    char line[100];
    printf("enter a line of text:");
    scanf("%[^\n]",line);

    for(i=0;line[i]!='\0';i++){
    if((line[i]>='0' && line[i]<'9') || (line[i]>='a' && line[i]<'z') || (line[i]>='A' && line[i]<'Z'))
    putchar(line[i]+1);
    else if(line[i]=='9')
    putchar('0');
    else if(line[i]=='a')
    putchar('z');
    else if(line[i]=='Z')
    putchar('A');
    else
    putchar('.');
    }

    return 0;
}
