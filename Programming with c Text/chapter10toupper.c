#include<stdio.h>
#include<string.h>

int main()

{
    char text[100];
    int i,length=0;
    printf("enter a text:");
    scanf("%[^\n]",text);
    length=strlen(text);

    for(i=0;i<length;i++){
        if(text[i]>='a' && text[i]<='z'){
         text[i]=text[i]+'A'-'a';
        }

    }
printf("the text after converting lowercse to uppercse is:  %s",text);
return 0;
}
