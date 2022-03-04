#include<stdio.h>
#include<string.h>
int main()

{
    int len1;
    char str1[100],str2[100],str3[100],str4[100];

    printf("enter a string:");
    gets(str1);
    len1=strlen(str1);
    printf(" The length of the string is: %d\n",len1);

    strcpy(str2,str1);
    printf("the first string is : %s and\n the copied string is : %s\n",str1,str2);

    printf("Enter a string to compare wioth the first string: ");
    gets(str3);

    if(strcmp(str1,str3)==0){
        printf("both strings are equal\n");
    }
    else if(strcmp(str1,str3)>0){
        printf("First string is greater than second string\n");
    }
    else{
        printf("the first string is lesser than second string\n");
    }


    printf("Enter a string to concatenated at the right side of first string:");
    gets(str4);

    strcat(str1,str4);
    printf("The concatenated string is: %s",str1);

return 0;
}
