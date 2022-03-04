#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    int i,len,flag=1;
    printf("Enter a word:");
    scanf("%s",word);
    len=strlen(word);

    for(i=0;i<len;i++){
        if(word[i]!=word[len-1-i]){
            flag=0;
            }
        }
        if(flag){
            printf("%s is palindrome",word);
        }
        else{
            printf("%s is not palindrome",word);
        }

        return 0;
}
