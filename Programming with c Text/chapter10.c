#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,len1,len2,count=0;
    char str1[100],str2[100],str3[100];
    gets(str1);
    puts(str1);
    gets(str2);
    puts(str2);

    len1=strlen(str1);
    printf("len1=%d\n",len1);
    len2=strlen(str2);
    printf("len2=%d\n",len2);

    for(i=0,j=0;i<len1;i++,j++){
        str3[j]=str1[i];
    }
    for(i=0,j=len1;i<len2;i++,j++){
        str3[j]=str2[i];
    }
 str3[j]='\0';
    printf("%s\n",str3);
//    for(i=0;str[i]!='\0';i++){
//        count++;
//    }
//    len1=count;
//    printf("length1= %d",count);



    return 0;
}
//int strlength (char str[])
//{
//
//    int count=0;
//    while(str[count] !='\0')
//        count++;
//    return count;
//}
//
//
//void strcpoy (char dst[],char src[])
//{
//
//    int i,length;
//    length=strlength(src);
//    for(i=0;i<=length;i++)
//        dst[i]=src[i];
//}
// main()
//{
//    int len1;
//    char str1[100],str2[100];
//    printf("enter one string:");
//    getc(str1);
//    len1=strlength(str1);
//    printf("the length of the string is %d\n",len1);
//    strcopy(str2,str1);
//    printf("the first string is %s and copied string is %s\n",str1,str2);
//}
