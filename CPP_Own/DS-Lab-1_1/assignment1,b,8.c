Write  the output of the programme when you run the programme.

#include<stdio.h>
#include<string.h>

int main()
{
    int len;
    char str1[100]="Wow cse wow",str[100]="Abdulla",str2[100]="C programming",str3[100]="Mahmud",str4[100];
    printf("%d\n",strlen(str1));
    printf("%d\n",strcmp(str1,str2));
    printf("%s\n%s\n",str2,str1);
    str4[100]=strcpy(str3,str);
    printf("%s\n",strupr(str1));
    printf("%s\n",strrev(str2));
    printf("%s\n",strcat(str1,str2));
    printf("%s\n%s\n%s\n",str1,str2,str3);
    return 0;


}
