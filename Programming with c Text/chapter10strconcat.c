#include<stdio.h>
#include<string.h>

void leftconcat(char dst[],char src[])
{
    int i,length1,length2;
    length1=strlen(dst);
    length2=strlen(src);
    for(i=length1-1;i>=0;i--)
        dst[length2+i]=dst[i];
    for(i=0;i<length2;i++)
        dst[i]=src[i];

    dst[length1+length2]='\0';
}
void rightconcat(char dst[],char src[])
{
    int i,length1,length2;
    length1=strlen(dst);
    length2=strlen(src);
    for(i=0;i<length2;i++)
        dst[length1+i]=src[i];

    dst[length1+length2]='\0';

}

main()
{
    char str1[100],str2[100];
    int choice;
    printf("enter first string:");
    gets(str1);
    printf("enter second string to concant:");
    gets(str2);
    printf("press 1 for left concatenation, press 2 for right concatanation:");
    scanf("%d",&choice);
    if(choice==1){
        leftconcat(str1,str2);
        printf("the first string after left concatanation becomes: %s",str1);
    }
    else if(choice==2){
        rightconcat(str1,str2);
        printf("the first string after right concatanation becomes: %s",str1);

    }

    else
    printf("INVALID CHOICE");

}
