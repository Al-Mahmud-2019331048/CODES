#include<stdio.h>
#include<string.h>
int main()

{
    char str[100];
    int i=0;
    while(str[i-1]!='\n'){
    scanf("%c",&str[i]);
    i++;
    }
//    str[i]='\0';
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

return 0;
}
