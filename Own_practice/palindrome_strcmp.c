#include<stdio.h>
#include<string.h>
int main()
{
    char word[100],reverse_word[100];
    int i,j,len;
    printf("Enter a word:");
    scanf("%s",word);
    len=strlen(word);

    for(i=0,j=len-1;i<len;i++,j--){
        reverse_word[i]=word[j];
    }
    reverse_word[i]='\0';

    printf("reverse wors is:\n%s\n",reverse_word);

    if(0==strcmp(word,reverse_word)){
        printf("%s is palindrome\n",word);
    }
    else{
        printf("%s is not palindrome\n",word);
    }
    return 0;
}
