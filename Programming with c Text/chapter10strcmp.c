#include<stdio.h>
#include<string.h>

int strcompare(char str1[],char str2[])
{
    int i,length,length1,length2;
    length1=strlen(str1);
    length2=strlen(str2);
    length=(length1<length2)? length1: length2;
    for(i=0;i<=length;i++){
        if(str1[i]>str2[i])
         return 1;
        else if(str1[i]<str2[i])
         return -1;
        else
            return 0;
    }
}

main()
{
    int status;
    char str1[100],str2[100];
    printf("enter first string:");
    gets(str1);
    printf("enter second string:");
    gets(str2);
    status=strcompare(str1,str2);
    if(status==1)
        printf("first string is greater than second string");
    else if(status==-1)
        printf("first string is lesser than second string");
    else
        printf("both string are equal");
}
