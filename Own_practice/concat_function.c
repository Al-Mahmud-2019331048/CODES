#include<stdio.h>
#include<string.h>

char concatent(char str1[],char str2[])
{
    char strcon[100];
    int i,j,len1,len2;
    gets(str1);
    len1=strlen(str1);
    gets(str2);
    len2=strlen(str2);
    for(i=0,j=0;i<len1;i++,j++){
        strcon[j]=str1[i];
    }
    for(i=0,j=len1;i<len2;i++,j++){
        strcon[j]=str2[i];
    }
    strcon[j]='\0';
    printf("the concatent string is: %s\n",strcon);
}
int main()
{
    char str1[100],str2[100],strcon[100];
    concatent(str1,str2);


    return 0;

}
