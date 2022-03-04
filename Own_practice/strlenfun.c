#include<stdio.h>
#include<string.h>
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
//    while(scanf("%s",text)==1){
//        length=string_length(text);
//        printf("length: %d\n",length);
//scanf("%^[\n]",text);
gets(text);
length=string_length(text);
printf("%d",length);
//    }

    return 0;
}
