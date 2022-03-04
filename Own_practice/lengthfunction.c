#include<stdio.h>

int string_length(char str[])
{
    int i,length=0;

    for(i=0;str[i]!='\0';i++){
        length++;
    }
    return length;
}

int main()
{
    char text[100];
    int length=0;
    scanf("%^[\n]",text);
    length=string_length(text);
    printf("length:%d\n",length);


return 0;
}
