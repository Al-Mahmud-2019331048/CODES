#include<stdio.h>
#include<string.h>

int main()

{
    char str[100],substr[20];
    int i,j,str_len,substr_len;
    printf("Enter the main text:");
    gets(str);
    printf("Enter the sub string:");
    gets(substr);
    str_len=strlen(str);
    substr_len=strlen(substr);

    for(i=0;i<=str_len-substr_len;i++){
        for(j=0;j<substr_len;j++){
            if(str[i+j]==substr[j])
             continue;
            else
             break;
        if(j==substr_len)
         printf("the substring is present from sybscript %d onwards\n",i);

        }
}
}
